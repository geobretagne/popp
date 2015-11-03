<?php
/**
 * @file
 * structure_front.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function structure_front_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'caddy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Panier';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mon Panier';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_popp_serie_identifier' => 'field_popp_serie_identifier',
    'field_popp_serie_county' => 'field_popp_serie_county',
    'field_popp_serie_per' => 'field_popp_serie_per',
    'field_popp_serie_supp_struct' => 'field_popp_serie_supp_struct',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_serie_identifier' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_serie_county' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_serie_per' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_serie_supp_struct' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p><i>Cochez les séries que vous souhaitez exporter, puis cliquez sur l\'export de votre choix.<br/><br/><strong>Attention</strong>, concernant l\'export thésaurus, il n\'est possible d\'exporter que des séries du même pas de reconduction (exemple : série 1 reconduite tous les 2 mois et série 2 reconduite tous les 3 mois)</i></p>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Votre sélection de photos est vide.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: add_serie_caddy */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_serie_caddy';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Identifiant de la série */
  $handler->display->display_options['fields']['field_popp_serie_identifier']['id'] = 'field_popp_serie_identifier';
  $handler->display->display_options['fields']['field_popp_serie_identifier']['table'] = 'field_data_field_popp_serie_identifier';
  $handler->display->display_options['fields']['field_popp_serie_identifier']['field'] = 'field_popp_serie_identifier';
  $handler->display->display_options['fields']['field_popp_serie_identifier']['label'] = 'Identifiant';
  /* Field: Content: Département */
  $handler->display->display_options['fields']['field_popp_serie_county']['id'] = 'field_popp_serie_county';
  $handler->display->display_options['fields']['field_popp_serie_county']['table'] = 'field_data_field_popp_serie_county';
  $handler->display->display_options['fields']['field_popp_serie_county']['field'] = 'field_popp_serie_county';
  $handler->display->display_options['fields']['field_popp_serie_county']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fréquence de reconduction prévue */
  $handler->display->display_options['fields']['field_popp_serie_per']['id'] = 'field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['table'] = 'field_data_field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['field'] = 'field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['label'] = 'Fréquence reconduction';
  $handler->display->display_options['fields']['field_popp_serie_per']['click_sort_column'] = 'interval';
  /* Field: Content: Porteur OPP */
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['id'] = 'field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['table'] = 'field_data_field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['field'] = 'field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Action';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Ajout/Suppression';
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Exporter';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<input type="checkbox" name="export[]" value="<?=$row->nid?>"/>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_photo_serie' => 'popp_photo_serie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mon-panier';
  $translatables['caddy'] = array(
    t('Master'),
    t('Mon Panier'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<p><i>Cochez les séries que vous souhaitez exporter, puis cliquez sur l\'export de votre choix.<br/><br/><strong>Attention</strong>, concernant l\'export thésaurus, il n\'est possible d\'exporter que des séries du même pas de reconduction (exemple : série 1 reconduite tous les 2 mois et série 2 reconduite tous les 3 mois)</i></p>'),
    t('Votre sélection de photos est vide.'),
    t('flag'),
    t('Nom'),
    t('Identifiant'),
    t('Département'),
    t('Fréquence reconduction'),
    t('Porteur OPP'),
    t('Action'),
    t('Ajout/Suppression'),
    t('Exporter'),
    t('Page'),
    t('more'),
  );
  $export['caddy'] = $view;

  $view = new view();
  $view->name = 'licences';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Licences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Licences';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_page' => 'popp_page',
  );
  /* Filter criterion: Content: Entrée Menu (field_popp_entry_menu) */
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['id'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['field'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['value'] = array(
    5 => '5',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'licences';
  $translatables['licences'] = array(
    t('Master'),
    t('Licences'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
  );
  $export['licences'] = $view;

  $view = new view();
  $view->name = 'popp_content_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestion des contenus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion des pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_popp_entry_menu' => 'field_popp_entry_menu',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_entry_menu' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-page">Ajouter une page</a></div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Entrée Menu */
  $handler->display->display_options['fields']['field_popp_entry_menu']['id'] = 'field_popp_entry_menu';
  $handler->display->display_options['fields']['field_popp_entry_menu']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['fields']['field_popp_entry_menu']['field'] = 'field_popp_entry_menu';
  $handler->display->display_options['fields']['field_popp_entry_menu']['label'] = 'Type';
  $handler->display->display_options['fields']['field_popp_entry_menu']['empty'] = 'FAQ';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[delete_node] - [edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - [delete_node]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Entrée Menu (field_popp_entry_menu) */
  $handler->display->display_options['sorts']['field_popp_entry_menu_value']['id'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['sorts']['field_popp_entry_menu_value']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['sorts']['field_popp_entry_menu_value']['field'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['sorts']['field_popp_entry_menu_value']['expose']['label'] = 'Type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
    'popp_page' => 'popp_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gestion-des-contenus';
  $translatables['popp_content_management'] = array(
    t('Master'),
    t('Gestion des pages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-page">Ajouter une page</a></div>'),
    t('Title'),
    t('Type'),
    t('FAQ'),
    t('[delete_node] - [edit_node]'),
    t('Actions'),
    t('[edit_node] - [delete_node]'),
    t('Page'),
    t('more'),
  );
  $export['popp_content_management'] = $view;

  $view = new view();
  $view->name = 'popp_export_preparation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'POPP - Préparation de l\'export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Type de champs';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'ID à reporter sur le fichier d\'import';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Libellé';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    17 => '17',
    19 => '19',
    13 => '13',
    3 => '3',
    11 => '11',
    15 => '15',
    4 => '4',
    5 => '5',
    18 => '18',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = ';';
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['style_options']['encoding'] = 'utf8_decode';
  $handler->display->display_options['path'] = 'popp/export_preparation.csv';
  $translatables['popp_export_preparation'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Type de champs'),
    t('ID à reporter sur le fichier d\'import'),
    t('.'),
    t('Libellé'),
    t('Data export'),
    t('more'),
  );
  $export['popp_export_preparation'] = $view;

  $view = new view();
  $view->name = 'popp_participative_opp_mgt';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestion des porteurs OPP PA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion des porteurs OPP PA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="paddingHeaderTable"><a href="node/add/opp-takepart" class="btn btn-primary pull-right">Ajouter un OPP participatif</a></div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/group">Gérer</a> - [delete_node]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_takepart' => 'opp_takepart',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gestion-des-porteurs-opp-pa';
  $translatables['popp_participative_opp_mgt'] = array(
    t('Master'),
    t('Gestion des porteurs OPP PA'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<div class="paddingHeaderTable"><a href="node/add/opp-takepart" class="btn btn-primary pull-right">Ajouter un OPP participatif</a></div>'),
    t('Title'),
    t('Actions'),
    t('<a href="/node/[nid]/group">Gérer</a> - [delete_node]'),
    t('Page'),
    t('more'),
  );
  $export['popp_participative_opp_mgt'] = $view;

  $view = new view();
  $view->name = 'popp_partners_logos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Affichage des logos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Logos structures porteuses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_logo_structure_porteuse' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_fields'] = array(
    'field_logo_structure_porteuse' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_logo_structure_porteuse' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_fields'] = array(
    'field_logo_structure_porteuse' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '7';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['id'] = 'field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['table'] = 'field_data_field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['field'] = 'field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['label'] = '';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['settings'] = array(
    'image_style' => 'logos_footer',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supporting_structure' => 'supporting_structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'bloc_partenaires');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Logos partenaires';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo partenaire */
  $handler->display->display_options['fields']['field_popp_partner_logo']['id'] = 'field_popp_partner_logo';
  $handler->display->display_options['fields']['field_popp_partner_logo']['table'] = 'field_data_field_popp_partner_logo';
  $handler->display->display_options['fields']['field_popp_partner_logo']['field'] = 'field_popp_partner_logo';
  $handler->display->display_options['fields']['field_popp_partner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_popp_partner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_partner_logo']['settings'] = array(
    'image_style' => 'logos_footer',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Ordre d&#039;affichage (field_popp_partner_display_order) */
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['id'] = 'field_popp_partner_display_order_value';
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['table'] = 'field_data_field_popp_partner_display_order';
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['field'] = 'field_popp_partner_display_order_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner_logo' => 'partner_logo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['popp_partners_logos'] = array(
    t('Master'),
    t('Logos structures porteuses'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('more'),
    t('Logos partenaires'),
  );
  $export['popp_partners_logos'] = $view;

  $view = new view();
  $view->name = 'popp_refdoc_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP - Affichage document référence';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'POPP - Affichage document référence';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['id'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['field'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Fichier */
  $handler->display->display_options['fields']['field_popp_refdoc_file']['id'] = 'field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['table'] = 'field_data_field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['field'] = 'field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_refdoc_file']['alter']['text'] = '<a class="toZoom" href="/node/[nid_1]/[nid]" linkedphoto="[nid]" referencedoc="true">[field_popp_refdoc_file]</a>';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_refdoc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['settings'] = array(
    'image_style' => 'miniature_serie_photo',
    'image_link' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_popp_refdoc_date']['id'] = 'field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date']['table'] = 'field_data_field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date']['field'] = 'field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_refdoc_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_refdoc_date']['alter']['text'] = 'Ref - [field_popp_refdoc_date]';
  $handler->display->display_options['fields']['field_popp_refdoc_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_refdoc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_reference_document' => 'popp_reference_document',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Commentaire lié à la date */
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['id'] = 'field_popp_refdoc_date_comment';
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['table'] = 'field_data_field_popp_refdoc_date_comment';
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['field'] = 'field_popp_refdoc_date_comment';
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['label'] = '';
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_refdoc_date_comment']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['id'] = 'field_popp_refdoc_date_1';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['table'] = 'field_data_field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['field'] = 'field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['alter']['text'] = '[field_popp_refdoc_date_1]<br/>
[field_popp_refdoc_date_comment]';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Auteur / Photographe */
  $handler->display->display_options['fields']['field_popp_refdoc_author']['id'] = 'field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['table'] = 'field_data_field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['field'] = 'field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['label'] = 'Auteur';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['empty'] = 'Inconnu(e)';
  /* Field: Content: Licence du document */
  $handler->display->display_options['fields']['field_popp_refdoc_licence']['id'] = 'field_popp_refdoc_licence';
  $handler->display->display_options['fields']['field_popp_refdoc_licence']['table'] = 'field_data_field_popp_refdoc_licence';
  $handler->display->display_options['fields']['field_popp_refdoc_licence']['field'] = 'field_popp_refdoc_licence';
  $handler->display->display_options['fields']['field_popp_refdoc_licence']['label'] = 'Licence';
  $handler->display->display_options['fields']['field_popp_refdoc_licence']['type'] = 'taxonomy_term_reference_plain';
  $translatables['popp_refdoc_display'] = array(
    t('Master'),
    t('POPP - Affichage document référence'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Content referencing Content from field_popp_serie_refdoc'),
    t('<a class="toZoom" href="/node/[nid_1]/[nid]" linkedphoto="[nid]" referencedoc="true">[field_popp_refdoc_file]</a>'),
    t('Ref - [field_popp_refdoc_date]'),
    t('Tout'),
    t('Block'),
    t('more'),
    t('Bloc'),
    t('Date'),
    t('[field_popp_refdoc_date_1]<br/>
[field_popp_refdoc_date_comment]'),
    t('Auteur'),
    t('Inconnu(e)'),
    t('Licence'),
  );
  $export['popp_refdoc_display'] = $view;

  $view = new view();
  $view->name = 'popp_serie_documentation_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP - Affichage documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'POPP - Affichage documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['id'] = 'reverse_field_popp_serie_documentation_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['field'] = 'reverse_field_popp_serie_documentation_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['required'] = TRUE;
  /* Field: Content: Documentation */
  $handler->display->display_options['fields']['field_popp_documentation_file']['id'] = 'field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['table'] = 'field_data_field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['field'] = 'field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_documentation_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_documentation_file']['click_sort_column'] = 'fid';
  /* Field: Content: Légende */
  $handler->display->display_options['fields']['field_popp_documentation_legend']['id'] = 'field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['table'] = 'field_data_field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['field'] = 'field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['label'] = '';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_documentation_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_documentation' => 'popp_documentation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Liens externes en lien avec la série */
  $handler->display->display_options['fields']['field_popp_serie_external_links']['id'] = 'field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['table'] = 'field_data_field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['field'] = 'field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['label'] = '';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_serie_external_links']['alter']['text'] = '<a href="[field_popp_serie_external_links]" target="_blank" title="Ouvrir le lien">[field_popp_serie_external_links]</a>';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_serie_external_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['popp_serie_documentation_display'] = array(
    t('Master'),
    t('POPP - Affichage documentation'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Content referencing Content from field_popp_serie_documentation'),
    t('Tout'),
    t('Block'),
    t('more'),
    t('<a href="[field_popp_serie_external_links]" target="_blank" title="Ouvrir le lien">[field_popp_serie_external_links]</a>'),
  );
  $export['popp_serie_documentation_display'] = $view;

  $view = new view();
  $view->name = 'popp_series_management_opp';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestion des séries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion des séries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-photo-serie">Ajouter une série</a></div>';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: OG membership: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type d\'adhésion OG';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - [delete_node]';
  /* Field: OG membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'og_membership';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_photo_serie' => 'popp_photo_serie',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'opp_takepart' => 'opp_takepart',
  );
  /* Filter criterion: Content access: Access */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_photo_serie' => 'popp_photo_serie',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'opp' => 'opp',
  );
  /* Filter criterion: Content access: Access */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['path'] = 'gestion-des-series-pa';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'gestion-des-series';
  $translatables['popp_series_management_opp'] = array(
    t('Master'),
    t('Gestion des séries'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-photo-serie">Ajouter une série</a></div>'),
    t('Group node from OG membership'),
    t('Type d\'adhésion OG'),
    t('Title'),
    t('Published'),
    t('Actions'),
    t('[edit_node] - [delete_node]'),
    t('Page'),
    t('more'),
  );
  $export['popp_series_management_opp'] = $view;

  $view = new view();
  $view->name = 'popp_series_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP Series overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion des séries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-photo-serie">Ajouter une série</a></div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Modifier';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Supprimer';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_photo_serie' => 'popp_photo_serie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-series-overview';
  $translatables['popp_series_overview'] = array(
    t('Master'),
    t('Gestion des séries'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<div class="paddingHeaderTable">&nbsp;<a class="btn btn-primary pull-right" href="/node/add/popp-photo-serie">Ajouter une série</a></div>'),
    t('Title'),
    t('Published'),
    t('Modifier'),
    t('Supprimer'),
    t('Page'),
    t('more'),
  );
  $export['popp_series_overview'] = $view;

  $view = new view();
  $view->name = 'popp_supp_struct_infos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP - Infos liées au porteur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_supp_struct_node']['id'] = 'reverse_field_popp_serie_supp_struct_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_supp_struct_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_supp_struct_node']['field'] = 'reverse_field_popp_serie_supp_struct_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_popp_serie_supp_struct_node';
  /* Field: Content: Audience de groupes */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_popp_serie_supp_struct_node';
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Axe(s) thématique(s) */
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['id'] = 'field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['table'] = 'field_data_field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['field'] = 'field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['relationship'] = 'reverse_field_popp_serie_supp_struct_node';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['alter']['text'] = '[field_popp_serie_thematic_axis-tid]';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['delta_offset'] = '0';
  /* Field: Content: OPP */
  $handler->display->display_options['fields']['field_popp_serie_opp']['id'] = 'field_popp_serie_opp';
  $handler->display->display_options['fields']['field_popp_serie_opp']['table'] = 'field_data_field_popp_serie_opp';
  $handler->display->display_options['fields']['field_popp_serie_opp']['field'] = 'field_popp_serie_opp';
  $handler->display->display_options['fields']['field_popp_serie_opp']['relationship'] = 'reverse_field_popp_serie_supp_struct_node';
  $handler->display->display_options['fields']['field_popp_serie_opp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_serie_opp']['alter']['text'] = '[field_popp_serie_opp-tid]';
  $handler->display->display_options['fields']['field_popp_serie_opp']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['popp_supp_struct_infos'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Content referencing Content from field_popp_serie_supp_struct'),
    t('Title'),
    t('Audience de groupes'),
    t('Axe(s) thématique(s)'),
    t('[field_popp_serie_thematic_axis-tid]'),
    t('OPP'),
    t('[field_popp_serie_opp-tid]'),
    t('Tout'),
  );
  $export['popp_supp_struct_infos'] = $view;

  $view = new view();
  $view->name = 'popp_supp_struct_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestion des porteurs OPP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion des porteurs OPP';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - [delete_node]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_takepart' => 'opp_takepart',
    'opp' => 'opp',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gestion-des-porteurs-opp';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gestion des logos des financeurs';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner_logo' => 'partner_logo',
  );
  $handler->display->display_options['path'] = 'gestion-logos-financeurs';
  $translatables['popp_supp_struct_management'] = array(
    t('Master'),
    t('Gestion des porteurs OPP'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Title'),
    t('Type'),
    t('Actions'),
    t('[edit_node] - [delete_node]'),
    t('Page'),
    t('more'),
    t('Gestion des logos des financeurs'),
  );
  $export['popp_supp_struct_management'] = $view;

  $view = new view();
  $view->name = 'popp_testimonies_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP - Affichage sons série';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '--aucun--';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_popp_tty_file' => 'field_popp_tty_file',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_tty_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Aucun son pour le moment</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['id'] = 'reverse_field_popp_serie_testimonies_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['field'] = 'reverse_field_popp_serie_testimonies_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Profil';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'identification' => 'identification',
  );
  /* Field: Content: Licence du son */
  $handler->display->display_options['fields']['field_popp_tty_rights']['id'] = 'field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['table'] = 'field_data_field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['field'] = 'field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_rights']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_rights']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_rights']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date d'enregistrement */
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['id'] = 'field_popp_tty_recording_date';
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['table'] = 'field_data_field_popp_tty_recording_date';
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['field'] = 'field_popp_tty_recording_date';
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_recording_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Durée */
  $handler->display->display_options['fields']['field_popp_tty_duration']['id'] = 'field_popp_tty_duration';
  $handler->display->display_options['fields']['field_popp_tty_duration']['table'] = 'field_data_field_popp_tty_duration';
  $handler->display->display_options['fields']['field_popp_tty_duration']['field'] = 'field_popp_tty_duration';
  $handler->display->display_options['fields']['field_popp_tty_duration']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_duration']['alter']['text'] = '[field_popp_tty_duration] mn';
  $handler->display->display_options['fields']['field_popp_tty_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Présentation du son */
  $handler->display->display_options['fields']['field_popp_tty_descr']['id'] = 'field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['table'] = 'field_data_field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['field'] = 'field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_descr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_descr']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_popp_tty_type']['id'] = 'field_popp_tty_type';
  $handler->display->display_options['fields']['field_popp_tty_type']['table'] = 'field_data_field_popp_tty_type';
  $handler->display->display_options['fields']['field_popp_tty_type']['field'] = 'field_popp_tty_type';
  $handler->display->display_options['fields']['field_popp_tty_type']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_type']['element_label_colon'] = FALSE;
  /* Field: Profile: Nom */
  $handler->display->display_options['fields']['field_popp_name']['id'] = 'field_popp_name';
  $handler->display->display_options['fields']['field_popp_name']['table'] = 'field_data_field_popp_name';
  $handler->display->display_options['fields']['field_popp_name']['field'] = 'field_popp_name';
  $handler->display->display_options['fields']['field_popp_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_popp_name']['label'] = '';
  $handler->display->display_options['fields']['field_popp_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Prénom */
  $handler->display->display_options['fields']['field_popp_nickname']['id'] = 'field_popp_nickname';
  $handler->display->display_options['fields']['field_popp_nickname']['table'] = 'field_data_field_popp_nickname';
  $handler->display->display_options['fields']['field_popp_nickname']['field'] = 'field_popp_nickname';
  $handler->display->display_options['fields']['field_popp_nickname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_popp_nickname']['label'] = '';
  $handler->display->display_options['fields']['field_popp_nickname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_nickname']['element_label_colon'] = FALSE;
  /* Field: Content: Structure responsable de la création du contenu */
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['id'] = 'field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['table'] = 'field_data_field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['field'] = 'field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Informations';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Titre: [title]<br/>
Type : [field_popp_tty_type]<br/>
Présentation : [field_popp_tty_descr]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Auteur / Preneur de son */
  $handler->display->display_options['fields']['field_popp_tty_author']['id'] = 'field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['table'] = 'field_data_field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['field'] = 'field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['label'] = 'Contexte';
  $handler->display->display_options['fields']['field_popp_tty_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_author']['alter']['text'] = 'Auteur / Preneur de son : [field_popp_tty_author]<br/>
Contributeur : [field_popp_nickname] [field_popp_name]<br/>
Strcuture responsable de la création du contenu : [field_popp_tty_resp_structure]<br/>';
  $handler->display->display_options['fields']['field_popp_tty_author']['element_label_colon'] = FALSE;
  /* Field: Content: Fichier */
  $handler->display->display_options['fields']['field_popp_tty_file']['id'] = 'field_popp_tty_file';
  $handler->display->display_options['fields']['field_popp_tty_file']['table'] = 'field_data_field_popp_tty_file';
  $handler->display->display_options['fields']['field_popp_tty_file']['field'] = 'field_popp_tty_file';
  $handler->display->display_options['fields']['field_popp_tty_file']['label'] = 'Lecture';
  $handler->display->display_options['fields']['field_popp_tty_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_file']['alter']['text'] = '[field_popp_tty_file]
<div class="pull-right">
Date : [field_popp_tty_recording_date]<br/>
Durée : [field_popp_tty_duration]<br/>
Licence : [field_popp_tty_rights]<br/>
</div>';
  $handler->display->display_options['fields']['field_popp_tty_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_tty_file']['type'] = 'jplayer_player';
  $handler->display->display_options['fields']['field_popp_tty_file']['settings'] = array(
    'mode' => 'single',
    'autoplay' => '0',
    'solution' => 'html, flash',
    'preload' => 'metadata',
    'volume' => '80',
    'muted' => '0',
    'repeat' => 'none',
    'backgroundColor' => '000000',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_testimonies_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_testimony_sheet' => 'popp_testimony_sheet',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['popp_testimonies_display'] = array(
    t('Master'),
    t('--aucun--'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('<h3>Aucun son pour le moment</h3>'),
    t('Content referencing Content from field_popp_serie_testimonies'),
    t('author'),
    t('Profil'),
    t('[field_popp_tty_duration] mn'),
    t('Informations'),
    t('Titre: [title]<br/>
Type : [field_popp_tty_type]<br/>
Présentation : [field_popp_tty_descr]'),
    t('Contexte'),
    t('Auteur / Preneur de son : [field_popp_tty_author]<br/>
Contributeur : [field_popp_nickname] [field_popp_name]<br/>
Strcuture responsable de la création du contenu : [field_popp_tty_resp_structure]<br/>'),
    t('Lecture'),
    t('[field_popp_tty_file]
<div class="pull-right">
Date : [field_popp_tty_recording_date]<br/>
Durée : [field_popp_tty_duration]<br/>
Licence : [field_popp_tty_rights]<br/>
</div>'),
    t('Tout'),
    t('Block'),
    t('more'),
  );
  $export['popp_testimonies_display'] = $view;

  $view = new view();
  $view->name = 'popp_view_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP View Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'POPP - Plateforme des Observatoires Photographiques des Paysages';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_popp_serie_geolocation',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => '',
    'description_field' => '',
    'style_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div id="photoResult"></div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Géolocalisation */
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['id'] = 'field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['table'] = 'field_data_field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['field'] = 'field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['settings'] = array(
    'map' => 'popp_home_map',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_photo_serie' => 'popp_photo_serie',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'popp_home_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'accueil';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Accueil';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-popp-principal';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['popp_view_home'] = array(
    t('Master'),
    t('POPP - Plateforme des Observatoires Photographiques des Paysages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<div id="photoResult"></div>'),
    t('Page'),
    t('more'),
  );
  $export['popp_view_home'] = $view;

  $view = new view();
  $view->name = 'popp_view_page_cgu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP View Page CGU';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conditions d\'utilisation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_page' => 'popp_page',
  );
  /* Filter criterion: Content: Entrée Menu (field_popp_entry_menu) */
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['id'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['field'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['value'] = array(
    3 => '3',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-cgu';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Conditions d\'utilisation';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-menu-footer';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['popp_view_page_cgu'] = array(
    t('Master'),
    t('Conditions d\'utilisation'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
  );
  $export['popp_view_page_cgu'] = $view;

  $view = new view();
  $view->name = 'popp_view_page_mentions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP View Page Mentions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentions légales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_page' => 'popp_page',
  );
  /* Filter criterion: Content: Entrée Menu (field_popp_entry_menu) */
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['id'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['field'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['value'] = array(
    4 => '4',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-mentions-legales';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mentions légales';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-menu-footer';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['popp_view_page_mentions'] = array(
    t('Master'),
    t('Mentions légales'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
  );
  $export['popp_view_page_mentions'] = $view;

  $view = new view();
  $view->name = 'popp_view_page_participez';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP View Page Participez';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Participez';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom de l\'OPP';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_takepart' => 'opp_takepart',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-participez';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Participez';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-popp-principal';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['popp_view_page_participez'] = array(
    t('Master'),
    t('Participez'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('OG membership from node'),
    t('Nom de l\'OPP'),
    t('Page'),
    t('more'),
  );
  $export['popp_view_page_participez'] = $view;

  $view = new view();
  $view->name = 'popp_view_page_propos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP View Page Propos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'A propos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'popp_page' => 'popp_page',
  );
  /* Filter criterion: Content: Entrée Menu (field_popp_entry_menu) */
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['id'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['table'] = 'field_data_field_popp_entry_menu';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['field'] = 'field_popp_entry_menu_value';
  $handler->display->display_options['filters']['field_popp_entry_menu_value']['value'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-apropos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'A propos';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-popp-principal';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['popp_view_page_propos'] = array(
    t('Master'),
    t('A propos'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
  );
  $export['popp_view_page_propos'] = $view;

  $view = new view();
  $view->name = 'popp_view_page_structures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Popp View Page Structures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Structures Porteuses ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_popp_supp_struct_logo' => 'field_popp_supp_struct_logo',
    'field_popp_supp_struc_shortdesc' => 'field_popp_supp_struc_shortdesc',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_popp_supp_struct_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popp_supp_struc_shortdesc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['id'] = 'field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['table'] = 'field_data_field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['field'] = 'field_popp_supp_struct_logo';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['label'] = '';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_supp_struct_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Description courte */
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['id'] = 'field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['table'] = 'field_data_field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['field'] = 'field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['label'] = '';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['alter']['text'] = '<h3>[title]</h3>
[field_popp_supp_struc_shortdesc] ';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supporting_structure' => 'supporting_structure',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-structure';
  $translatables['popp_view_page_structures'] = array(
    t('Master'),
    t('Structures Porteuses '),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<h3>[title]</h3>
[field_popp_supp_struc_shortdesc] '),
    t('Page'),
    t('more'),
  );
  $export['popp_view_page_structures'] = $view;

  return $export;
}
