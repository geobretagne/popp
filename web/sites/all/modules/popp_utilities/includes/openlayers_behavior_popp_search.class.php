<?php

/**
 * Search behavior
 */
class openlayers_behavior_popp_search extends openlayers_behavior
{
    /**
     * Provide initial values for options.
     */
    function options_init()
    {
        return array(
            'layers' => array(),
        );
    }

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
        drupal_add_js(drupal_get_path('module', 'popp_utilities') .
            '/js/openlayers_behavior_popp_search.js');
        return $this->options;
    }

}