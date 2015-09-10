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
      0 => 'field_popp_serie_next_resp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contributor',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contributor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_popp_serie_town',
      1 => 'field_popp_serie_landscape_unit',
      2 => 'field_popp_serie_district',
      3 => 'field_popp_serie_county',
      4 => 'field_popp_serie_country',
      5 => 'field_popp_serie_landscape_set',
      6 => 'field_popp_serie_per',
      7 => 'field_popp_serie_address',
      8 => 'field_popp_serie_loc_axes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Coverage',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-coverage field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_coverage|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_creator|node|popp_photo|form';
  $field_group->group_name = 'group_creator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Creator',
    'weight' => '1',
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
  $export['group_creator|node|popp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|popp_photo|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '4',
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
  $export['group_date|node|popp_photo|form'] = $field_group;

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
      2 => 'field_popp_serie_first_desc_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_description|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|popp_photo|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_popp_photo_description',
      1 => 'field_popp_photo_descr_date',
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
  $export['group_description|node|popp_photo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_format|node|popp_photo_serie|form';
  $field_group->group_name = 'group_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Format',
    'weight' => '7',
    'children' => array(
      0 => 'field_popp_serie_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Format',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-format field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_format|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_format|node|popp_photo|form';
  $field_group->group_name = 'group_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Format',
    'weight' => '5',
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
  $export['group_format|node|popp_photo|form'] = $field_group;

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
      0 => 'field_popp_serie_identifier',
      1 => 'field_popp_serie_int_identifier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identifier',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-identifier field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_identifier|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identifier|node|popp_photo|form';
  $field_group->group_name = 'group_identifier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identifier',
    'weight' => '6',
    'children' => array(
      0 => 'field_popp_photo_internal_id',
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
  $export['group_identifier|node|popp_photo|form'] = $field_group;

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
      'label' => 'Language',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-language field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_language|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_non_oai_pmh|node|popp_photo|form';
  $field_group->group_name = 'group_non_oai_pmh';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Métadonnées hors OAI-PMH',
    'weight' => '9',
    'children' => array(
      0 => 'field_popp_photo_hour',
      1 => 'field_popp_photo_film_type',
      2 => 'field_popp_photo_tripod_height',
      3 => 'field_popp_photo_aperture',
      4 => 'field_popp_photo_camera_type',
      5 => 'field_popp_photo_camera_inclinat',
      6 => 'field_popp_photo_iso',
      7 => 'field_popp_photo_tidal_coeff',
      8 => 'field_popp_photo_orientation',
      9 => 'field_popp_photo_focal',
      10 => 'field_popp_photo_altitude',
      11 => 'field_popp_photo_original_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-non-oai-pmh field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_non_oai_pmh|node|popp_photo|form'] = $field_group;

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
      'label' => 'Publisher',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publisher field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_publisher|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_record_field|node|popp_photo_serie|form';
  $field_group->group_name = 'group_record_field';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo_serie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fiche terrain',
    'weight' => '10',
    'children' => array(
      0 => 'field_popp_serie_aerial',
      1 => 'field_popp_serie_sketch',
      2 => 'field_popp_serie_context_photo',
      3 => 'field_popp_serie_observ',
      4 => 'field_popp_serie_tripod',
      5 => 'field_popp_serie_ign',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Fiche terrain',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-record-field field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_record_field|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|popp_photo|form';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights',
    'weight' => '7',
    'children' => array(
      0 => 'field_popp_photo_copyrights',
      1 => 'field_popp_photo_sheet_rights',
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
  $export['group_rights|node|popp_photo|form'] = $field_group;

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
      1 => 'field_popp_serie_landscape_typo',
      2 => 'field_popp_serie_opp',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Subject',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-subject field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_subject|node|popp_photo_serie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subject|node|popp_photo|form';
  $field_group->group_name = 'group_subject';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'popp_photo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '2',
    'children' => array(
      0 => 'field_popp_photo_nonreq_thes',
      1 => 'field_popp_photo_thesaurus',
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
  $export['group_subject|node|popp_photo|form'] = $field_group;

  return $export;
}
