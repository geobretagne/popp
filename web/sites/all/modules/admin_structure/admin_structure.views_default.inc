<?php
/**
 * @file
 * admin_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function admin_structure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'extract_photo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Extract Photo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Extract Photo';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['id'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_photo_list_node']['field'] = 'reverse_field_popp_serie_photo_list_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_popp_serie_photo_list_target_id']['id'] = 'field_popp_serie_photo_list_target_id';
  $handler->display->display_options['relationships']['field_popp_serie_photo_list_target_id']['table'] = 'field_data_field_popp_serie_photo_list';
  $handler->display->display_options['relationships']['field_popp_serie_photo_list_target_id']['field'] = 'field_popp_serie_photo_list_target_id';
  $handler->display->display_options['relationships']['field_popp_serie_photo_list_target_id']['required'] = TRUE;
  /* Field: Content: Photographie */
  $handler->display->display_options['fields']['field_popp_photo_file']['id'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['table'] = 'field_data_field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['field'] = 'field_popp_photo_file';
  $handler->display->display_options['fields']['field_popp_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_popp_photo_file']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_popp_serie_photo_list_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
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
    'popp_photo' => 'popp_photo',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'extract-photo';

  /* Display: Exportation de données */
  $handler = $view->new_display('views_data_export', 'Exportation de données', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'extract-photo-data';
  $translatables['extract_photo'] = array(
    t('Master'),
    t('Extract Photo'),
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
    t('Content referencing Content from field_popp_serie_photo_list'),
    t('Content entity referenced from field_popp_serie_photo_list'),
    t('Tout'),
    t('Page'),
    t('more'),
    t('Exportation de données'),
  );
  $export['extract_photo'] = $view;

  $view = new view();
  $view->name = 'extract_serie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Extract Serie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Extract Serie';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre de la série';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Adresse/lieu de la prise de vue */
  $handler->display->display_options['fields']['field_popp_serie_address']['id'] = 'field_popp_serie_address';
  $handler->display->display_options['fields']['field_popp_serie_address']['table'] = 'field_data_field_popp_serie_address';
  $handler->display->display_options['fields']['field_popp_serie_address']['field'] = 'field_popp_serie_address';
  /* Field: Content: Altitude */
  $handler->display->display_options['fields']['field_popp_photo_altitude']['id'] = 'field_popp_photo_altitude';
  $handler->display->display_options['fields']['field_popp_photo_altitude']['table'] = 'field_data_field_popp_photo_altitude';
  $handler->display->display_options['fields']['field_popp_photo_altitude']['field'] = 'field_popp_photo_altitude';
  $handler->display->display_options['fields']['field_popp_photo_altitude']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Altitude (prise de vue aérienne) */
  $handler->display->display_options['fields']['field_popp_refdoc_altitude']['id'] = 'field_popp_refdoc_altitude';
  $handler->display->display_options['fields']['field_popp_refdoc_altitude']['table'] = 'field_data_field_popp_refdoc_altitude';
  $handler->display->display_options['fields']['field_popp_refdoc_altitude']['field'] = 'field_popp_refdoc_altitude';
  $handler->display->display_options['fields']['field_popp_refdoc_altitude']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Audience de groupes */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Auteur / Preneur de son */
  $handler->display->display_options['fields']['field_popp_tty_author']['id'] = 'field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['table'] = 'field_data_field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['field'] = 'field_popp_tty_author';
  /* Field: Content: Auteur de la reconduction */
  $handler->display->display_options['fields']['field_popp_photo_author']['id'] = 'field_popp_photo_author';
  $handler->display->display_options['fields']['field_popp_photo_author']['table'] = 'field_data_field_popp_photo_author';
  $handler->display->display_options['fields']['field_popp_photo_author']['field'] = 'field_popp_photo_author';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Content: Axe(s) thématique(s) */
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['id'] = 'field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['table'] = 'field_data_field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['field'] = 'field_popp_serie_thematic_axis';
  $handler->display->display_options['fields']['field_popp_serie_thematic_axis']['delta_offset'] = '0';
  /* Field: Content: Commune */
  $handler->display->display_options['fields']['field_popp_serie_town']['id'] = 'field_popp_serie_town';
  $handler->display->display_options['fields']['field_popp_serie_town']['table'] = 'field_data_field_popp_serie_town';
  $handler->display->display_options['fields']['field_popp_serie_town']['field'] = 'field_popp_serie_town';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_popp_serie_first_desc_date']['id'] = 'field_popp_serie_first_desc_date';
  $handler->display->display_options['fields']['field_popp_serie_first_desc_date']['table'] = 'field_data_field_popp_serie_first_desc_date';
  $handler->display->display_options['fields']['field_popp_serie_first_desc_date']['field'] = 'field_popp_serie_first_desc_date';
  $handler->display->display_options['fields']['field_popp_serie_first_desc_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description fine des éléments de paysage à la premiere prise de vue */
  $handler->display->display_options['fields']['field_popp_serie_first_desc']['id'] = 'field_popp_serie_first_desc';
  $handler->display->display_options['fields']['field_popp_serie_first_desc']['table'] = 'field_data_field_popp_serie_first_desc';
  $handler->display->display_options['fields']['field_popp_serie_first_desc']['field'] = 'field_popp_serie_first_desc';
  /* Field: Content: Document référence */
  $handler->display->display_options['fields']['field_popp_serie_refdoc']['id'] = 'field_popp_serie_refdoc';
  $handler->display->display_options['fields']['field_popp_serie_refdoc']['table'] = 'field_data_field_popp_serie_refdoc';
  $handler->display->display_options['fields']['field_popp_serie_refdoc']['field'] = 'field_popp_serie_refdoc';
  $handler->display->display_options['fields']['field_popp_serie_refdoc']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Documentation */
  $handler->display->display_options['fields']['field_popp_serie_documentation']['id'] = 'field_popp_serie_documentation';
  $handler->display->display_options['fields']['field_popp_serie_documentation']['table'] = 'field_data_field_popp_serie_documentation';
  $handler->display->display_options['fields']['field_popp_serie_documentation']['field'] = 'field_popp_serie_documentation';
  $handler->display->display_options['fields']['field_popp_serie_documentation']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_popp_serie_documentation']['delta_offset'] = '0';
  /* Field: Content: Département */
  $handler->display->display_options['fields']['field_popp_serie_county']['id'] = 'field_popp_serie_county';
  $handler->display->display_options['fields']['field_popp_serie_county']['table'] = 'field_data_field_popp_serie_county';
  $handler->display->display_options['fields']['field_popp_serie_county']['field'] = 'field_popp_serie_county';
  /* Field: Content: Ensemble paysager */
  $handler->display->display_options['fields']['field_popp_serie_landscape_set']['id'] = 'field_popp_serie_landscape_set';
  $handler->display->display_options['fields']['field_popp_serie_landscape_set']['table'] = 'field_data_field_popp_serie_landscape_set';
  $handler->display->display_options['fields']['field_popp_serie_landscape_set']['field'] = 'field_popp_serie_landscape_set';
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_popp_serie_format']['id'] = 'field_popp_serie_format';
  $handler->display->display_options['fields']['field_popp_serie_format']['table'] = 'field_data_field_popp_serie_format';
  $handler->display->display_options['fields']['field_popp_serie_format']['field'] = 'field_popp_serie_format';
  /* Field: Content: Fréquence de reconduction prévue */
  $handler->display->display_options['fields']['field_popp_serie_per']['id'] = 'field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['table'] = 'field_data_field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['field'] = 'field_popp_serie_per';
  $handler->display->display_options['fields']['field_popp_serie_per']['click_sort_column'] = 'interval';
  /* Field: Content: Identifiant de la série */
  $handler->display->display_options['fields']['field_popp_serie_identifier']['id'] = 'field_popp_serie_identifier';
  $handler->display->display_options['fields']['field_popp_serie_identifier']['table'] = 'field_data_field_popp_serie_identifier';
  $handler->display->display_options['fields']['field_popp_serie_identifier']['field'] = 'field_popp_serie_identifier';
  /* Field: Content: Identifiant interne OPP */
  $handler->display->display_options['fields']['field_popp_serie_int_identifier']['id'] = 'field_popp_serie_int_identifier';
  $handler->display->display_options['fields']['field_popp_serie_int_identifier']['table'] = 'field_data_field_popp_serie_int_identifier';
  $handler->display->display_options['fields']['field_popp_serie_int_identifier']['field'] = 'field_popp_serie_int_identifier';
  /* Field: Content: Intention du photographe */
  $handler->display->display_options['fields']['field_popp_serie_author_intent']['id'] = 'field_popp_serie_author_intent';
  $handler->display->display_options['fields']['field_popp_serie_author_intent']['table'] = 'field_data_field_popp_serie_author_intent';
  $handler->display->display_options['fields']['field_popp_serie_author_intent']['field'] = 'field_popp_serie_author_intent';
  /* Field: Content: Liens externes en lien avec la série */
  $handler->display->display_options['fields']['field_popp_serie_external_links']['id'] = 'field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['table'] = 'field_data_field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['field'] = 'field_popp_serie_external_links';
  $handler->display->display_options['fields']['field_popp_serie_external_links']['delta_offset'] = '0';
  /* Field: Content: Observations pour la re-photographie */
  $handler->display->display_options['fields']['field_popp_serie_observ']['id'] = 'field_popp_serie_observ';
  $handler->display->display_options['fields']['field_popp_serie_observ']['table'] = 'field_data_field_popp_serie_observ';
  $handler->display->display_options['fields']['field_popp_serie_observ']['field'] = 'field_popp_serie_observ';
  /* Field: Content: OPP */
  $handler->display->display_options['fields']['field_popp_serie_opp']['id'] = 'field_popp_serie_opp';
  $handler->display->display_options['fields']['field_popp_serie_opp']['table'] = 'field_data_field_popp_serie_opp';
  $handler->display->display_options['fields']['field_popp_serie_opp']['field'] = 'field_popp_serie_opp';
  /* Field: Content: Pays */
  $handler->display->display_options['fields']['field_popp_serie_country']['id'] = 'field_popp_serie_country';
  $handler->display->display_options['fields']['field_popp_serie_country']['table'] = 'field_data_field_popp_serie_country';
  $handler->display->display_options['fields']['field_popp_serie_country']['field'] = 'field_popp_serie_country';
  /* Field: Content: Porteur OPP */
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['id'] = 'field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['table'] = 'field_data_field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['field'] = 'field_popp_serie_supp_struct';
  $handler->display->display_options['fields']['field_popp_serie_supp_struct']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Région */
  $handler->display->display_options['fields']['field_popp_serie_district']['id'] = 'field_popp_serie_district';
  $handler->display->display_options['fields']['field_popp_serie_district']['table'] = 'field_data_field_popp_serie_district';
  $handler->display->display_options['fields']['field_popp_serie_district']['field'] = 'field_popp_serie_district';
  /* Field: Content: Typologie de paysage */
  $handler->display->display_options['fields']['field_popp_serie_landscape_typo']['id'] = 'field_popp_serie_landscape_typo';
  $handler->display->display_options['fields']['field_popp_serie_landscape_typo']['table'] = 'field_data_field_popp_serie_landscape_typo';
  $handler->display->display_options['fields']['field_popp_serie_landscape_typo']['field'] = 'field_popp_serie_landscape_typo';
  /* Field: Content: Unité de paysage */
  $handler->display->display_options['fields']['field_popp_serie_landscape_unit']['id'] = 'field_popp_serie_landscape_unit';
  $handler->display->display_options['fields']['field_popp_serie_landscape_unit']['table'] = 'field_data_field_popp_serie_landscape_unit';
  $handler->display->display_options['fields']['field_popp_serie_landscape_unit']['field'] = 'field_popp_serie_landscape_unit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
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
    'popp_photo_serie' => 'popp_photo_serie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'extractserie';

  /* Display: Exportation de données */
  $handler = $view->new_display('views_data_export', 'Exportation de données', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'extract-serie-data';
  $translatables['extract_serie'] = array(
    t('Master'),
    t('Extract Serie'),
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
    t('Titre de la série'),
    t('Adresse/lieu de la prise de vue'),
    t('Altitude'),
    t('Altitude (prise de vue aérienne)'),
    t('Audience de groupes'),
    t('Auteur / Preneur de son'),
    t('Auteur de la reconduction'),
    t('Last comment author'),
    t('Axe(s) thématique(s)'),
    t('Commune'),
    t('Date'),
    t('Description fine des éléments de paysage à la premiere prise de vue'),
    t('Document référence'),
    t('Documentation'),
    t('Département'),
    t('Ensemble paysager'),
    t('Format'),
    t('Fréquence de reconduction prévue'),
    t('Identifiant de la série'),
    t('Identifiant interne OPP'),
    t('Intention du photographe'),
    t('Liens externes en lien avec la série'),
    t('Observations pour la re-photographie'),
    t('OPP'),
    t('Pays'),
    t('Porteur OPP'),
    t('Région'),
    t('Typologie de paysage'),
    t('Unité de paysage'),
    t('Tout'),
    t('Page'),
    t('more'),
    t('Exportation de données'),
  );
  $export['extract_serie'] = $view;

  return $export;
}
