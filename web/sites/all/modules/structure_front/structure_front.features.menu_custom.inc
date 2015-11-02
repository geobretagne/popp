<?php
/**
 * @file
 * structure_front.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function structure_front_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administration-contenu.
  $menus['menu-administration-contenu'] = array(
    'menu_name' => 'menu-administration-contenu',
    'title' => 'Gestion du Contenu',
    'description' => '',
  );
  // Exported menu: menu-menu-footer.
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'Menu footer',
    'description' => '',
  );
  // Exported menu: menu-popp-principal.
  $menus['menu-popp-principal'] = array(
    'menu_name' => 'menu-popp-principal',
    'title' => 'popp-principal',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gestion du Contenu');
  t('Menu footer');
  t('popp-principal');

  return $menus;
}
