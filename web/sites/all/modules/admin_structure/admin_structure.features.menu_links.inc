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

  // Exported menu link: menu-administration-contenu_ajouter-un-logo-partenaire:node/add/partner-logo
  $menu_links['menu-administration-contenu_ajouter-un-logo-partenaire:node/add/partner-logo'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/partner-logo',
    'router_path' => 'node/add/partner-logo',
    'link_title' => 'Ajouter un logo partenaire',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-un-logo-partenaire:node/add/partner-logo',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-un-opp-participatif:node/add/opp-takepart
  $menu_links['menu-administration-contenu_ajouter-un-opp-participatif:node/add/opp-takepart'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/opp-takepart',
    'router_path' => 'node/add/opp-takepart',
    'link_title' => 'Ajouter un OPP Participatif',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-un-opp-participatif:node/add/opp-takepart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-un-opp-standard:node/add/opp
  $menu_links['menu-administration-contenu_ajouter-un-opp-standard:node/add/opp'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/opp',
    'router_path' => 'node/add/opp',
    'link_title' => 'Ajouter un OPP Standard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-un-opp-standard:node/add/opp',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-une-srie:node/add/popp-photo-serie
  $menu_links['menu-administration-contenu_ajouter-une-srie:node/add/popp-photo-serie'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/popp-photo-serie',
    'router_path' => 'node/add/popp-photo-serie',
    'link_title' => 'Ajouter une série',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-une-srie:node/add/popp-photo-serie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_ajouter-une-structure-porteuse:node/add/supporting-structure
  $menu_links['menu-administration-contenu_ajouter-une-structure-porteuse:node/add/supporting-structure'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'node/add/supporting-structure',
    'router_path' => 'node/add/supporting-structure',
    'link_title' => 'Ajouter une structure porteuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_ajouter-une-structure-porteuse:node/add/supporting-structure',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
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
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_grer-les-sries:popp-view-all-serie
  $menu_links['menu-administration-contenu_grer-les-sries:popp-view-all-serie'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'popp-view-all-serie',
    'router_path' => 'popp-view-all-serie',
    'link_title' => 'Gérer les séries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_grer-les-sries:popp-view-all-serie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_import-de-masse:popp/import
  $menu_links['menu-administration-contenu_import-de-masse:popp/import'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'popp/import',
    'router_path' => 'popp/import',
    'link_title' => 'Import de masse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_import-de-masse:popp/import',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ajouter un OPP Participatif');
  t('Ajouter un OPP Standard');
  t('Ajouter un logo partenaire');
  t('Ajouter une FAQ');
  t('Ajouter une structure porteuse');
  t('Ajouter une série');
  t('Gestion des utilisateurs');
  t('Gérer les TAGS');
  t('Gérer les séries');
  t('Import de masse');


  return $menu_links;
}
