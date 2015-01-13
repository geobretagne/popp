<?php
/**
 * @file
 * admin_structure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function admin_structure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration-contenu_ajouter-un-logo-partenaire:node/add/logo-partenaire
  $menu_links['menu-administration-contenu_ajouter-un-logo-partenaire:node/add/logo-partenaire'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/logo-partenaire',
    'router_path' => 'node/add',
    'link_title' => 'Ajouter un logo partenaire',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-un-logo-partenaire:node/add/logo-partenaire',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-un-logo-structure-porteuse:node/add/logo-structures-porteuses
  $menu_links['menu-administration-contenu_ajouter-un-logo-structure-porteuse:node/add/logo-structures-porteuses'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/logo-structures-porteuses',
    'router_path' => 'node/add',
    'link_title' => 'Ajouter un logo structure porteuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-un-logo-structure-porteuse:node/add/logo-structures-porteuses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-une-faq:node/add/faq
  $menu_links['menu-administration-contenu_ajouter-une-faq:node/add/faq'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'Ajouter une FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-une-faq:node/add/faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-une-photo:node/add/opp-photo
  $menu_links['menu-administration-contenu_ajouter-une-photo:node/add/opp-photo'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/opp-photo',
    'router_path' => 'node/add/opp-photo',
    'link_title' => 'Ajouter une photo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-une-photo:node/add/opp-photo',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-une-srie:node/add/opp-serie
  $menu_links['menu-administration-contenu_ajouter-une-srie:node/add/opp-serie'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/opp-serie',
    'router_path' => 'node/add/opp-serie',
    'link_title' => 'Ajouter une série',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-une-srie:node/add/opp-serie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-utilisateurs:admin/people
  $menu_links['menu-administration-contenu_gestion-des-utilisateurs:admin/people'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Gestion des utilisateurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_gestion-des-utilisateurs:admin/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_grer-les-tags:admin/structure/taxonomy
  $menu_links['menu-administration-contenu_grer-les-tags:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Gérer les TAGS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_grer-les-tags:admin/structure/taxonomy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ajouter un logo partenaire');
  t('Ajouter un logo structure porteuse');
  t('Ajouter une FAQ');
  t('Ajouter une photo');
  t('Ajouter une série');
  t('Gestion des utilisateurs');
  t('Gérer les TAGS');


  return $menu_links;
}
