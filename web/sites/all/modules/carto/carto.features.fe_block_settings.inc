<?php
/**
 * @file
 * carto.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function carto_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-popp_main_photo_display-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_main_photo_display-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'popp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'popp',
        'weight' => 10,
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
