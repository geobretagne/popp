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
  $view->name = 'popp_search_result_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POPP - Affichage des photos d\'une série';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'POPP - Affichage vignettes recherche';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['id'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['field'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['required'] = TRUE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Champ: Node : Photographie */
  $handler->display->display_options['fields']['field_popp_photo_file']['id'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['table'] = 'field_data_field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['field'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_file']['alter']['text'] = '<a href="/node/[nid]/[nid_1]">[field_popp_photo_file]</a>';
  $handler->display->display_options['fields']['field_popp_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_file']['settings'] = array(
    'image_style' => 'miniature_serie_photo',
    'image_link' => '',
  );
  /* Champ: Node : Date de la prise de vue */
  $handler->display->display_options['fields']['field_popp_photo_date']['id'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['table'] = 'field_data_field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['field'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
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
    'popp_reference_document' => 'popp_reference_document',
    'popp_photo' => 'popp_photo',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Champ: Node : Photographie */
  $handler->display->display_options['fields']['field_popp_photo_file']['id'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['table'] = 'field_data_field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['field'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_file']['alter']['text'] = '<a class="toZoom" linkedphoto="[nid_1]" href="/node/[nid]/[nid_1]">[field_popp_photo_file]</a>';
  $handler->display->display_options['fields']['field_popp_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_file']['settings'] = array(
    'image_style' => 'miniature_serie_photo',
    'image_link' => '',
  );
  /* Champ: Global : Voir le compteur de résultats */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Champ: Node : Date de la prise de vue */
  $handler->display->display_options['fields']['field_popp_photo_date']['id'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['table'] = 'field_data_field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['field'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_date']['alter']['text'] = 'N°[counter] - [field_popp_photo_date]';
  $handler->display->display_options['fields']['field_popp_photo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Bloc 2 */
  $handler = $view->new_display('block', 'Bloc 2', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Node : Photographie */
  $handler->display->display_options['fields']['field_popp_photo_file']['id'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['table'] = 'field_data_field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['field'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_file']['alter']['text'] = '<a href="/node/[nid]/[nid_1]">[field_popp_photo_file]</a>';
  $handler->display->display_options['fields']['field_popp_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_file']['settings'] = array(
    'image_style' => 'photo_sheet_display',
    'image_link' => '',
  );
  /* Champ: Node : Fichier */
  $handler->display->display_options['fields']['field_popp_refdoc_file']['id'] = 'field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['table'] = 'field_data_field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['field'] = 'field_popp_refdoc_file';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_refdoc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_refdoc_file']['settings'] = array(
    'image_style' => 'photo_sheet_display',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid_1']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';

  /* Display: Bloc 3 */
  $handler = $view->new_display('block', 'Bloc 3', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Node : Heure */
  $handler->display->display_options['fields']['field_popp_photo_hour']['id'] = 'field_popp_photo_hour';
  $handler->display->display_options['fields']['field_popp_photo_hour']['table'] = 'field_data_field_popp_photo_hour';
  $handler->display->display_options['fields']['field_popp_photo_hour']['field'] = 'field_popp_photo_hour';
  $handler->display->display_options['fields']['field_popp_photo_hour']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_hour']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_hour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_hour']['settings'] = array(
    'format' => 'h:mm',
    'leading_zero' => 1,
  );
  /* Champ: Node : Auteur de la reconduction */
  $handler->display->display_options['fields']['field_popp_photo_author']['id'] = 'field_popp_photo_author';
  $handler->display->display_options['fields']['field_popp_photo_author']['table'] = 'field_data_field_popp_photo_author';
  $handler->display->display_options['fields']['field_popp_photo_author']['field'] = 'field_popp_photo_author';
  /* Champ: Node : Date de la prise de vue */
  $handler->display->display_options['fields']['field_popp_photo_date']['id'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['table'] = 'field_data_field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['field'] = 'field_popp_photo_date';
  $handler->display->display_options['fields']['field_popp_photo_date']['label'] = 'Date et heure';
  $handler->display->display_options['fields']['field_popp_photo_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_date']['alter']['text'] = '[field_popp_photo_date] - [field_popp_photo_hour]';
  $handler->display->display_options['fields']['field_popp_photo_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Node : Licence de la photo */
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['id'] = 'field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['table'] = 'field_data_field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['field'] = 'field_popp_photo_copyrights';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['alter']['text'] = '<a href="/licences" title="Afficher les licences">[field_popp_photo_copyrights]</a>';
  $handler->display->display_options['fields']['field_popp_photo_copyrights']['type'] = 'taxonomy_term_reference_plain';
  $translatables['popp_search_result_view'] = array(
    t('Master'),
    t('POPP - Affichage vignettes recherche'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Node référençant Node depuis field_popp_serie_photo_list'),
    t('<a href="/node/[nid]/[nid_1]">[field_popp_photo_file]</a>'),
    t('Tout'),
    t('Block'),
    t('Bloc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<a class="toZoom" linkedphoto="[nid_1]" href="/node/[nid]/[nid_1]">[field_popp_photo_file]</a>'),
    t('N°[counter] - [field_popp_photo_date]'),
    t('Bloc 2'),
    t('Bloc 3'),
    t('Auteur de la reconduction'),
    t('Date et heure'),
    t('[field_popp_photo_date] - [field_popp_photo_hour]'),
    t('Licence de la photo'),
    t('<a href="/licences" title="Afficher les licences">[field_popp_photo_copyrights]</a>'),
  );
  $export['popp_search_result_view'] = $view;

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
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'nid',
    'other_lon' => 'nid',
    'wkt' => 'field_popp_serie_place',
    'other_top' => 'nid',
    'other_right' => 'nid',
    'other_bottom' => 'nid',
    'other_left' => 'nid',
    'name_field' => 'title',
    'description_field' => 'field_popp_serie_town',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relation: Adhésion OG : Groupe Node de l'adhésion OG */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relation: OG membership : Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type d\'adhésion OG';
  $handler->display->display_options['relationships']['type']['required'] = TRUE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  /* Champ: Node : Emplacement de la série */
  $handler->display->display_options['fields']['field_popp_serie_place']['id'] = 'field_popp_serie_place';
  $handler->display->display_options['fields']['field_popp_serie_place']['table'] = 'field_data_field_popp_serie_place';
  $handler->display->display_options['fields']['field_popp_serie_place']['field'] = 'field_popp_serie_place';
  $handler->display->display_options['fields']['field_popp_serie_place']['label'] = '';
  $handler->display->display_options['fields']['field_popp_serie_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_serie_place']['type'] = 'wkt';
  $handler->display->display_options['fields']['field_popp_serie_place']['settings'] = array(
    'map' => 'default',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Titre OG';
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  /* Champ: Node : Commune */
  $handler->display->display_options['fields']['field_popp_serie_town']['id'] = 'field_popp_serie_town';
  $handler->display->display_options['fields']['field_popp_serie_town']['table'] = 'field_data_field_popp_serie_town';
  $handler->display->display_options['fields']['field_popp_serie_town']['field'] = 'field_popp_serie_town';
  $handler->display->display_options['fields']['field_popp_serie_town']['label'] = '';
  $handler->display->display_options['fields']['field_popp_serie_town']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_serie_town']['alter']['text'] = '[field_popp_serie_town]<br/>
[php]';
  $handler->display->display_options['fields']['field_popp_serie_town']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_serie_town']['type'] = 'taxonomy_term_reference_plain';
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
    'popp_photo_serie' => 'popp_photo_serie',
  );
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'opp_takepart' => 'opp_takepart',
  );

  /* Display: Layer Home */
  $handler = $view->new_display('openlayers', 'Layer Home', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;

  /* Display: Layer Home PA */
  $handler = $view->new_display('openlayers', 'Layer Home PA', 'openlayers_2');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
    'popp_photo_serie' => 'popp_photo_serie',
  );
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'opp_takepart' => 'opp_takepart',
  );
  $translatables['popp_views_home_layer'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Groupe node de l\'adhésion OG'),
    t('Type d\'adhésion OG'),
    t('Titre OG'),
    t('Type'),
    t('[field_popp_serie_town]<br/>
[php]'),
    t('Layer Home'),
    t('Layer Home PA'),
  );
  $export['popp_views_home_layer'] = $view;

  return $export;
}
