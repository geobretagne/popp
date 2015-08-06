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
    'api_version' => 3,
    'module' => 'admin_structure',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
