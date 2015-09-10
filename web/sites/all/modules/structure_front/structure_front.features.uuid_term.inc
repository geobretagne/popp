<?php
/**
 * @file
 * structure_front.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function structure_front_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Culture légumière',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03618330-03db-4931-b32c-15bea4ecf7bb',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '040d299a-ae91-461f-86fc-1373892bfc52',
    ),
  );
  $terms[] = array(
    'name' => 'Innondation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03c4b5f8-8459-4da6-b5f6-2e7cd6e7b258',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Culture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '040d299a-ae91-461f-86fc-1373892bfc52',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '60dafc8f-f8f9-445d-b32e-d0ac24045225',
    ),
  );
  $terms[] = array(
    'name' => 'Coulée de boue',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '04787ce0-bdc8-4107-9322-4904343ee53f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Corse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '048ced27-a38e-4fa9-ad54-5a76ae7f6342',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 94,
          'format' => NULL,
          'safe_value' => 94,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Languedoc-Roussillon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0584bd97-5abf-42d5-9076-5d52b03288fe',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 91,
          'format' => NULL,
          'safe_value' => 91,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Etendue',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0942e406-48de-4338-a42c-b331130f424e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4c3eb666-b240-4868-ac93-810d65ea10d0',
    ),
  );
  $terms[] = array(
    'name' => 'Royaume-Uni',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0b124a89-b5cd-4c43-a23a-ea44ee855286',
    'vocabulary_machine_name' => 'popp_countries',
    'field_country_code' => array(),
  );
  $terms[] = array(
    'name' => 'Écluse',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0cf97db4-0a2e-4ea5-a1db-ceb676e587a6',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Érosion littorale sur le Pays de St Brieuc',
    'description' => 'Érosion littorale sur le Pays de St Brieuc',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0f28c515-6e00-4bd8-85f8-df5a84e922cb',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Franche-Comté',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '12c71358-a7d4-4cd9-b71c-993cb7d293ab',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 43,
          'format' => NULL,
          'safe_value' => 43,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rhône-Alpes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17b85c47-611e-4138-ad06-1ff0dd4d25a1',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 82,
          'format' => NULL,
          'safe_value' => 82,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Quiberon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '205796d9-6ee7-4e85-806a-0833449d4de1',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Yoyo',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => '27583b07-572f-4515-89bc-e7a2702f0555',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
    'parent' => array(
      0 => 'a7e1b8bf-4733-4ab6-b59a-8021809765c0',
    ),
  );
  $terms[] = array(
    'name' => 'Moulin',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '29373d89-f050-48e5-b774-b86c2fdd566e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de Guéméné',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '31bb0d82-1579-4b56-9262-2d40d710b331',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Versants',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '31e32de9-d84e-44bf-846b-0daa9a560dff',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Lorraine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '33fa827f-1481-4839-896d-d98723686023',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 41,
          'format' => NULL,
          'safe_value' => 41,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Culture céréalière',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '35b63ec5-ce0c-412f-aa48-4f2611029666',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '040d299a-ae91-461f-86fc-1373892bfc52',
    ),
  );
  $terms[] = array(
    'name' => 'Morlaix',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '367e39c6-725b-4c13-8492-d1da4761cb46',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Test typo paysage',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '379f8627-e6eb-4b02-b684-7287515d322e',
    'vocabulary_machine_name' => 'landscape_typologies',
  );
  $terms[] = array(
    'name' => 'La presqu\'île de Rhuys',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37dc3fef-5045-4536-8c19-f489d0772b19',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Quimper',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '395501bc-88a4-463a-902f-e296f68337d6',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => '22 - Côtes d\'Armor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3a882369-da06-481c-965f-9d7346abe3a9',
    'vocabulary_machine_name' => 'county',
    'field_county_code' => array(),
  );
  $terms[] = array(
    'name' => 'Alsace',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c25cf58-9fb8-429d-b4d2-0d47e9eea776',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 42,
          'format' => NULL,
          'safe_value' => 42,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'anglais',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3cce4ed0-503e-4738-8911-84fcc7807ed1',
    'vocabulary_machine_name' => 'popp_tax_language',
  );
  $terms[] = array(
    'name' => 'Panoramique',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4365ab51-b083-4c61-81d8-67671a0637e6',
    'vocabulary_machine_name' => 'popp_tax_format',
  );
  $terms[] = array(
    'name' => '29 - Finistère',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '48777e3a-71a1-423b-8b10-37be89b6f7a0',
    'vocabulary_machine_name' => 'county',
    'field_county_code' => array(),
  );
  $terms[] = array(
    'name' => 'Eau continentale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4c3eb666-b240-4868-ac93-810d65ea10d0',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'Midi-Pyrénées',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f81ee68-3f8f-4608-b694-4d0850097a94',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 73,
          'format' => NULL,
          'safe_value' => 73,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Saint-Brieuc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '50c4afdd-cb24-41d1-b6fb-8cfb05d7b9ef',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Camaret',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '55a77d21-15ca-45b8-a090-e2d4f1a1fc8b',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Français',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '55a96827-0b16-4fe5-9f1d-6b0f5005c16d',
    'vocabulary_machine_name' => 'popp_tax_language',
  );
  $terms[] = array(
    'name' => 'Lac',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5b038149-a216-49dc-bd26-ef123abba941',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0942e406-48de-4338-a42c-b331130f424e',
    ),
  );
  $terms[] = array(
    'name' => 'Végétation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60dafc8f-f8f9-445d-b32e-d0ac24045225',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'Pays de la Loire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '63c91fe5-bd7c-4f77-adc6-046bf7cead12',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 52,
          'format' => NULL,
          'safe_value' => 52,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Guyane',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '64a1950b-92c6-4ad1-9a8f-ace0ac093d32',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => '03',
          'format' => NULL,
          'safe_value' => '03',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Barrage',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '65f03023-087b-4425-8b9f-f7a13a0b154d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0942e406-48de-4338-a42c-b331130f424e',
    ),
  );
  $terms[] = array(
    'name' => 'Martinique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66f6d0c2-94de-4356-8dc2-53aa8f39db8c',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => '02',
          'format' => NULL,
          'safe_value' => '02',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Île-de-France',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '75a59bd1-d8b4-4dc7-9c59-bfbe15950c9b',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 11,
          'format' => NULL,
          'safe_value' => 11,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Champagne-Ardenne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '79e78b4a-642f-4d83-b5f6-e3763a0168c8',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 21,
          'format' => NULL,
          'safe_value' => 21,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Friches',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7a83b382-326e-4956-919c-6ae6c63b6cce',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'Dessin',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => '7bbc67f7-eba9-46d6-b3dd-b2be44e0d0d2',
    'vocabulary_machine_name' => 'popp_refdoc_type',
  );
  $terms[] = array(
    'name' => 'Centre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '80df4fba-eb0c-4a35-97e5-8b8e2e3fee15',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 24,
          'format' => NULL,
          'safe_value' => 24,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Provence-Alpes-Côte d\'Azur',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84c62ca4-6a83-4212-b718-1b2c780d823b',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 93,
          'format' => NULL,
          'safe_value' => 93,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Photo',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => '854601dd-0de8-4a19-807b-ec67c70401a8',
    'vocabulary_machine_name' => 'popp_refdoc_type',
  );
  $terms[] = array(
    'name' => 'Carte postale ancienne',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => '869cdb8f-8006-43ac-bcab-2aea9b034557',
    'vocabulary_machine_name' => 'popp_refdoc_type',
  );
  $terms[] = array(
    'name' => 'Lannion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '88a1bbff-7763-4b9e-9f3f-4387e6f8e985',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Rennes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '893adbd6-f182-43b0-bad1-931b70c57ba4',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => '56 - Morbihan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '928c1ca0-6617-4f54-97cc-b9c5aca34f1b',
    'vocabulary_machine_name' => 'county',
    'field_county_code' => array(),
  );
  $terms[] = array(
    'name' => 'LGV Grand Ouest',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '988fa11c-1ef3-4d09-8843-b090f04ed4f0',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Basse-Normandie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98ef8f6a-c811-4e9d-9971-b02319ef2a3f',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 25,
          'format' => NULL,
          'safe_value' => 25,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Standard',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9af0ba2f-5714-4402-9b2d-cd1f3a941294',
    'vocabulary_machine_name' => 'popp_tax_format',
  );
  $terms[] = array(
    'name' => 'Etendue',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a199c6c7-587b-40bc-8fc2-90f397165c60',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0942e406-48de-4338-a42c-b331130f424e',
    ),
  );
  $terms[] = array(
    'name' => 'Aquitaine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a2309e90-a6ad-41a2-8d2e-050755ee6d4a',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 72,
          'format' => NULL,
          'safe_value' => 72,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Poitou-Charentes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a468f590-2073-442f-818f-5aa78f0116f9',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 54,
          'format' => NULL,
          'safe_value' => 54,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Trame verte',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a4ba8afc-949e-4c3e-9d08-2463b1535a42',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
  );
  $terms[] = array(
    'name' => 'Tata',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => 'a7e1b8bf-4733-4ab6-b59a-8021809765c0',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Drain / Irrigation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a9642bd2-aa17-4590-b3bb-9fa47b9420dd',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Marées en finistère',
    'description' => 'Observation des marées sur le littoral finistérien',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'adbce564-2a48-4d17-bac2-709635a97401',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Mayotte',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ade9065a-c3b4-430b-a07b-b2fd0303628a',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => '06',
          'format' => NULL,
          'safe_value' => '06',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => '360°',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b6ee3d2b-8703-4f5b-879d-d67a4d97db85',
    'vocabulary_machine_name' => 'popp_tax_format',
  );
  $terms[] = array(
    'name' => 'Rivière',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b7985bde-3a95-461d-996c-f1cb339b4469',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'France',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b94417f3-98e0-46fa-af91-984619235399',
    'vocabulary_machine_name' => 'popp_countries',
    'field_country_code' => array(),
  );
  $terms[] = array(
    'name' => 'Sillon de l\'Arz',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bbd24c3c-9357-4fb1-a3da-e69863bd07df',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Brest',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bdb08fd2-1724-4233-8fa9-6d7bed89efac',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'La Réunion',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'be0b5532-920b-48b3-87fa-50a21761f1cc',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => '04',
          'format' => NULL,
          'safe_value' => '04',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Paysage boisé et de bosquets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bfd56c70-203f-4183-a161-4948ddf9941f',
    'vocabulary_machine_name' => 'landscape_set',
  );
  $terms[] = array(
    'name' => 'Landivisiau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c976298f-1e34-4e22-90ba-92b09473de91',
    'vocabulary_machine_name' => 'popp_towns',
  );
  $terms[] = array(
    'name' => 'Guadeloupe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ca7ecb27-eec9-429c-930b-92fa15b5edf0',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => '01',
          'format' => NULL,
          'safe_value' => '01',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Stagnante',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cb7feba3-2af6-4a1c-9464-e9149dc01b35',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4c3eb666-b240-4868-ac93-810d65ea10d0',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage associé à la présence de l\'eau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cc1ad5c6-87e9-4803-baa2-cc151f815a63',
    'vocabulary_machine_name' => 'landscape_set',
  );
  $terms[] = array(
    'name' => 'Auvergne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd02ce1b1-3289-4962-9d72-d98be76d03cd',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 83,
          'format' => NULL,
          'safe_value' => 83,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Golfe du Morbihan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd1356cfe-bb45-469c-94d3-6c7594cfa344',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Canal',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd549f0f6-1189-4a2d-8a6d-70c210fd73c8',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    ),
  );
  $terms[] = array(
    'name' => 'Picardie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd887d4ef-d09d-4a10-8eec-eb0202b09b85',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 22,
          'format' => NULL,
          'safe_value' => 22,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Paysage littoral urbanisé',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'db97de5f-0018-4c6a-8a51-00eb47992697',
    'vocabulary_machine_name' => 'landscape_set',
  );
  $terms[] = array(
    'name' => 'Limousin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e0eeca6c-f733-494a-890f-940be9413cc9',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 74,
          'format' => NULL,
          'safe_value' => 74,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => '35 - Ille et Vilaine',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e5d019da-318c-41cb-aa8b-98d4cf847eec',
    'vocabulary_machine_name' => 'county',
    'field_county_code' => array(),
  );
  $terms[] = array(
    'name' => 'Traitée',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8da939d-3b75-44fa-8716-3d98a62fa97a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4c3eb666-b240-4868-ac93-810d65ea10d0',
    ),
  );
  $terms[] = array(
    'name' => 'Cours d\'eau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'eafc63d5-9626-4205-9fc0-784f71dac1fc',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4c3eb666-b240-4868-ac93-810d65ea10d0',
    ),
  );
  $terms[] = array(
    'name' => 'LGPL',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'eb1b8448-ae9b-4532-bf97-8a1d33e8d464',
    'vocabulary_machine_name' => 'popp_tax_right',
  );
  $terms[] = array(
    'name' => 'Tableau',
    'description' => '',
    'format' => 'editeur',
    'weight' => 0,
    'uuid' => 'ebb29670-1aa9-4090-ba4d-d57b3051cdfc',
    'vocabulary_machine_name' => 'popp_refdoc_type',
  );
  $terms[] = array(
    'name' => 'Bourgogne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec182f44-ba3d-4ba7-917c-7053c53d267c',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 26,
          'format' => NULL,
          'safe_value' => 26,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Haute-Normandie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec5ac23a-42e0-4aa9-b731-ea6896bcf36e',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 23,
          'format' => NULL,
          'safe_value' => 23,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de Gourin',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'efb28fb9-a555-4473-8c1c-97136708521a',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Bretagne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f96a73a0-4aca-427d-a7e9-4ab103db60bb',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 53,
          'format' => NULL,
          'safe_value' => 53,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nord-Pas-de-Calais',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fdeab5a8-bef6-461b-b474-44b89a45f503',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(
      'und' => array(
        0 => array(
          'value' => 31,
          'format' => NULL,
          'safe_value' => 31,
        ),
      ),
    ),
  );
  return $terms;
}
