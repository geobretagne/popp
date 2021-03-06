<?php
/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * Popup Behavior
 */
class openlayers_behavior_popp_series extends openlayers_behavior {
    /**
     * Provide initial values for options.
     */
    function options_init() {
        return array(
            'layers' => array(),
            'panMapIfOutOfView' => FALSE,
            'keepInMap' => TRUE,
            'zoomToPoint' => FALSE,
            'zoomToCluster' => FALSE,
        );
    }

    /**
     * Form defintion for per map customizations.
     */
    function options_form($defaults = array()) {
        // Only prompt for vector layers
        $vector_layers = array();
        foreach ($this->map['layers'] as $id => $name) {
            $layer = openlayers_layer_load($id);
            if (isset($layer->data['vector']) && $layer->data['vector'] == TRUE) {
                $vector_layers[$id] = $name;
            }
        }

        return array(
            'layers' => array(
                '#title' => t('Layers'),
                '#type' => 'checkboxes',
                '#options' => $vector_layers,
                '#description' => t('Select layer to apply popups to.'),
                '#default_value' => isset($defaults['layers']) ?
                    $defaults['layers'] : array(),
            ),
        );
    }

    /**
     * Render.
     */
    function render(&$map) {
        drupal_add_css(drupal_get_path('module', 'popp_utilities') .
            '/css/popp_utilities_behavior.css');
        drupal_add_js(drupal_get_path('module', 'popp_utilities') .
            '/js/popp_utilities_behavior.js');
        return $this->options;
    }
}
