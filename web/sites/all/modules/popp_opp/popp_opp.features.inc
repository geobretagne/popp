<?php
/**
 * @file
 * popp_opp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function popp_opp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function popp_opp_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function popp_opp_node_info() {
  $items = array(
    'opp' => array(
      'name' => t('Porteur OPP'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'opp_takepart' => array(
      'name' => t('Porteur  OPP-PA'),
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
