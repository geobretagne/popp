<?php
/**
 * @file
 * structure_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function structure_front_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function structure_front_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function structure_front_image_default_styles() {
  $styles = array();

  // Exported image style: affichage_fiche_porteur.
  $styles['affichage_fiche_porteur'] = array(
    'label' => 'Affichage fiche porteur',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: height_fourty.
  $styles['height_fourty'] = array(
    'label' => 'hauteur 40',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 40,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logos_footer.
  $styles['logos_footer'] = array(
    'label' => 'Logos footer',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 50,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: miniature_serie_photo.
  $styles['miniature_serie_photo'] = array(
    'label' => 'Miniature serie photo',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 85,
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

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
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: sidebar_image.
  $styles['sidebar_image'] = array(
    'label' => 'Sidebar image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 5,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function structure_front_default_profile2_type() {
  $items = array();
  $items['contact_information'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "contact_information",
    "label" : "Coordonn\\u00e9es",
    "weight" : "1",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['identification'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "identification",
    "label" : "Identification",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['my_commitments'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "my_commitments",
    "label" : "Mes engagements",
    "weight" : "3",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
