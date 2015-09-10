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

  $export['faq-faq_categories'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'faq_categories',
    'module' => 'faq',
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

  $export['menu-menu-menu-footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-menu-footer',
    'module' => 'menu',
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
        'region' => 'footer_bottom',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'popp' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['popp_utilities-popp_advanced_search_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'popp_advanced_search_block',
    'module' => 'popp_utilities',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -20,
      ),
      'popp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-2ccb774735d21ca20a646910dab53f9d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '2ccb774735d21ca20a646910dab53f9d',
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
        'weight' => 0,
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

  $export['views-7bf7855bef46b46b5b9b37a0c1c2e407'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '7bf7855bef46b46b5b9b37a0c1c2e407',
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
        'region' => 'partners_footer',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-og_members-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'og_members-block_1',
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
        'weight' => 4,
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

  $export['views-popp_partners_logos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_partners_logos-block',
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
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'popp',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-popp_refdoc_display-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_refdoc_display-block',
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
        'weight' => 0,
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

  $export['views-popp_refdoc_display-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_refdoc_display-block_1',
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
        'weight' => 0,
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

  $export['views-popp_search_result_view-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_search_result_view-block',
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
        'weight' => 8,
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

  $export['views-popp_search_result_view-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_search_result_view-block_1',
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
        'weight' => 5,
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

  $export['views-popp_search_result_view-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_search_result_view-block_2',
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
        'weight' => 6,
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

  $export['views-popp_search_result_view-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_search_result_view-block_3',
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
        'weight' => 7,
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

  $export['views-popp_testimonies_display-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popp_testimonies_display-block',
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
        'weight' => 9,
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
