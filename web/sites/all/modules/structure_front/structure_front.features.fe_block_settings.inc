<?php
/**
 * @file
 * structure_front.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function structure_front_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-menu-footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-menu-footer',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'footer_bottom',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-popp-principal'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-popp-principal',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['popp_utilities-popp_search_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'popp_search_block',
    'module' => 'popp_utilities',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-7bf7855bef46b46b5b9b37a0c1c2e407'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '7bf7855bef46b46b5b9b37a0c1c2e407',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'popp',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-popp_partners_logos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_partners_logos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'popp' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
