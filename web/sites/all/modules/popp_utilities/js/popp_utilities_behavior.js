// $Id

/**
 * @file
 * Main JS file for geofield
 *
 * @ingroup geofield
 */
var data, globaLayer, popupSelect;
var lastNid, lastFeature;
var doCenter = true;
(function ($) {

    Drupal.behaviors.openlayers_behavior_popp = {
        'attach': function (context, settings) {
            if ($(context).data("openlayers") != undefined) {
                $(context).data("openlayers").Strategy = null;
                data = $(context).data("openlayers");
                /* Remember last position before a search */
                prepareMap();
                data.openlayers.events.on({
                    "zoomend": resetLayers
                });
                layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
                popupSelect = new OpenLayers.Control.SelectFeature(layers,
                    {
                        onSelect: function (feature) {
                            lastFeature = feature;
                            resetLayers();
                            var point = null;
                            if(feature.cluster != undefined){
                                for(var i in feature.cluster){
                                    if(feature.cluster.style == null){
                                        point = feature.cluster[i];
                                        break;
                                    }
                                }

                            }else{
                                point = feature;
                            }
                            displaySerie(point.data.nid, "clickIcon");
                            globaLayer = feature.layer;
                            var fullExtent = point.geometry.getBounds();
                            data.openlayers.events.remove('moveend');
                            if(doCenter){
                                this.map.setCenter(fullExtent.toArray());
                            }
                            data.openlayers.events.on({
                                "moveend": refreshList
                            });
                            Drupal.attachBehaviors();
                        },
                        onUnselect: function (feature) {
                            $("#photoResult").html("").hide();
                            delete lastFeature;
                            Drupal.attachBehaviors();
                        }
                    }
                );
                popupSelect.handlers['feature'].stopDown = false;
                popupSelect.handlers['feature'].stopUp = false;
                data.openlayers.addControl(popupSelect);
                popupSelect.activate();
            }
        }
    };

    function resetLayers(){
        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        popupSelect.events.unregister("onSelect");
        if (layers[0].features[0] !== undefined) {
            for (var i in layers[0].features){
                if (layers[0].features[i].cluster != null) {
                    for(var j in layers[0].cluster){
                        var id = layers[0].features[i].cluster[j].id;
                        if(lastFeature !== undefined && id == lastFeature.id){
                            return;
                        }
                    }
                } else {
                    var id = layers[0].features[i].id;
                    if(lastFeature !== undefined && id == lastFeature.id){
                        return;
                    }
                }
            }
            for (var i in layers[0].features){
                if (layers[0].features[i].cluster != null) {
                    for(var j in layers[0].cluster){
                        var id = layers[0].features[i].cluster[j].id;
                        if(lastFeature !== undefined && id == lastFeature.id){
                            //popupSelect.select(layers[0].features[i].cluster[j]);
                        }else{
                            popupSelect.unselect(layers[0].features[i].cluster[j]);
                        }
                    }
                } else {
                    var id = layers[0].features[i].id;
                    if(lastFeature !== undefined && id == lastFeature.id){
                        //popupSelect.select(layers[0].features[i]);
                    }else{
                        popupSelect.unselect(layers[0].features[i]);
                    }
                }
            }
            layers[0].redraw();
        }
    }

    function prepareMap() {

        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        if (layers[0].features[0] !== undefined) {
            lastNid = null;
            var point = null;
            if (layers[0].features[0].cluster != undefined) {
                point = layers[0].features[0].cluster[0];
            } else {
                point = layers[0].features[0];
            }
            var nid = point.attributes.nid;
            var bound = new OpenLayers.Bounds();

            for (var l in layers){
                for (var i in layers[l].features) {
                    if (layers[l].features[i].cluster != null) {
                        bound.extend(layers[l].features[i].cluster[0].geometry.getBounds());
                    } else {
                        bound.extend(layers[l].features[i].geometry.getBounds());
                    }
                }
            }

            data.openlayers.setCenter(bound.getCenterLonLat());
            data.openlayers.zoomToExtent(bound);
            data.openlayers.zoomTo(data.openlayers.getZoom() - 1);
            displaySerie(nid, "init");
            data.openlayers.events.on({
                "moveend": refreshList
            });
        }
    }

    function refreshList() {
        if($("#spatialSearch:checked").size() == 0){
            doCenter = true;
            return;
        }
        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        var atLeastOneOnScreen = lastFeature !== undefined && lastFeature.onScreen()?true:false;
        if (layers.length > 0 && (lastFeature === undefined || !lastFeature.onScreen())) {
            for (var i in layers) {
                if (layers[i].features[0] !== undefined) {
                    for (var j in layers[i].features) {
                        if (layers[i].features[j].onScreen() && layers[i].features[j].style == null) {
                            doCenter = false;
                            popupSelect.unselectAll();
                            popupSelect.select(layers[i].features[j]);
                            doCenter = true;
                            return;
                        }else if(layers[i].features[j].onScreen()){
                            atLeastOneOnScreen = true;
                        }
                    }
                }
            }
        }
        if(!atLeastOneOnScreen){
            popupSelect.unselectAll();
            lastFeature = undefined;
        }
    }

    function queryParameters() {
        var result = new Array();
        var params = window.location.search.split(/\?|\&/);
        params.forEach(function (it) {
            if (it) {
                var param = it.split("=");
                if (param[1] != '')
                    result.push(param[1]);
            }
        });
        return result;
    }

    function displaySerie(nid, source) {
        if (lastNid == nid && source != "clickIcon") {
            return;
        }
        lastNid = nid;
        if (nid == null) {
            $("#photoResult").html('').hide();
            return;
        }
        $.post(
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_search_result_view', view_display_id: 'block', view_args: nid
            },

            function (response) {
                if (response[1] !== undefined) {
                    var viewHtml = response[1].data;
                    $("#photoResult").html(viewHtml).show();
                    Drupal.attachBehaviors();
                }
            }
        );
    }
})(jQuery);
