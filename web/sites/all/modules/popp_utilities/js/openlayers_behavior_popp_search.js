/**
 * Created by lbodiguel on 23/02/2015.
 */


(function ($) {
    var data;
    var availableNids = [], acceptedNids = [];
    $(document).ready(function(){
        $("#spatialSearch").click(function () {
            if ($(this).hasClass('active')) {
                $(this).removeClass('active');
            } else {
                $(this).addClass('active');
            }
        });
    });

    Drupal.behaviors.openlayers_behavior_popp_search = {
        'attach': function (context, settings) {
            if ($(context).data("openlayers") != undefined) {
                data = $(context).data("openlayers");
                updateAvailableNids();
                $("#popp_search_block").on('click', '#searchButton', updateLayers);
                data.openlayers.events.on({
                    "moveend": updateSearchFields
                });
                layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
                for (var i in layers) {
                    layers[i].strategies[0].createCluster = function (feature) {
                        var count = 0;
                        if (feature.style == null) {
                            count++;
                        }
                        var center = feature.geometry.getBounds().getCenterLonLat();
                        var cluster = new OpenLayers.Feature.Vector(
                            new OpenLayers.Geometry.Point(center.lon, center.lat),
                            {count: count}
                        );
                        cluster.cluster = [feature];
                        return cluster;
                    };
                    layers[i].strategies[0].shouldCluster = function (cluster, feature) {
                        if (feature.style != undefined) {
                            if (feature.style.visibility != undefined) {
                                return false;
                            }
                        }
                        var cc = cluster.geometry.getBounds().getCenterLonLat();
                        var fc = feature.geometry.getBounds().getCenterLonLat();
                        var distance = (
                        Math.sqrt(
                            Math.pow((cc.lon - fc.lon), 2) + Math.pow((cc.lat - fc.lat), 2)
                        ) / this.resolution
                        );
                        return (distance <= this.distance);
                    };
                }
            }
        }
    };

    function array_intersect(arr) {
        if (arr.length < 1) {
            return availableNids;
        }
        var result = arr.shift().filter(function (v) {
            return arr.every(function (a) {
                return a.indexOf(v) !== -1;
            });
        });
        return result;
    }


    function updateAvailableNids() {
        availableNids = new Array();
        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        if (layers.length > 0) {
            for (var i in layers) {
                if (layers[i].features[0] !== undefined) {
                    for (var j in layers[i].features) {
                        if (layers[i].features[j].onScreen()) {
                            if (layers[i].features[j].cluster != undefined) {
                                for (var k in layers[i].features[j].cluster) {
                                    availableNids.push(layers[i].features[j].cluster[k].data.nid);
                                }
                            } else {
                                availableNids.push(layers[i].features[j].data.nid);
                            }

                        }
                    }
                }
            }
        }
        availableNids = $.unique(availableNids);
    }

    function saveActualSearch() {
        console.log(availableNids);
        console.log(data.openlayers.getCenter());
        console.log(data.openlayers.getZoom());
        console.log(JSON.stringify($("#poppSearchForm").serializeArray()));
    }

    function updateSearchFields() {
        updateAvailableNids();
        $("#popp_search_block select option").each(function (i, elt) {
            if ($(elt).val() != "") {
                var nids = $(elt).attr('presenton').split(',');
                var toHide = true;
                $(nids).each(function (j, foundNid) {
                    if (availableNids.indexOf(foundNid) != -1) {
                        toHide = false;
                        return;
                    }
                });
                if (toHide) {
                    $(elt).hide();
                } else {
                    $(elt).show();
                }
            }
        });
    }

    function updateLayers(e) {
        if(data.openlayers.popups[0] !== undefined){
            data.openlayers.removePopup(data.openlayers.popups[0]);
        }

        var spatialSearch = $("#spatialSearch").hasClass('active');
        if (spatialSearch) {
            doCenter = false;
        }

        var result = new Array();
        $("#poppSearchForm select option, #advancedSearchModal input, #advancedSearchModal option").each(function (i, elt) {
            if (($(elt).prop('selected') || $(elt).prop('checked')) && $(elt).val() != '') {
                var tab = $(elt).attr('presenton').split(',');
                result.push(tab);
            }
        });
        result = array_intersect(result);
        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        if (layers.length > 0) {
            for (var i in layers) {
                if (layers[i].features[0] !== undefined) {
                    var first = true;
                    for (var j in layers[i].features) {
                        if (layers[i].features[j].cluster != null) {
                            for (var k in layers[i].features[j].cluster) {
                                if (result.indexOf(layers[i].features[j].cluster[k].data.nid) == -1 || (spatialSearch && !layers[i].features[j].onScreen())) {
                                    layers[i].features[j].cluster[k].style = {visibility: 'hidden'};
                                    popupSelect.unselect(layers[i].features[j]);
                                } else {
                                    if (first) {
                                        first = false;
                                        popupSelect.select(layers[i].features[j]);
                                    }
                                    delete layers[i].features[j].cluster[k].style;
                                }
                            }
                        } else {
                            if (result.indexOf(layers[i].features[j].data.nid) == -1 || (spatialSearch && !layers[i].features[j].onScreen())) {
                                layers[i].features[j].style = {visibility: 'hidden'};
                                popupSelect.unselect(layers[i].features[j]);
                            } else {
                                if (first) {
                                    first = false;
                                    popupSelect.select(layers[i].features[j]);
                                }else{
                                    popupSelect.unselect(layers[i].features[j]);
                                }
                                delete layers[i].features[j].style;
                            }
                        }
                    }
                }
                layers[i].strategies[0].resolution++;
                layers[i].events.triggerEvent("moveend", {zoomChanged: true});
                layers[i].redraw();
            }
        }
        //  saveActualSearch();
        e.preventDefault();
        e.stopImmediatePropagation();
        return false;
    }
})(jQuery);