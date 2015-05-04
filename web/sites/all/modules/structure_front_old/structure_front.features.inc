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

  // Exported image style: logos_footer.
  $styles['logos_footer'] = array(
    'name' => 'logos_footer',
    'label' => 'Logos footer',
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
          'width' => '',
          'height' => 50,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: miniature_serie_photo.
  $styles['miniature_serie_photo'] = array(
    'name' => 'miniature_serie_photo',
    'label' => 'Miniature serie photo',
    'effects' => array(
      2 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 85,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_image.
  $styles['sidebar_image'] = array(
    'name' => 'sidebar_image',
    'label' => 'Sidebar image',
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
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function structure_front_node_info() {
  $items = array(
    'opp_photo' => array(
      'name' => t('Série POPP'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre de la série'),
      'help' => '',
    ),
    'partner_logo' => array(
      'name' => t('Logo partenaire'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'popp_page' => array(
      'name' => t('Page POPP'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'supporting_structure' => array(
      'name' => t('Page de la Structure Porteuse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
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
    "weight" : "0",
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
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['popp_profile_participative'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "popp_profile_participative",
    "label" : "Volet participatif",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
