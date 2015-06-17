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
  $handler->display->display_options['title'] = 'Panier';
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
  $handler->display->display_options['row_plugin'] = 'node';
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
    'popp_photo_serie' => 'popp_photo_serie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mon-panier';
  $translatables['caddy'] = array(
    t('Master'),
    t('Panier'),
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
    t('Page'),
  );
  $export['caddy'] = $view;

  $view = new view();
  $view->name = 'getter_popp_pa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Getter POPP_Pa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
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
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Utilisateur : Date de création */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Utilisateur : Actif */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['getter_popp_pa'] = array(
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
    t('Entity Reference'),
  );
  $export['getter_popp_pa'] = $view;

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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Vocabulaire de taxonomie : Nom */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Type de champs';
  /* Champ: Terme de taxonomie : Identifiant (ID) du terme */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'ID à reporter sur le fichier d\'import';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Libellé';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Critère de tri: Vocabulaire de taxonomie : Identifiant (ID) de vocabulaire */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  /* Critère de filtrage: Terme de taxonomie : Vocabulaire */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    15 => '15',
    16 => '16',
    2 => '2',
    10 => '10',
    3 => '3',
    8 => '8',
    13 => '13',
    19 => '19',
    4 => '4',
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
  $handler->display->display_options['path'] = 'popp/export_preparation';
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
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Type de champs'),
    t('ID à reporter sur le fichier d\'import'),
    t('.'),
    t(','),
    t('Libellé'),
    t('Data export'),
  );
  $export['popp_export_preparation'] = $view;

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
  /* Champ: Contenu : Logo structure porteuse */
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
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Critère de filtrage: Contenu : Type */
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
  /* Champ: Contenu : Logo partenaire */
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
  /* Critère de tri: Contenu : Ordre d&#039;affichage (field_popp_partner_display_order) */
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['id'] = 'field_popp_partner_display_order_value';
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['table'] = 'field_data_field_popp_partner_display_order';
  $handler->display->display_options['sorts']['field_popp_partner_display_order_value']['field'] = 'field_popp_partner_display_order_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
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
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['id'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['field'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_refdoc_node']['required'] = TRUE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Fichier */
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
  /* Champ: Contenu : Date */
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
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Nid */
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
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_popp_serie_refdoc_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['id'] = 'field_popp_refdoc_date_1';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['table'] = 'field_data_field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['field'] = 'field_popp_refdoc_date';
  $handler->display->display_options['fields']['field_popp_refdoc_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Auteur / Photographe */
  $handler->display->display_options['fields']['field_popp_refdoc_author']['id'] = 'field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['table'] = 'field_data_field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['field'] = 'field_popp_refdoc_author';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['label'] = 'Auteur';
  $handler->display->display_options['fields']['field_popp_refdoc_author']['empty'] = 'Inconnu(e)';
  /* Champ: Contenu : Licence du document */
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
    t('Contenu référençant Contenu depuis field_popp_serie_refdoc'),
    t('<a class="toZoom" href="/node/[nid_1]/[nid]" linkedphoto="[nid]" referencedoc="true">[field_popp_refdoc_file]</a>'),
    t('Ref - [field_popp_refdoc_date]'),
    t('Tout'),
    t('Block'),
    t('Bloc'),
    t('Date'),
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
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['id'] = 'reverse_field_popp_serie_documentation_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['field'] = 'reverse_field_popp_serie_documentation_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_documentation_node']['required'] = TRUE;
  /* Champ: Contenu : Documentation */
  $handler->display->display_options['fields']['field_popp_documentation_file']['id'] = 'field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['table'] = 'field_data_field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['field'] = 'field_popp_documentation_file';
  $handler->display->display_options['fields']['field_popp_documentation_file']['label'] = '';
  $handler->display->display_options['fields']['field_popp_documentation_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_documentation_file']['click_sort_column'] = 'fid';
  /* Champ: Contenu : Légende */
  $handler->display->display_options['fields']['field_popp_documentation_legend']['id'] = 'field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['table'] = 'field_data_field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['field'] = 'field_popp_documentation_legend';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['label'] = '';
  $handler->display->display_options['fields']['field_popp_documentation_legend']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Nid */
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
    'popp_documentation' => 'popp_documentation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
    t('Contenu référençant Contenu depuis field_popp_serie_documentation'),
    t('Tout'),
    t('Block'),
  );
  $export['popp_serie_documentation_display'] = $view;

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
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Aucun son pour le moment</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['id'] = 'reverse_field_popp_serie_testimonies_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['field'] = 'reverse_field_popp_serie_testimonies_node';
  $handler->display->display_options['relationships']['reverse_field_popp_serie_testimonies_node']['required'] = TRUE;
  /* Relation: Contenu : Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Champ: Contenu : Licence du son */
  $handler->display->display_options['fields']['field_popp_tty_rights']['id'] = 'field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['table'] = 'field_data_field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['field'] = 'field_popp_tty_rights';
  $handler->display->display_options['fields']['field_popp_tty_rights']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_rights']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_rights']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_rights']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Date d'enregistrement */
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
  /* Champ: Contenu : Durée */
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
  /* Champ: Contenu : Présentation du son */
  $handler->display->display_options['fields']['field_popp_tty_descr']['id'] = 'field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['table'] = 'field_data_field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['field'] = 'field_popp_tty_descr';
  $handler->display->display_options['fields']['field_popp_tty_descr']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_descr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_descr']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Structure responsable de la création du contenu */
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['id'] = 'field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['table'] = 'field_data_field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['field'] = 'field_popp_tty_resp_structure';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['label'] = '';
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_tty_resp_structure']['settings'] = array(
    'link' => 0,
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Informations';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Titre: [title]<br/>
Présentation : [field_popp_tty_descr]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Auteur / Preneur de son */
  $handler->display->display_options['fields']['field_popp_tty_author']['id'] = 'field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['table'] = 'field_data_field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['field'] = 'field_popp_tty_author';
  $handler->display->display_options['fields']['field_popp_tty_author']['label'] = 'Contexte';
  $handler->display->display_options['fields']['field_popp_tty_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_popp_tty_author']['alter']['text'] = 'Auteur / Preneur de son : [field_popp_tty_author]<br/>
Contributeur : TODO SYLVAIN<br/>
Strcuture responsable de la création du contenu : [field_popp_tty_resp_structure]<br/>';
  $handler->display->display_options['fields']['field_popp_tty_author']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Fichier */
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
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Nid */
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
    t('Contenu référençant Contenu depuis field_popp_serie_testimonies'),
    t('auteur'),
    t('[field_popp_tty_duration] mn'),
    t('Informations'),
    t('Titre: [title]<br/>
Présentation : [field_popp_tty_descr]'),
    t('Contexte'),
    t('Auteur / Preneur de son : [field_popp_tty_author]<br/>
Contributeur : TODO SYLVAIN<br/>
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
  /* Pied de page: Global : Texte non filtré */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div id="photoResult"></div>';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Géolocalisation */
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['id'] = 'field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['table'] = 'field_data_field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['field'] = 'field_popp_serie_geolocation';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popp_serie_geolocation']['settings'] = array(
    'map' => 'popp_home_map',
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
  /* Champ: Contenu : Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
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
    'popp_page' => 'popp_page',
  );
  /* Critère de filtrage: Contenu : Entrée Menu (field_popp_entry_menu) */
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
  /* Champ: Contenu : Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
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
    'popp_page' => 'popp_page',
  );
  /* Critère de filtrage: Contenu : Entrée Menu (field_popp_entry_menu) */
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
  /* Relation: Adhésion OG : Adhésion OG à partir de Nœud */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom de l\'OPP';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    t('Adhésion OG à partir de node'),
    t('Nom de l\'OPP'),
    t('Page'),
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
  /* Champ: Contenu : Contenu */
  $handler->display->display_options['fields']['field_popp_page_content']['id'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['table'] = 'field_data_field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['field'] = 'field_popp_page_content';
  $handler->display->display_options['fields']['field_popp_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_popp_page_content']['element_label_colon'] = FALSE;
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
    'popp_page' => 'popp_page',
  );
  /* Critère de filtrage: Contenu : Entrée Menu (field_popp_entry_menu) */
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
  /* Champ: Contenu : Logo structure porteuse */
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
  /* Champ: Contenu : Description courte */
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['id'] = 'field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['table'] = 'field_data_field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['field'] = 'field_popp_supp_struc_shortdesc';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['label'] = '';
  $handler->display->display_options['fields']['field_popp_supp_struc_shortdesc']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'supporting_structure' => 'supporting_structure',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popp-structure';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Structures Porteuses';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-popp-principal';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
    t('Page'),
  );
  $export['popp_view_page_structures'] = $view;

  return $export;
}
