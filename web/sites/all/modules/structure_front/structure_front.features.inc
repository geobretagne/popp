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
 * Implements hook_flag_default_flags().
 */
function structure_front_flag_default_flags() {
  $flags = array();
  // Exported flag: "Ajout de séries dans la panier".
  $flags['add_serie_caddy'] = array(
    'entity_type' => 'node',
    'title' => 'Ajout de séries dans la panier',
    'global' => 0,
    'types' => array(
      0 => 'popp_photo_serie',
    ),
    'flag_short' => 'Ajouter dans le panier',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Retirer du panier',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'structure_front',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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
        'weight' => 1,
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
        'weight' => 1,
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
    'partner_logo' => array(
      'name' => t('Logo partenaire'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'popp_documentation' => array(
      'name' => t('Documentation'),
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
    'popp_photo' => array(
      'name' => t('Photo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'popp_photo_serie' => array(
      'name' => t('Série photo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre de la série'),
      'help' => '',
    ),
    'popp_record_field' => array(
      'name' => t('Fiche terrain'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'popp_reference_document' => array(
      'name' => t('Document référence'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Identifiant du document de référence'),
      'help' => '',
    ),
    'popp_testimony_sheet' => array(
      'name' => t('Son'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre du son'),
      'help' => '',
    ),
    'supporting_structure' => array(
      'name' => t('Fiche porteur OPP'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
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
