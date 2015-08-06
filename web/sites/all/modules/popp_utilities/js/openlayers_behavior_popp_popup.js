/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Javascript Drupal Theming function for inside of Popups
 *
 * To override
 *
 * @param feature
 *  OpenLayers feature object.
 * @return
 *  Formatted HTML.
 */
Drupal.theme.prototype.openlayersPopup = function (feature) {
    var output = '';

    if (feature.attributes.name) {
        output += '<div class="openlayers-popup openlayers-tooltip-name">' + feature.attributes.name + '</div>';
    }
    if (feature.attributes.description) {
        output += '<div class="openlayers-popup openlayers-tooltip-description">' + feature.attributes.description + '</div>';
    }

    return output;
};

/**
 * Theming popup
 */
Drupal.theme.openlayersPopup = function (feature) {
    if (feature.cluster) {
        var output = '';
        var visited = []; // to keep track of already-visited items
        var classes = [];

        for (var i = 0; i < feature.cluster.length; i++) {
            var pf = feature.cluster[i]; // pseudo-feature
            if (typeof pf.drupalFID != 'undefined') {
                var mapwide_id = feature.layer.drupalID + pf.drupalFID;
                if (mapwide_id in visited) continue;
                visited[mapwide_id] = true;
            }

            classes = [];
            if (i == 0) {
                classes.push('first');
            }
            if (i == (feature.cluster.length - 1)) {
                classes.push('last');
            }
            output += '<div class="'+classes.join(' ')+'">' +
            Drupal.theme.prototype.openlayersPopup(pf) + '</div>';
        }
        return output;
    }
    else {
        return Drupal.theme.prototype.openlayersPopup(feature);
    }
};


// Make sure the namespace exists
Drupal.openlayers.popup = Drupal.openlayers.popup || {};
/**
 * OpenLayers Popup Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_popp_popup', function (data, options) {
    var map = data.openlayers;
    var layers = [];
    var selectedFeature;
    // For backwards compatiability, if layers is not
    // defined, then include all vector layers
    if (typeof options.layers == 'undefined' || options.layers.length == 0) {
        layers = map.getLayersByClass('OpenLayers.Layer.Vector');
    }
    else {
        for (var i in options.layers) {
            var selectedLayer = map.getLayersBy('drupalID', options.layers[i]);
            if (typeof selectedLayer[0] != 'undefined') {
                layers.push(selectedLayer[0]);
            }
        }
    }

    // if only 1 layer exists, do not add as an array.  Kind of a
    // hack, see https://drupal.org/node/1393460
    if (layers.length == 1) {
        //layers = layers[0];
    }

    var popupSelect = new OpenLayers.Control.SelectFeature(layers,
        {
            hover: true,
            renderIntent: 'temporary',
            overFeature: function (feature) {
                var lonlat;
                lonlat = feature.geometry.getBounds().getCenterLonLat();
                var position =  map.getPixelFromLonLat(lonlat);
                // Create FramedCloud popup.
                popup = new OpenLayers.Popup.FramedCloud(
                    'popup',
                    lonlat,
                    //feature.geometry.getBounds().getCenterLonLat(),
                    null,
                    Drupal.theme('openlayersPopup', feature),
                    null,
                    true,
                    function (evt) {
                        while (map.popups.length) {
                            map.removePopup(map.popups[0]);
                        }
                    }
                );
                popup.keepInMap = options.keepInMap;
                selectedFeature = feature;
                feature.popup = popup;
                map.addPopup(popup, true);
                var top = parseInt(jQuery('#popup').css('top'));
                if(popup.relativePosition == "tr" || popup.relativePosition == "tl"){
                    top -= 15;
                }else{
                    top += 10;
                }
                jQuery("#popup").css('top', top);
                Drupal.attachBehaviors();
            },
            outFeature: function (feature) {
                /*map.removePopup(feature.popup);
                 feature.popup.destroy();
                 feature.popup = null;*/
            }
        }
    );

    map.addControl(popupSelect);
    popupSelect.activate();
    Drupal.openlayers.popup.popupSelect = popupSelect;
});
