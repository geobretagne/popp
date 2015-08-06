<?php
/**
 * @file
 * admin_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function admin_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administration-contenu.
  $menus['menu-administration-contenu'] = array(
    'menu_name' => 'menu-administration-contenu',
    'title' => 'Gestion du Contenu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gestion du Contenu');


  return $menus;
}
