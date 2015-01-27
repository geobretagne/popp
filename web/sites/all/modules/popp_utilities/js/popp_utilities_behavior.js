// $Id

/**
 * @file
 * Main JS file for geofield
 *
 * @ingroup geofield
 */
(function($) {
    Drupal.behaviors.openlayers_behavior_popp = {
        'attach': function(context, settings) {
            var data = $(context).data("openlayers");
            if(data != undefined){
                /* Remember last position before a search */
                var map = data.map;
                layers = data.openlayers.getLayersByClass('OpenLayers.Layer.Vector');
                if(layers[0].features[0] !== undefined){
                    var nid = layers[0].features[0].attributes.nid;
                    var bound = new OpenLayers.Bounds();
                    for(var i in layers[0].features){
                        bound.extend(layers[0].features[i].geometry.getBounds());
                        console.log(bound);
                    }
                    data.openlayers.setCenter(bound.getCenterLonLat());
                    data.openlayers.zoomToExtent(bound);
                    displaySerie(nid);
                }
                var popupSelect = new OpenLayers.Control.SelectFeature(layers,
                    {
                        onSelect: function(feature) {
                            displaySerie(feature.data.nid);
                            fullExtent = feature.geometry.getBounds();
                            this.map.setCenter(fullExtent.toArray());
                        },
                        onUnselect: function(feature) {
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

    function queryParameters () {
        var result = new Array();

        var params = window.location.search.split(/\?|\&/);

        params.forEach( function(it) {
            if (it) {
                var param = it.split("=");
                if(param[1] != '')
                    result.push(param[1]);
            }
        });

        return result;
    }

    function displaySerie(nid){
        $.post(
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_results_view',view_display_id: 'block',view_args: nid
            },

            function(response)
            {
                if (response[1] !== undefined)
                {
                    var viewHtml = response[1].data;
                    $("#photoResult").html(viewHtml).addClass("well");
                    Drupal.attachBehaviors();
                }
            }
        );
    }
})(jQuery);
