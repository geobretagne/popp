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
  $field_group->identifier = 'group_popp_photo_metadata|node|opp_photo|form';
  $field_group->group_name = 'group_popp_photo_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Métadonnées (Dublin core)',
    'weight' => '1',
    'children' => array(
      0 => 'field_popp_photo_description',
      1 => 'field_popp_photo_editor',
      2 => 'field_popp_photo_date',
      3 => 'field_popp_photo_contributor',
      4 => 'field_popp_photo_format',
      5 => 'field_popp_photo_author',
      6 => 'field_popp_photo_subject',
      7 => 'field_popp_photo_content_type',
      8 => 'field_popp_photo_copyrights',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-photo-metadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_photo_metadata|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popp_photo_photo_elts|node|opp_photo|form';
  $field_group->group_name = 'group_popp_photo_photo_elts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Éléments de la photo',
    'weight' => '2',
    'children' => array(
      0 => 'field_popp_collection_photo',
      1 => 'field_popp_photo_tags',
      2 => 'field_popp_geolocalisation_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-photo-photo-elts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_photo_photo_elts|node|opp_photo|form'] = $field_group;

  return $export;
}
