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
    'roles' => array(
      'administrator' => 3,
      'Import de masse' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'popp' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
