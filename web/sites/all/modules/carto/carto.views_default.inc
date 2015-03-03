<?php
/**
 * @file
 * carto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function carto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'popp_field_collection_serie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Popp affichage photo serie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '--aucun--';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Élément Field collection : Fichier */
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['id'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['table'] = 'field_data_field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['field'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_collection_photo_file']['settings'] = array(
    'image_style' => 'photo_sheet_display',
    'image_link' => '',
  );
  /* Filtre contextuel: Élément Field collection : Identifiant de Élément field collection */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['item_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Élément Field collection : Date */
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['id'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['table'] = 'field_data_field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['field'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['label'] = 'Date de la prise de vue';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Élément Field collection : Identifiant de la ressource */
  $handler->display->display_options['fields']['field_popp_photo_collection_ri']['id'] = 'field_popp_photo_collection_ri';
  $handler->display->display_options['fields']['field_popp_photo_collection_ri']['table'] = 'field_data_field_popp_photo_collection_ri';
  $handler->display->display_options['fields']['field_popp_photo_collection_ri']['field'] = 'field_popp_photo_collection_ri';
  $translatables['popp_field_collection_serie'] = array(
    t('Master'),
    t('--aucun--'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Tout'),
    t('Block'),
    t('Bloc'),
    t('Date de la prise de vue'),
    t('Identifiant de la ressource'),
  );
  $export['popp_field_collection_serie'] = $view;

  $view = new view();
  $view->name = 'popp_main_photo_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'POPP Affichage Photo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Élément Field collection : Entité avec Photo POPP (field_popp_collection_photo) */
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['id'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['field'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['required'] = TRUE;
  /* Filtre contextuel: Élément Field collection : Identifiant de Élément field collection */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['item_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $translatables['popp_main_photo_display'] = array(
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
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('field_popp_collection_photo'),
    t('Tout'),
    t('Bloc'),
  );
  $export['popp_main_photo_display'] = $view;

  $view = new view();
  $view->name = 'popp_results_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Vue résultats POPP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vue résultats POPP';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Élément Field collection : Entité avec Photo POPP (field_popp_collection_photo) */
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['id'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['field'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['relationships']['field_popp_collection_photo_node']['required'] = TRUE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Élément Field collection : Identifiant de Élément field collection */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Champ: Élément Field collection : Fichier */
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['id'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['table'] = 'field_data_field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['field'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['alter']['path'] = 'node/[nid]/[item_id]';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Élément Field collection : Date */
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['id'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['table'] = 'field_data_field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['field'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_popp_collection_photo_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['popp_results_view'] = array(
    t('Master'),
    t('Vue résultats POPP'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('field_popp_collection_photo'),
    t('.'),
    t(','),
    t('Tout'),
    t('Block'),
  );
  $export['popp_results_view'] = $view;

  $view = new view();
  $view->name = 'popp_search_series_helper';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Getter recherche séries POPP taxo';
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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Droits */
  $handler = $view->new_display('entityreference', 'Droits', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Terme de taxonomie : Vocabulaire */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );

  /* Display: Format */
  $handler = $view->new_display('entityreference', 'Format', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Terme de taxonomie : Vocabulaire */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
  );
  $translatables['popp_search_series_helper'] = array(
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
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Droits'),
    t('Format'),
  );
  $export['popp_search_series_helper'] = $view;

  $view = new view();
  $view->name = 'popp_search_series_helper_nodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Getter recherche séries POPP nodes';
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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_takepart' => 'opp_takepart',
    'opp' => 'opp',
  );

  /* Display: Contributeur */
  $handler = $view->new_display('entityreference', 'Contributeur', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Date */
  $handler = $view->new_display('entityreference', 'Date', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_popp_photo_collection_date' => 'field_popp_photo_collection_date',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Photo POPP (field_popp_collection_photo) */
  $handler->display->display_options['relationships']['field_popp_collection_photo_value']['id'] = 'field_popp_collection_photo_value';
  $handler->display->display_options['relationships']['field_popp_collection_photo_value']['table'] = 'field_data_field_popp_collection_photo';
  $handler->display->display_options['relationships']['field_popp_collection_photo_value']['field'] = 'field_popp_collection_photo_value';
  $handler->display->display_options['relationships']['field_popp_collection_photo_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_popp_collection_photo_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Élément Field collection : Date */
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['id'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['table'] = 'field_data_field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['field'] = 'field_popp_photo_collection_date';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['relationship'] = 'field_popp_collection_photo_value';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_collection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_photo' => 'opp_photo',
  );
  $translatables['popp_search_series_helper_nodes'] = array(
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
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Contributeur'),
    t('Date'),
    t('Élément de collection de champs provenant de field_popp_collection_photo'),
  );
  $export['popp_search_series_helper_nodes'] = $view;

  $view = new view();
  $view->name = 'popp_view_thumbnails_serie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'POPP - Vue miniatures serie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Élément Field collection : Identifiant de Élément field collection */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Champ: Élément Field collection : Fichier */
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['id'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['table'] = 'field_data_field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['field'] = 'field_popp_photo_collection_file';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['alter']['text'] = '<a href="#" linkedPhoto="[item_id]" class="toZoom">[field_popp_photo_collection_file]</a>';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_collection_file']['settings'] = array(
    'image_style' => 'miniature_serie_photo',
    'image_link' => '',
  );
  /* Critère de tri: Élément Field collection : Date (field_popp_photo_collection_date) */
  $handler->display->display_options['sorts']['field_popp_photo_collection_date_value']['id'] = 'field_popp_photo_collection_date_value';
  $handler->display->display_options['sorts']['field_popp_photo_collection_date_value']['table'] = 'field_data_field_popp_photo_collection_date';
  $handler->display->display_options['sorts']['field_popp_photo_collection_date_value']['field'] = 'field_popp_photo_collection_date_value';
  /* Filtre contextuel: Élément Field collection : Identifiant de Élément field collection */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $translatables['popp_view_thumbnails_serie'] = array(
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
    t('.'),
    t('<a href="#" linkedPhoto="[item_id]" class="toZoom">[field_popp_photo_collection_file]</a>'),
    t('Tout'),
  );
  $export['popp_view_thumbnails_serie'] = $view;

  $view = new view();
  $view->name = 'popp_views_home_layer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'popp_views_home_layer';
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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_popp_geolocalisation_photo',
    'other_lon' => 'field_popp_geolocalisation_photo',
    'wkt' => 'field_popp_geolocalisation_photo',
    'other_top' => 'field_popp_geolocalisation_photo',
    'other_right' => 'field_popp_geolocalisation_photo',
    'other_bottom' => 'field_popp_geolocalisation_photo',
    'other_left' => 'field_popp_geolocalisation_photo',
    'name_field' => 'field_popp_photo_subject',
    'description_field' => 'field_popp_photo_description',
    'style_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_popp_photo_subject']['id'] = 'field_popp_photo_subject';
  $handler->display->display_options['fields']['field_popp_photo_subject']['table'] = 'field_data_field_popp_photo_subject';
  $handler->display->display_options['fields']['field_popp_photo_subject']['field'] = 'field_popp_photo_subject';
  $handler->display->display_options['fields']['field_popp_photo_subject']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_subject']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_subject']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Description initiale de la série */
  $handler->display->display_options['fields']['field_popp_photo_description']['id'] = 'field_popp_photo_description';
  $handler->display->display_options['fields']['field_popp_photo_description']['table'] = 'field_data_field_popp_photo_description';
  $handler->display->display_options['fields']['field_popp_photo_description']['field'] = 'field_popp_photo_description';
  $handler->display->display_options['fields']['field_popp_photo_description']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_description']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Géolocalisation */
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['id'] = 'field_popp_geolocalisation_photo';
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['table'] = 'field_data_field_popp_geolocalisation_photo';
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['field'] = 'field_popp_geolocalisation_photo';
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['label'] = '';
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['type'] = 'wkt';
  $handler->display->display_options['fields']['field_popp_geolocalisation_photo']['settings'] = array(
    'map' => 'default',
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Droits */
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['id'] = 'field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['table'] = 'field_data_field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['field'] = 'field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['settings'] = array(
    'link' => 0,
  );
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'opp_photo' => 'opp_photo',
  );
  /* Critère de filtrage: Contenu : Droits (field_popp_photo_copyrights) (reference filter) */
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['id'] = 'field_popp_photo_copyrights_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['table'] = 'field_data_field_popp_photo_copyrights';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['field'] = 'field_popp_photo_copyrights_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['expose']['operator_id'] = 'field_popp_photo_copyrights_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['expose']['label'] = 'Droits';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['expose']['operator'] = 'field_popp_photo_copyrights_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['expose']['identifier'] = 'field_popp_photo_copyrights_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_popp_photo_copyrights_target_id_entityreference_filter']['reference_display'] = 'popp_search_series_helper:entityreference_1';
  /* Critère de filtrage: Contenu : Format (field_popp_photo_format) (reference filter) */
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['id'] = 'field_popp_photo_format_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['table'] = 'field_data_field_popp_photo_format';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['field'] = 'field_popp_photo_format_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['expose']['operator_id'] = 'field_popp_photo_format_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['expose']['label'] = 'Format (field_popp_photo_format) (reference filter)';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['expose']['operator'] = 'field_popp_photo_format_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['expose']['identifier'] = 'field_popp_photo_format_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_popp_photo_format_target_id_entityreference_filter']['reference_display'] = 'popp_search_series_helper:entityreference_2';
  /* Critère de filtrage: Contenu : Contributeur initial (field_popp_photo_contributor) (reference filter) */
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['id'] = 'field_popp_photo_contributor_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['table'] = 'field_data_field_popp_photo_contributor';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['field'] = 'field_popp_photo_contributor_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['expose']['operator_id'] = 'field_popp_photo_contributor_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['expose']['label'] = 'Contributeur';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['expose']['operator'] = 'field_popp_photo_contributor_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['expose']['identifier'] = 'field_popp_photo_contributor_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_popp_photo_contributor_target_id_entityreference_filter']['reference_display'] = 'popp_search_series_helper_nodes:entityreference_1';

  /* Display: Layer Home */
  $handler = $view->new_display('openlayers', 'Layer Home', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $translatables['popp_views_home_layer'] = array(
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
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Droits'),
    t('Format (field_popp_photo_format) (reference filter)'),
    t('Contributeur'),
    t('Layer Home'),
  );
  $export['popp_views_home_layer'] = $view;

  return $export;
}
