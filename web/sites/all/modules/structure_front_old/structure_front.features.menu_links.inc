<?php
/**
 * @file
 * structure_front.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function structure_front_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer_conditions-dutilisation:popp-cgu
  $menu_links['menu-menu-footer_conditions-dutilisation:popp-cgu'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'popp-cgu',
    'router_path' => 'popp-cgu',
    'link_title' => 'Conditions d\'utilisation',
    'options' => array(
      'identifier' => 'menu-menu-footer_conditions-dutilisation:popp-cgu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_contact:contact
  $menu_links['menu-menu-footer_contact:contact'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_dconnexion:user/logout
  $menu_links['menu-menu-footer_dconnexion:user/logout'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Déconnexion',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_dconnexion:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_mentions-lgales:popp-mentions-legales
  $menu_links['menu-menu-footer_mentions-lgales:popp-mentions-legales'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'popp-mentions-legales',
    'router_path' => 'popp-mentions-legales',
    'link_title' => 'Mentions légales',
    'options' => array(
      'identifier' => 'menu-menu-footer_mentions-lgales:popp-mentions-legales',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_plan-du-site:sitemap
  $menu_links['menu-menu-footer_plan-du-site:sitemap'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Plan du site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_plan-du-site:sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_a-propos:popp-apropos
  $menu_links['menu-popp-principal_a-propos:popp-apropos'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'popp-apropos',
    'router_path' => 'popp-apropos',
    'link_title' => 'A propos',
    'options' => array(
      'identifier' => 'menu-popp-principal_a-propos:popp-apropos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_accueil:accueil
  $menu_links['menu-popp-principal_accueil:accueil'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'accueil',
    'router_path' => 'accueil',
    'link_title' => 'Accueil',
    'options' => array(
      'identifier' => 'menu-popp-principal_accueil:accueil',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_faq:faq-page
  $menu_links['menu-popp-principal_faq:faq-page'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popp-principal_faq:faq-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_participez:popp-participez
  $menu_links['menu-popp-principal_participez:popp-participez'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'popp-participez',
    'router_path' => 'popp-participez',
    'link_title' => 'Participez',
    'options' => array(
      'identifier' => 'menu-popp-principal_participez:popp-participez',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_span-classglyphicon-glyphicon-log-inspan:user/login
  $menu_links['menu-popp-principal_span-classglyphicon-glyphicon-log-inspan:user/login'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => '<span class="glyphicon glyphicon-log-in"></span>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popp-principal_span-classglyphicon-glyphicon-log-inspan:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_structures-porteuses:popp-structure
  $menu_links['menu-popp-principal_structures-porteuses:popp-structure'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'popp-structure',
    'router_path' => 'popp-structure',
    'link_title' => 'Structures Porteuses',
    'options' => array(
      'identifier' => 'menu-popp-principal_structures-porteuses:popp-structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<span class="glyphicon glyphicon-log-in"></span>');
  t('A propos');
  t('Accueil');
  t('Conditions d\'utilisation');
  t('Contact');
  t('Déconnexion');
  t('FAQ');
  t('Mentions légales');
  t('Participez');
  t('Plan du site');
  t('Structures Porteuses');


  return $menu_links;
}
