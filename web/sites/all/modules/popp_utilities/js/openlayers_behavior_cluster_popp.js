/**
 * @file
 * OpenLayers Behavior implementation for clustering, modified in order to match OPP Platforms requirements
 */

/**
 * OpenLayers Cluster Behavior.
 */
Drupal.openlayers.addBehavior('openlayers_behavior_cluster_popp', function (data, options) {
    var map = data.openlayers;
    var layers = [];
    for (var i in options.clusterlayer) {
        var selectedLayer = map.getLayersBy('drupalID', options.clusterlayer[i]);
        if (selectedLayer[0] instanceof OpenLayers.Layer.Vector) {
            layers.push(selectedLayer[0]);
        }
    }

    // Cluster chosen layers
    jQuery(layers).each(function(index, layer){
        var cluster = new OpenLayers.Strategy.Cluster(options);
        layer.addOptions({ 'strategies': [cluster] });
        cluster.setLayer(layer);
        cluster.features = layer.features.slice();
        cluster.activate();
        cluster.cluster();
        var showLabel = "";
        if (options.display_cluster_numbers) {
            showLabel = "${count}";
        }

        // Loop through all the usual render intents and inherit their defaultStyles.
        var intents = ['default', 'select', 'temporary', 'delete'];
        intents.forEach(function(intent) {
            // Style for an individual feature (which is not clustered)
            var ruleIndividual = new OpenLayers.Rule({
                filter: new OpenLayers.Filter.Comparison({
                    type: OpenLayers.Filter.Comparison.LESS_THAN,
                    property: "count",
                    value: 2
                }),
                // Apply the style you've selected for this layer for the individual points
                symbolizer: layer.styleMap.styles[intent].defaultStyle
            });

            // Define three rules to style the cluster features.
            // 1) Clusters with a small feature count.
            var symbolizer = {
                fillColor: options.low_color,
                strokeColor: options.low_stroke_color,
                fillOpacity: options.low_opacity,
                pointRadius: options.low_point_radius,
                label: showLabel,
                labelOutlineWidth: options.low_label_outline,
                labelOutlineColor: options.low_label_outline_color,
                fontColor: options.low_label_color,
                fontOpacity: options.low_label_opacity,
                fontSize: "12px"
            };
            // Avoid overriding existing externalGraphic in inherited style
            if(options.externalGraphic != ''){
                symbolizer.externalGraphic = options.externalGraphic;
            }
            var ruleLow = new OpenLayers.Rule({
                filter: new OpenLayers.Filter.Comparison({
                    type: OpenLayers.Filter.Comparison.BETWEEN,
                    property: "count",
                    lowerBoundary: 2,
                    upperBoundary: options.middle_lower_bound
                }),
                symbolizer: symbolizer
            });
            // 2) Clusters with a middle feature count.
            symbolizer = {
                fillColor: options.middle_color,
                strokeColor: options.middle_stroke_color,
                fillOpacity: options.middle_opacity,
                pointRadius: options.middle_point_radius,
                label: showLabel,
                labelOutlineWidth: options.middle_label_outline,
                labelOutlineColor: options.middle_label_outline_color,
                fontColor: options.middle_label_color,
                fontOpacity: options.middle_label_opacity,
                fontSize: "12px"
            };
            if(options.externalGraphic != ''){
                symbolizer.externalGraphic = options.externalGraphic;
            }
            var ruleMiddle = new OpenLayers.Rule({
                filter: new OpenLayers.Filter.Comparison({
                    type: OpenLayers.Filter.Comparison.BETWEEN,
                    property: "count",
                    lowerBoundary: options.middle_lower_bound,
                    upperBoundary: options.middle_upper_bound
                }),
                symbolizer: symbolizer
            });

            // 3) Clusters with a high feature count.
            symbolizer = {
                fillColor: options.high_color,
                strokeColor: options.high_stroke_color,
                fillOpacity: options.high_opacity,
                pointRadius: options.high_point_radius,
                label: showLabel,
                labelOutlineWidth: options.high_label_outline,
                labelOutlineColor: options.high_label_outline_color,
                fontColor: options.high_label_color,
                fontOpacity: options.high_label_opacity,
                fontSize: "12px"
            };
            if(options.externalGraphic != ''){
                symbolizer.externalGraphic = options.externalGraphic;
            }
            var ruleHigh = new OpenLayers.Rule({
                filter: new OpenLayers.Filter.Comparison({
                    type: OpenLayers.Filter.Comparison.GREATER_THAN,
                    property: "count",
                    value: options.middle_upper_bound
                }),
                symbolizer:symbolizer
            });
            var ruleElse = new OpenLayers.Rule({
                filter: new OpenLayers.Filter.Comparison({
                    type: OpenLayers.Filter.Comparison.EQUAL_TO,
                    property: "count",
                    value: undefined
                }),
                symbolizer: layer.styleMap.styles[intent].defaultStyle,
                elseFilter: true
            });

            layer.styleMap.styles[intent].addRules([ruleIndividual, ruleLow, ruleMiddle, ruleHigh, ruleElse]);
        });

        layer.redraw();
    });
});