<?php
/**
 * @file
 * admin_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admin_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function admin_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function admin_structure_flag_default_flags() {
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
    'module' => 'admin_structure',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function admin_structure_node_info() {
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
