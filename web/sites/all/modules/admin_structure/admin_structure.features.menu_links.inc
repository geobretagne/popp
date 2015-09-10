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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ajouter un OPP Participatif');
  t('Ajouter un OPP Standard');
  t('Ajouter un logo partenaire');
  t('Ajouter une FAQ');
  t('Ajouter une structure porteuse');
  t('Gestion des utilisateurs');
  t('Import de masse');


  return $menu_links;
}
