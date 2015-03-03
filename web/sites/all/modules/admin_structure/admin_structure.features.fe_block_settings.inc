<?php
/**
 * @file
 * admin_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function admin_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-administration-contenu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administration-contenu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
