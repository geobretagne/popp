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
    'name' => 'Érosion littorale sur le Pays de St Brieuc',
    'description' => 'Érosion littorale sur le Pays de St Brieuc',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0f28c515-6e00-4bd8-85f8-df5a84e922cb',
    'vocabulary_machine_name' => 'popp_thematic_axes',
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
    'name' => 'La presqu’île de Rhuys',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37dc3fef-5045-4536-8c19-f489d0772b19',
    'vocabulary_machine_name' => 'landscape_units',
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
    'name' => 'anglais',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3cce4ed0-503e-4738-8911-84fcc7807ed1',
    'vocabulary_machine_name' => 'popp_tax_language',
  );
  $terms[] = array(
    'name' => 'Bretagne',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4516e096-44c2-464a-93bf-d674ad879a58',
    'vocabulary_machine_name' => 'region',
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
    'name' => 'Français',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '55a96827-0b16-4fe5-9f1d-6b0f5005c16d',
    'vocabulary_machine_name' => 'popp_tax_language',
  );
  $terms[] = array(
    'name' => 'Basse Normandie',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '56db52f0-ccd8-4b8b-a068-6200969868b9',
    'vocabulary_machine_name' => 'region',
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
    'name' => 'barrage',
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
    'name' => 'Haute Normandie',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7b7c74fd-9d54-4692-9b4c-c677ce92cd71',
    'vocabulary_machine_name' => 'region',
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
    'name' => 'Marées en finistère',
    'description' => 'Observation des marées sur le littoral finistérien',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'adbce564-2a48-4d17-bac2-709635a97401',
    'vocabulary_machine_name' => 'popp_thematic_axes',
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
    'name' => 'Paysage boisé et de bosquets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bfd56c70-203f-4183-a161-4948ddf9941f',
    'vocabulary_machine_name' => 'landscape_set',
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
    'name' => 'Golfe du Morbihan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd1356cfe-bb45-469c-94d3-6c7594cfa344',
    'vocabulary_machine_name' => 'landscape_units',
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
    'name' => 'Plateau de Gourin',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'efb28fb9-a555-4473-8c1c-97136708521a',
    'vocabulary_machine_name' => 'landscape_units',
  );
  $terms[] = array(
    'name' => 'Pays de la Loire',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fe692cb2-1297-4dc6-8c24-27cf2061807e',
    'vocabulary_machine_name' => 'region',
  );
  return $terms;
}
