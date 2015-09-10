// $Id

/**
 * @file
 * Main JS file for geofield
 *
 * @ingroup geofield
 */
var data;
var lastNid;
(function ($) {
    Drupal.behaviors.openlayers_behavior_popp = {
        'attach': function (context, settings) {
            if ($(context).data("openlayers") != undefined) {
                data = $(context).data("openlayers");
                /* Remember last position before a search */
                var map = data.map;
                console.log("pass");
                prepareMap();
                layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
                var popupSelect = new OpenLayers.Control.SelectFeature(layers,
                    {
                        onSelect: function (feature) {
                            displaySerie(feature.cluster[0].data.nid, "clickIcon");
                            var fullExtent = feature.cluster[0].geometry.getBounds();
                            data.openlayers.events.remove('moveend');
                            this.map.setCenter(fullExtent.toArray());
                            data.openlayers.events.on({
                                "moveend": refreshList
                            });
                            Drupal.attachBehaviors();
                        },
                        onUnselect: function (feature) {
                            $("#photoResult").html("").removeClass("well");
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

    function prepareMap() {

        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        if (layers[0].features[0] !== undefined) {
            lastNid = null;
            var nid = layers[0].features[0].cluster[0].attributes.nid;
            var bound = new OpenLayers.Bounds();
            for (var i in layers[0].features) {
                bound.extend(layers[0].features[i].cluster[0].geometry.getBounds());
            }
            data.openlayers.setCenter(bound.getCenterLonLat());
            data.openlayers.zoomToExtent(bound);
            data.openlayers.zoomTo(data.openlayers.getZoom() - 1);
            displaySerie(nid, "init");
            data.openlayers.events.on({
                "moveend": refreshList
            });
        }

        var highlightCtrl = new OpenLayers.Control.SelectFeature(layers[0], {
            hover: true,
            highlightOnly: true,
            renderIntent: 'temporary'
        });
        highlightCtrl.handlers['feature'].stopDown = false;
        highlightCtrl.handlers['feature'].stopUp = false;

        map.addControl(highlightCtrl);
        highlightCtrl.activate();
    }

    function refreshList() {
        var layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
        var firstNid = null;
        if (layers.length > 0) {
            for (var i in layers) {
                if (layers[i].features[0] !== undefined) {
                    for (var j in layers[i].features) {
                        if (layers[i].features[j].onScreen()) {
                            if (firstNid == null) {
                                firstNid = layers[i].features[j].cluster[0].attributes.nid;
                            }
                        }
                    }
                    layers[i].redraw();
                }
            }
        }
        displaySerie(firstNid, "drag");
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
            $("#photoResult").html("").removeClass("well");
            return;
        }
        $.post(
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_results_view', view_display_id: 'block', view_args: nid
            },

            function (response) {
                if (response[1] !== undefined) {
                    var viewHtml = response[1].data;
                    $("#photoResult").html(viewHtml).addClass("well");
                    Drupal.attachBehaviors();
                }
            }
        );
    }
})(jQuery);
