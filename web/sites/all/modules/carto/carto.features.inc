<?php
/**
 * @file
 * carto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function carto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function carto_image_default_styles() {
  $styles = array();

  // Exported image style: photo_sheet_display.
  $styles['photo_sheet_display'] = array(
    'label' => 'Affichage fiche photo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 725,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
