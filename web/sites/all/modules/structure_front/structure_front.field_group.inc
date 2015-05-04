<?php
/**
 * @file
 * structure_front.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function structure_front_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contributor|node|popp_photo_serie|form';
  $field_group->group_name = 'group_contributor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contributor',
    'weight' => '4',
    'children' => array(
      0 => 'field_popp_serie_init_resp',
      1 => 'field_popp_serie_next_resp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contributor field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contributor|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coverage|node|popp_photo_serie|form';
  $field_group->group_name = 'group_coverage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coverage',
    'weight' => '7',
    'children' => array(
      0 => 'field_popp_serie_landscape_set',
      1 => 'field_popp_serie_country',
      2 => 'field_popp_serie_district',
      3 => 'field_popp_serie_county',
      4 => 'field_popp_serie_town',
      5 => 'field_popp_serie_place',
      6 => 'field_popp_serie_landscape_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coverage field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_coverage|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|popp_photo_serie|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'field_popp_serie_author_intent',
      1 => 'field_popp_serie_first_desc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identifier|node|popp_photo_serie|form';
  $field_group->group_name = 'group_identifier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identifier',
    'weight' => '5',
    'children' => array(
      0 => 'field_popp_serie_int_identifier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-identifier field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_identifier|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language|node|popp_photo_serie|form';
  $field_group->group_name = 'group_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '6',
    'children' => array(
      0 => 'field_popp_serie_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-language field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_language|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher|node|popp_photo_serie|form';
  $field_group->group_name = 'group_publisher';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publisher',
    'weight' => '3',
    'children' => array(
      0 => 'field_popp_serie_supp_struct',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publisher field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publisher|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subject|node|popp_photo_serie|form';
  $field_group->group_name = 'group_subject';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '1',
    'children' => array(
      0 => 'field_popp_serie_thematic_axis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-subject field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_subject|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|popp_photo_serie|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '0',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-title field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title|node|popp_photo_serie|form'] = $field_group;

  return $export;
}
