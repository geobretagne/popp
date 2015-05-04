<?php
/**
 * @file
 * carto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carto_ctools_plugin_api($module = NULL, $api = NULL) {
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
    'name' => 'photo_sheet_display',
    'label' => 'Affichage fiche photo',
    'effects' => array(
      1 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
