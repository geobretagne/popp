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
  $field_group->identifier = 'group_contributor|node|opp_photo|form';
  $field_group->group_name = 'group_contributor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Contributor',
    'weight' => '24',
    'children' => array(
      0 => 'field_popp_photo_contributor',
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
  $export['group_contributor|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coverage|node|opp_photo|form';
  $field_group->group_name = 'group_coverage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Coverage',
    'weight' => '29',
    'children' => array(
      0 => 'field_popp_photo_country',
      1 => 'field_popp_photo_region',
      2 => 'field_popp_photo_county',
      3 => 'field_popp_landscape_set',
      4 => 'field_landscape_unit',
      5 => 'field_popp_photo_periodicity',
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
  $export['group_coverage|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_creator|node|opp_photo|form';
  $field_group->group_name = 'group_creator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Creator',
    'weight' => '20',
    'children' => array(
      0 => 'field_popp_photo_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-creator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_creator|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|opp_photo|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '25',
    'children' => array(
      0 => 'field_popp_photo_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_date|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|opp_photo|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '22',
    'children' => array(
      0 => 'field_popp_photo_description',
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
  $export['group_description|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_format|node|opp_photo|form';
  $field_group->group_name = 'group_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Format',
    'weight' => '27',
    'children' => array(
      0 => 'field_popp_photo_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-format field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_format|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identifier|node|opp_photo|form';
  $field_group->group_name = 'group_identifier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Identifier',
    'weight' => '28',
    'children' => array(
      0 => 'field_opp_identifier',
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
  $export['group_identifier|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popp_photo_fc_description|field_collection_item|field_popp_collection_photo|form';
  $field_group->group_name = 'group_popp_photo_fc_description';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_popp_collection_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '4',
    'children' => array(
      0 => 'field_popp_photo_fc_dp',
      1 => 'field_popp_photo_fc_ip',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-photo-fc-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_photo_fc_description|field_collection_item|field_popp_collection_photo|form'] = $field_group;

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
      0 => 'group_description',
      1 => 'group_contributor',
      2 => 'group_format',
      3 => 'group_identifier',
      4 => 'group_source',
      5 => 'group_subject',
      6 => 'group_type',
      7 => 'group_rights',
      8 => 'group_creator',
      9 => 'group_publisher',
      10 => 'group_date',
      11 => 'group_coverage',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_popp_geolocalisation_photo',
      1 => 'field_popp_photo_tags',
      2 => 'field_popp_collection_testimony',
      3 => 'field_popp_collection_photo',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popp_song_fc_gr_creator|field_collection_item|field_popp_collection_testimony|form';
  $field_group->group_name = 'group_popp_song_fc_gr_creator';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_popp_collection_testimony';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Créateur',
    'weight' => '2',
    'children' => array(
      0 => 'field_popp_song_fc_creator_struc',
      1 => 'field_popp_song_fc_creator_authe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-song-fc-gr-creator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_song_fc_gr_creator|field_collection_item|field_popp_collection_testimony|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popp_song_fc_gr_descrip|field_collection_item|field_popp_collection_testimony|form';
  $field_group->group_name = 'group_popp_song_fc_gr_descrip';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_popp_collection_testimony';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '4',
    'children' => array(
      0 => 'field_popp_song_fc_description_2',
      1 => 'field_popp_song_fc_description_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-song-fc-gr-descrip field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_song_fc_gr_descrip|field_collection_item|field_popp_collection_testimony|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popp_song_fc_subject|field_collection_item|field_popp_collection_testimony|form';
  $field_group->group_name = 'group_popp_song_fc_subject';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_popp_collection_testimony';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sujet',
    'weight' => '3',
    'children' => array(
      0 => 'field_popp_song_fc_subject_theme',
      1 => 'field_popp_song_fc_subject_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-popp-song-fc-subject field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_popp_song_fc_subject|field_collection_item|field_popp_collection_testimony|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|opp_photo|form';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Rights',
    'weight' => '31',
    'children' => array(
      0 => 'field_popp_photo_copyrights',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rights field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rights|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subject|node|opp_photo|form';
  $field_group->group_name = 'group_subject';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '21',
    'children' => array(
      0 => 'field_popp_photo_subject_th',
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
  $export['group_subject|node|opp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type|node|opp_photo|form';
  $field_group->group_name = 'group_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'opp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_popp_photo_metadata';
  $field_group->data = array(
    'label' => 'Type',
    'weight' => '26',
    'children' => array(
      0 => 'field_popp_photo_content_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_type|node|opp_photo|form'] = $field_group;

  return $export;
}
