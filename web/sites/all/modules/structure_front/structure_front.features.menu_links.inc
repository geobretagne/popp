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

  // Exported menu link: menu-administration-contenu_ajouter-un-logo-partenaire:node/add/partner-logo.
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
  // Exported menu link: menu-administration-contenu_ajouter-un-opp-participatif:node/add/opp-takepart.
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
  // Exported menu link: menu-administration-contenu_ajouter-un-opp-standard:node/add/opp.
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
  // Exported menu link: menu-administration-contenu_ajouter-une-faq:node/add/faq.
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
  // Exported menu link: menu-administration-contenu_ajouter-une-structure-porteuse:node/add/supporting-structure.
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
  // Exported menu link: menu-administration-contenu_gestion-des-lments-de-taxonomie:admin/structure/taxonomy.
  $menu_links['menu-administration-contenu_gestion-des-lments-de-taxonomie:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Gestion des éléments de taxonomie',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administration-contenu_gestion-des-lments-de-taxonomie:admin/structure/taxonomy',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-pages:gestion-des-contenus.
  $menu_links['menu-administration-contenu_gestion-des-pages:gestion-des-contenus'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'gestion-des-contenus',
    'router_path' => 'gestion-des-contenus',
    'link_title' => 'Gestion des pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_gestion-des-pages:gestion-des-contenus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-porteurs-opp-pa:gestion-des-porteurs-opp-pa.
  $menu_links['menu-administration-contenu_gestion-des-porteurs-opp-pa:gestion-des-porteurs-opp-pa'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'gestion-des-porteurs-opp-pa',
    'router_path' => 'gestion-des-porteurs-opp-pa',
    'link_title' => 'Gestion des porteurs OPP PA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_gestion-des-porteurs-opp-pa:gestion-des-porteurs-opp-pa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-porteurs-opp:gestion-des-porteurs-opp.
  $menu_links['menu-administration-contenu_gestion-des-porteurs-opp:gestion-des-porteurs-opp'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'gestion-des-porteurs-opp',
    'router_path' => 'gestion-des-porteurs-opp',
    'link_title' => 'Gestion des porteurs OPP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_gestion-des-porteurs-opp:gestion-des-porteurs-opp',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-sries-opp-pa:gestion-des-series-pa.
  $menu_links['menu-administration-contenu_gestion-des-sries-opp-pa:gestion-des-series-pa'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'gestion-des-series-pa',
    'router_path' => 'gestion-des-series-pa',
    'link_title' => 'Gestion des séries OPP PA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_gestion-des-sries-opp-pa:gestion-des-series-pa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_gestion-des-utilisateurs:admin/people.
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
  // Exported menu link: menu-administration-contenu_gestion-du-thsaurus-facultatif:admin/structure/taxonomy/popp_nonreq_thesaurus.
  $menu_links['menu-administration-contenu_gestion-du-thsaurus-facultatif:admin/structure/taxonomy/popp_nonreq_thesaurus'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'admin/structure/taxonomy/popp_nonreq_thesaurus',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Gestion du thésaurus facultatif',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_gestion-du-thsaurus-facultatif:admin/structure/taxonomy/popp_nonreq_thesaurus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_grer-les-sries-opp:gestion-des-series.
  $menu_links['menu-administration-contenu_grer-les-sries-opp:gestion-des-series'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'gestion-des-series',
    'router_path' => 'gestion-des-series',
    'link_title' => 'Gérer les séries OPP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_grer-les-sries-opp:gestion-des-series',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-contenu_import-de-masse:popp/import.
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
  // Exported menu link: menu-administration-contenu_modration-des-publications:admin/content/comment.
  $menu_links['menu-administration-contenu_modration-des-publications:admin/content/comment'] = array(
    'menu_name' => 'menu-administration-contenu',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Modération des publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-contenu_modration-des-publications:admin/content/comment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_conditions-dutilisation:popp-cgu.
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_contact:contact.
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_dconnexion:user/logout.
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
  // Exported menu link: menu-menu-footer_licences:licences.
  $menu_links['menu-menu-footer_licences:licences'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'licences',
    'router_path' => 'licences',
    'link_title' => 'Licences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_licences:licences',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_mentions-lgales:popp-mentions-legales.
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
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-footer_plan-du-site:sitemap.
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_a-propos:popp-apropos.
  $menu_links['menu-popp-principal_a-propos:popp-apropos'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'popp-apropos',
    'router_path' => 'popp-apropos',
    'link_title' => 'A propos',
    'options' => array(
      'identifier' => 'menu-popp-principal_a-propos:popp-apropos',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_accueil:accueil.
  $menu_links['menu-popp-principal_accueil:accueil'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'accueil',
    'router_path' => 'accueil',
    'link_title' => 'Accueil',
    'options' => array(
      'identifier' => 'menu-popp-principal_accueil:accueil',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_faq:faq-page.
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
  // Exported menu link: menu-popp-principal_participez:user/register.
  $menu_links['menu-popp-principal_participez:user/register'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Participez',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popp-principal_participez:user/register',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_porteurs-opp:popp-structure.
  $menu_links['menu-popp-principal_porteurs-opp:popp-structure'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'popp-structure',
    'router_path' => 'popp-structure',
    'link_title' => 'Porteurs OPP',
    'options' => array(
      'identifier' => 'menu-popp-principal_porteurs-opp:popp-structure',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-popp-principal_span-classglyphicon-glyphicon-folder-openspan:mon-panier.
  $menu_links['menu-popp-principal_span-classglyphicon-glyphicon-folder-openspan:mon-panier'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'mon-panier',
    'router_path' => 'mon-panier',
    'link_title' => '<span class="glyphicon glyphicon-folder-open"></span>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popp-principal_span-classglyphicon-glyphicon-folder-openspan:mon-panier',
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
  // Exported menu link: menu-popp-principal_span-classglyphicon-glyphicon-log-inspan:user/login.
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
  // Exported menu link: menu-popp-principal_span-classglyphicon-glyphicon-log-outspan:user/logout.
  $menu_links['menu-popp-principal_span-classglyphicon-glyphicon-log-outspan:user/logout'] = array(
    'menu_name' => 'menu-popp-principal',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => '<span class="glyphicon glyphicon-log-out"></span>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-popp-principal_span-classglyphicon-glyphicon-log-outspan:user/logout',
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
  t('<span class="glyphicon glyphicon-folder-open"></span>');
  t('<span class="glyphicon glyphicon-log-in"></span>');
  t('<span class="glyphicon glyphicon-log-out"></span>');
  t('A propos');
  t('Accueil');
  t('Ajouter un OPP Participatif');
  t('Ajouter un OPP Standard');
  t('Ajouter un logo partenaire');
  t('Ajouter une FAQ');
  t('Ajouter une structure porteuse');
  t('Conditions d\'utilisation');
  t('Contact');
  t('Déconnexion');
  t('FAQ');
  t('Gestion des pages');
  t('Gestion des porteurs OPP');
  t('Gestion des porteurs OPP PA');
  t('Gestion des séries OPP PA');
  t('Gestion des utilisateurs');
  t('Gestion des éléments de taxonomie');
  t('Gestion du thésaurus facultatif');
  t('Gérer les séries OPP');
  t('Import de masse');
  t('Licences');
  t('Mentions légales');
  t('Modération des publications');
  t('Participez');
  t('Plan du site');
  t('Porteurs OPP');

  return $menu_links;
}
