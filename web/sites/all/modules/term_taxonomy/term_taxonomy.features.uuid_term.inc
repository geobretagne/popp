<?php
/**
 * @file
 * term_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function term_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Bassin de Combourg',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '00212bf2-8030-42f9-a283-e165b1157cff',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'lande haute',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0043707e-a7c4-4dd6-b36c-b2032c8ab003',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    ),
  );
  $terms[] = array(
    'name' => 'arrêt de bus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => '014171ed-a0d8-4d19-95bf-59a2133a6233',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Renouvellement urbain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '01926fd3-04a3-4d56-921d-c98b30601ce4',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'bief de moulin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '01ee77bf-2996-4a15-a009-81e8210dbcb0',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'Évolution du bocage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '027b3cab-80b7-4d34-bb32-4c4f89392153',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Camping caravaning en presqu’île de Crozon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '03c19f1d-8cc9-474f-9691-c72e8dc823ff',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'bosquet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '041b2dfd-fe38-484b-be21-f12078066438',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'Corse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '048ced27-a38e-4fa9-ad54-5a76ae7f6342',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'bassin lacustre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '04a0f5db-429b-4c02-88d6-c21ef692325f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'Trégor morlaisien',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '04e605a6-e15b-4d24-85ab-865f5a47331a',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Languedoc-Roussillon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0584bd97-5abf-42d5-9076-5d52b03288fe',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'phénomène',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '05960e43-16f0-4bd6-b157-a6bbb2df39e8',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Le Trégormorlaisien (UP10)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '06068c06-0081-4f0c-8d99-63480c9c4b2d',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'bassin de retenue',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '07f54ad8-ac2f-4b79-bd4e-0460606c8b4d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'Vallées et bocage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '08849c41-9b94-4a8a-8dff-e069041510f6',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'traitée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '095257ec-9e72-41c2-9eaf-c757b1795aeb',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Vallée de l\'Oust',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '09c1571f-9163-4aca-9327-9081cf8cf412',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Mont de Caro',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '09c2c4e4-1d16-4441-bd72-a810e46e6557',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'friche industrielle',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '0a0f6e10-97d6-4322-a076-6022369f1041',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'camping car',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '0a128cd8-45f0-45d8-aa9a-f0c71e5e7c75',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
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
    'name' => 'Activité économique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b904a12-6462-4d47-bea6-a0ae152d23e1',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Traitée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '0c5391ed-4e2c-4f29-9e5a-3bfd37a5764f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'df576522-9218-4c59-8087-ebd4430223aa',
    ),
  );
  $terms[] = array(
    'name' => 'passage piéton',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '0cdbc5f0-fd8d-412e-a0a3-4f89d837a85c',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage de plaine, de plateau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0d39c203-2e91-4d41-a32e-2223b55834da',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Côte des Mégalithes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0da38550-cd1d-4747-b4b6-a9c9009a5f5d',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'équipement collectif',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '0e30fd5c-f4c6-4207-9da3-2f84f35e44dd',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'friches',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '0e44590d-957d-4556-bf4e-20f1ded4e456',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Artificialisation du trait de côte',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0ef2108c-843a-46a9-9064-721cb7728827',
    'vocabulary_machine_name' => 'popp_thematic_axes',
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
    'name' => 'animal domestique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '0fc5921f-e2fb-4795-a7ff-de7ee88ebab4',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '16d0099a-be70-418d-be70-888a08672a6b',
    ),
  );
  $terms[] = array(
    'name' => 'Campagne de Plouay',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0fda1573-6c23-4aee-b28e-734bf7279884',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'barrière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '0fe850b2-dfc9-4a7c-bc71-b4bbf52ddbc5',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7eb22f0c-8fc7-4ffa-a825-4b10ebc82b89',
    ),
  );
  $terms[] = array(
    'name' => 'La presquîle de Crozon - Secteurs de Saint Nic et de
Telgruc-sur-mer (UP 2 / 2C)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1043004b-f142-441c-bc51-e5eb39d64236',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Côte et arrière-pays de Penthièvre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '112fd7ad-4f8e-4de8-89eb-45e831bc6ae2',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'piste cyclable',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '119f5bc3-562f-4f40-ad24-ddd1507eae84',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'parcs et jardins privés',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '1220da2e-cf81-446e-818e-da158e11811f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '85e05d35-54f8-4bc4-b8ae-3be8cc38f2b2',
    ),
  );
  $terms[] = array(
    'name' => 'haie résidentielle',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '12c3ebec-c10c-4f58-b5d2-bdb3a93db93a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'Franche-Comté',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '12c71358-a7d4-4cd9-b71c-993cb7d293ab',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'mine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '13b5b01b-f4eb-47dd-9c29-5b7294a073e4',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - La cuvette de Brennilis (UP8 -8C)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '13eeb969-a2e3-4490-a57a-52b407f1aa0b',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Hauteurs des Marches de Bretagne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1415c4dd-5448-4ae4-b2d7-c652e4eb7c82',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'espace public',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '14935704-92d4-4e1b-af72-42a82763b109',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Le versant sud des monts d’Arrée (UP8 -8F)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1658aa5b-1c61-42fb-80d4-571464b80d88',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'faune',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '16d0099a-be70-418d-be70-888a08672a6b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b778f035-e052-48d4-b8d2-1bbd7a4b788b',
    ),
  );
  $terms[] = array(
    'name' => 'Mesures compensatoires (Mares, Boisement, Zones Humides)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '171eddf4-5d79-4be2-9229-610ff2d7c3c9',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Herbus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '177f8477-1f6b-4048-9c81-b4f64931d3f1',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Rhône-Alpes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '17b85c47-611e-4138-ad06-1ff0dd4d25a1',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Saint-Malo et le Clos-Poulet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '18860ff6-bb5e-459f-b9a2-78f5e4a2adfc',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'groupe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '18d52c90-92ae-4ed0-9a34-ab187ba1c737',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a84ffd5f-d7c7-46f8-ab1d-ed97ad19d42d',
    ),
  );
  $terms[] = array(
    'name' => 'trottoir',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '1919ef1a-391d-45e0-8227-d943897c9446',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'gare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1927d34e-7031-43f9-87bd-acb20615465e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    ),
  );
  $terms[] = array(
    'name' => 'château d’eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1967edcc-12fa-4793-be1a-cf2ae85a2289',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0c5391ed-4e2c-4f29-9e5a-3bfd37a5764f',
    ),
  );
  $terms[] = array(
    'name' => 'maison isolée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '1a3b775a-f1dd-404c-adce-5503c57d19cd',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'La rivière de Noyalo',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1c48646b-f578-4cc3-a8a5-6ad698d6f4c3',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'étang',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1d597741-e6b2-4f74-9fc3-36d6ddcfd0f7',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'Marais littoraux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1d6b5e5e-0a25-4802-a12b-a7c636cde648',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Le plateau de Menez Meur (UP8 -8A)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1dbc28b0-83d4-437b-a846-84e6d789ec4b',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Vallée de la Vilaine de Rennes à Langon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1ddce55a-f81f-4d5b-9726-5453b6aeaa68',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'culture maraîchère',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '1e240400-41c2-45c8-92e1-f4d1f4a667fd',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Travaux et Aménagements en lien avec la LGV (Mur anti-bruit, Dépôts, Aménagement Paysager, PGF, Rescindements…)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1ee973c2-dc5b-4a6e-b438-3ecca4458a88',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'lisière / limites',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => '1f089521-1229-45b6-9f55-b9e809e2771d',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'climat',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '1f332291-8ea9-4181-898b-638f58e324c1',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Quiberon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '205796d9-6ee7-4e85-806a-0833449d4de1',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'banc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2086acad-89a2-4ec4-b48c-794f977d0721',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7eb22f0c-8fc7-4ffa-a825-4b10ebc82b89',
    ),
  );
  $terms[] = array(
    'name' => 'Vannes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '20ddd328-1270-4b86-b26d-f693a6b0f63a',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Ria d\'Etel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '228aced0-87f2-4b1a-bc36-6164922905ae',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'végétation ornementale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '22a7a770-2571-418e-a2ff-7080920253e2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '85e05d35-54f8-4bc4-b8ae-3be8cc38f2b2',
    ),
  );
  $terms[] = array(
    'name' => 'passage à niveau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '23cf621d-6428-4c4c-a8d7-61c780c7958d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    ),
  );
  $terms[] = array(
    'name' => 'marais',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2430ecdb-9abd-44f8-8899-bcdbc763a6e0',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    ),
  );
  $terms[] = array(
    'name' => 'Rennes et ses environs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '247f6c32-3df0-4e14-a905-0df72ff7836c',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'exploitation agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 18,
    'uuid' => '24eb6d33-5dbf-49d6-b97a-f0dd4ef5b259',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'jachère',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '252de0f1-2e68-4515-918b-b186fb504075',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'hôtel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '273cc036-9a69-4441-8bd5-27797127b581',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'Campagne de Guidel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '27c83a32-3947-4dda-8943-93a3436215ab',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'végétation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 35,
    'uuid' => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'Cadre',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '28ebba9f-5c66-4da4-a10f-854dd35169aa',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'Vallée de la Rance Maritime',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2958580d-62ed-4f51-bddd-476430e25c29',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'camping',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '29a59f93-e68a-4d0c-b2b1-d6f00d5fb3ec',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'transport en commun',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => '2ba15b77-5f25-4369-8e11-54e6c0aced3c',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'forêt mixte',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2d61e375-1614-47e8-994c-298b3516b348',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'animal d’élevage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2da02cea-2740-4eb7-9659-0d54e8d0a2d2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '16d0099a-be70-418d-be70-888a08672a6b',
    ),
  );
  $terms[] = array(
    'name' => 'immeuble de grande hauteur',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '2da4bcec-6dc3-4df5-911c-03c7144a0126',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e355e1fd-a135-4272-a947-c5857306dff2',
    ),
  );
  $terms[] = array(
    'name' => 'Démantèlement de la centrale de Brennilis',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2e03a74a-f1f8-4e06-b866-774b25755ec2',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'base de loisirs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '2e4b2626-e05b-4a0c-96a8-1a47a53ecd01',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'zone piétonnière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '2fa11713-4859-4309-aad3-6dd7d4fda111',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'raz de marée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '2fdd3a85-782e-454e-9de8-525ff27ba23b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'Canal de jonction',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3010f5ec-6fe3-4d18-adc3-feaa3dde0dc9',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Bassin de Fougères',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '30c2c712-5bf2-4084-8b1a-40735b68670b',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'infrastructures aériennes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3107c25b-70a4-4c39-86cd-9fe0bda3dcbc',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de Guéméné',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '31bb0d82-1579-4b56-9262-2d40d710b331',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Entrée du golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '31c64b54-c2fa-495c-bc3c-bdcea449e86a',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'édifice',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 19,
    'uuid' => '3232e3e8-64b5-403b-a2ce-910da4663f26',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Les pôles urbains',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '328a8d2c-760b-4be5-99d7-3ec38284369b',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Plaine de Pluvigner',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '329f37ec-c368-4511-b6c5-3f51e4f61539',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'terrain de jeux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '32ba6162-1ec2-4575-b19d-89e4860c9f77',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Monts de Lanvaux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '32d135a6-050c-4a05-bb9e-40f140bd91a2',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'muret',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '33d6d2b7-0a50-48e1-9031-433b45c1cc8a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'Lorraine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '33fa827f-1481-4839-896d-d98723686023',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'décharge',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3489071b-e571-4915-b3a1-0acb6f3e642f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'parcs et jardins publics',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '3494e8db-4f52-4ef8-b460-19b3305fe42d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '85e05d35-54f8-4bc4-b8ae-3be8cc38f2b2',
    ),
  );
  $terms[] = array(
    'name' => 'drain/irrigation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '34ac1107-f13c-4ddc-9b62-3335f908273b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de l\'Yvel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '34b4841a-c153-480a-b4c2-9f94ffc50314',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'ornementale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '34fa0d70-cc94-46af-b94d-ebd785239d42',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'lampadaire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '353ad7c8-9115-4df9-8577-8a4dd36c07be',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7eb22f0c-8fc7-4ffa-a825-4b10ebc82b89',
    ),
  );
  $terms[] = array(
    'name' => 'rivière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '361d59d4-7a71-4429-9fe6-ce818ce72e10',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'Morlaix',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '367e39c6-725b-4c13-8492-d1da4761cb46',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'Plateau du Coglais',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '36c89c8e-14d2-47f0-af08-9ea335a820a2',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'piscine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '376a0f90-6b6c-44ef-bf6d-681a772c0091',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0c5391ed-4e2c-4f29-9e5a-3bfd37a5764f',
    ),
  );
  $terms[] = array(
    'name' => 'ensemble résidentiel urbain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '377ba522-a971-4c2f-8e41-5c9aeb8beced',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e355e1fd-a135-4272-a947-c5857306dff2',
    ),
  );
  $terms[] = array(
    'name' => 'Test typo paysage',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '379f8627-e6eb-4b02-b684-7287515d322e',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'La presqu\'île de Rhuys',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37dc3fef-5045-4536-8c19-f489d0772b19',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'entreprise',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => '38b8465d-a9ac-46ea-aff2-a5f3a4d305fd',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Quimper',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '395501bc-88a4-463a-902f-e296f68337d6',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'Plaines du Meu et de la Flume',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3996ad8e-7349-4b14-9029-4c6db1fae531',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'usine de traitement de l’eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3a756b29-f7f4-419b-aec4-0322d304888b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '0c5391ed-4e2c-4f29-9e5a-3bfd37a5764f',
    ),
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
    'name' => 'aire de mobile home',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3c08ad54-83f0-4675-91f1-49fe93471c1f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de l\'Evel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c09c2cc-e2af-45c4-bbaf-3d79b5ae94fb',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Alsace',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3c25cf58-9fb8-429d-b4d2-0d47e9eea776',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'sujet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 29,
    'uuid' => '3c364474-cfef-4986-9b42-3b0d1696205d',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
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
    'name' => 'Paysage littoral de la Baie de Saint-Brieuc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3f451e00-42ca-4a04-ae87-f2dd8a06cae9',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Plateau de Guéméné',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3fd3ec8f-6c6b-4511-a657-097d8f313bdb',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Vallée de la Laïta',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4049307f-c346-43ec-a096-4c592813d2de',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Dunes et plages de Gâvres à Plouharnel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4099a47e-84f4-48b7-a202-e639f889015f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'La rivière d\'Auray',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '411c7430-dcb4-491b-87eb-8c984135c89e',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Presqu\'île de Rhuys',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41226534-71b7-49b4-8a10-649bcb6c24c6',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Cap Sizun',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4246ad8f-584b-42bc-b2a5-7c5d1b9b5b20',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Estuaires de la rade de Brest',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4295e40d-b6fd-494d-bcc5-5d3d35addb1f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Cultures de légumes sur plaines',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '42a892eb-323a-4a2e-a8ec-d124b29b5332',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'route (2 voies) voiture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '43392031-152a-4886-821a-531054e353df',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
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
    'name' => 'friche agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '43e11330-4237-4cf3-aa37-747f607e3388',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    ),
  );
  $terms[] = array(
    'name' => 'Belle-ïle, Houat et Hoedic',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4506f874-0cb1-4d06-9ef3-5f9c08f4f0bc',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'réseaux ferroviaire et aérien',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'Infrastructure routière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4635f332-af1f-4b4b-8fbe-bfa5e5eb8271',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'mobilier urbain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 20,
    'uuid' => '4640a0f1-5bc6-48b2-ad43-f80b15f00d99',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Bassin de Pleine-Fougères',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '472e6bf5-6de1-4fe3-8675-4c9e9ee53209',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'casino',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '4803d9f4-ab5b-4054-a391-703c89c7c9b3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
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
    'name' => 'parc de stationnement',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => '49806bea-de20-404f-a0f7-971c2490c5bf',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'forêt de feuillus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '49b22706-0a87-4beb-8bcc-72eafd9b1968',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'Campagne de Languidic',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '49e0bf07-af7e-4ed2-aded-4d67fba75ee1',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Côte et arrière-pays du Goëlo',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4be2c63b-6aa7-4fd8-a681-d5de13e6e456',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'entreprise',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '4d011b82-45b1-401e-9829-a4cb52caed95',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'Urbanisation du littoral',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4d1b5917-5b2b-4955-8ef7-3c24337145ed',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Intégration paysagère de la ligne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4d36abe5-5b80-4e64-a843-0f14d98c80ba',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'silo',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '4e22d937-8219-4ef3-9806-02ec9cd9fd01',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'réseau hertzien',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 25,
    'uuid' => '4e4b4714-b4d9-47e5-93e5-fa78ff198c46',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'prairie complantée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '4e6cf274-3a3c-4a04-a31f-9eab4f4799ed',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Vallée du Blavet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4eb4a96a-f854-478c-8173-138c5efe1547',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Ile de Groix',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f643c94-edc2-4a9c-8e29-95cccdaf5899',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Midi-Pyrénées',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4f81ee68-3f8f-4608-b694-4d0850097a94',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Agriculteurs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '503c989a-f3fc-4fc2-bbf5-94840a7fbd74',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'Saint-Brieuc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '50c4afdd-cb24-41d1-b6fb-8cfb05d7b9ef',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'Haie agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '50cb1dda-d657-4029-bfbf-119c6495546b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'Sillon du Tarun et de la Claye',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '511fd2ff-bb3f-422b-95fc-ca99647af15e',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Le Menez Hom (UP4)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '525dbef4-d395-4bc6-a00e-8a79643713b8',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'place',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '52cc56c2-841d-4336-a928-f496cc739692',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Bâtiments agricoles',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5428b4bb-ab7f-4522-944c-057d8bfc3cd6',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Ouvriers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '54dd4756-3458-47df-8a67-5622e1e7ee65',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'Camaret',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '55a77d21-15ca-45b8-a090-e2d4f1a1fc8b',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
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
    'name' => 'réseau routier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'Dynamique des paysages (paysages agricoles)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '570cfbc2-1528-48f3-9b00-08c240c5a5d9',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Les marches de l’Arrée (UP9)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5710b6e1-1651-4262-b573-25fc97cc8c42',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Zones humides - cours d\'eau - plans d\'eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '57d048b6-ba50-4389-8c19-bdf1a78a1191',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'étendue',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'df576522-9218-4c59-8087-ebd4430223aa',
    ),
  );
  $terms[] = array(
    'name' => 'Construction d’un ouvrage d’art (Pont de Terenez)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5839cdc5-eb8a-4893-a5bb-8197bdd13751',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Les chaos et la forêt de Huelgoat (UP8 -8G)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58a13acb-b5fb-4f38-9847-a9dc74df80d9',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'réseau hertzien',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '599370f8-124c-40c6-92d3-2e95405528dd',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'Artisans, commerçant et chef d\'entreprise',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5a145957-38c2-4c32-ba11-00af5a880f93',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'stagnante',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '5a70e908-a436-48b6-b127-e726339343cc',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'loisir / tourisme',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage urbain, périurbain, centre ville',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5b8ce81b-b11d-4178-9bf6-612b3e3236f7',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'La vallée de l’Aulne - L’Aulne maritime (UP5 - 5B)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c3198c6-729b-4e37-a23f-9dd5a7913acd',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Périurbain et bourg',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c87e9e9-7308-465b-88b9-6b8fed4d0e5a',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'La campagne des rus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5cd5f4a6-097a-4e10-9299-4dc9a97313f5',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Envasement des estuaires',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5de43cbc-d1cd-43ec-a874-4dc0c2fcf53c',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'peupleraies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '60927e3b-b56d-4515-90c7-312e9d8de83f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Crêtes de Saint-Just',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61003513-8929-4b85-84fd-8ebc7a444b78',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'éolienne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '612f3169-b488-4e6a-92d9-ade6f8e380b3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'Urbanisme',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61b8fa57-6175-4de8-b976-1dd3758e3dbd',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Canal d\'Ille et Rance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61fcbdba-4ae4-4a01-8c7e-47480ca4b22c',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Plaine de Muzillac',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62150395-34e4-4afc-b9eb-d635c94639ff',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Collines de Bécherel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62675b0d-7e63-4388-9e3c-ca8b8897fd9e',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Dynamique agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62754128-3ecf-40c6-8f83-236859c1dee0',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'lac',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62ce65eb-73cb-43a7-950c-094ce56443b5',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'inondation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '62e55c53-c63f-46ab-ae9f-67902ed83825',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'Pays de la Loire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '63c91fe5-bd7c-4f77-adc6-046bf7cead12',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Guyane',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '64a1950b-92c6-4ad1-9a8f-ace0ac093d32',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'barrage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '64d4f3ad-1b48-41ff-9314-b2575fc8a4fb',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'patrimonial',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => '65359b47-1238-48d1-99ea-17c0f02b3b38',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Mer et estran du Mont Saint-Michel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66c6d505-7b94-4879-a467-6339ced98fdf',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Martinique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66f6d0c2-94de-4356-8dc2-53aa8f39db8c',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Crêtes de Saint Nolff',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6727a796-eb4c-483f-9e9f-b898319453e1',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'petit patrimoine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '678512ec-2c85-455a-a40e-c6056e74267d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'Plateaux avec talus ou haies basses',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6923f6ff-0231-4cbf-b341-17ba4704a969',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'arbre isolé',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6adae617-2d1b-452a-a146-e60d1b06b21e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '85e05d35-54f8-4bc4-b8ae-3be8cc38f2b2',
    ),
  );
  $terms[] = array(
    'name' => 'Techniciens, Agents de maîtrise et autres professions intermédiaies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c30a0be-47f8-4973-a28c-1447a7ad1f85',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'forêt',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    ),
  );
  $terms[] = array(
    'name' => 'sentier littoral',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '6d327662-341b-45d7-a67d-35cc59a7eeeb',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c38faa0e-6a56-486e-b014-56ebe025f32e',
    ),
  );
  $terms[] = array(
    'name' => 'réservoir d’eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '6dbcd945-92cf-41d4-81d2-fdb4ee67aac9',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
  );
  $terms[] = array(
    'name' => 'incendie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '6df33fea-1c07-4e11-8eeb-fd9d43a250aa',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'Marais de Dol',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6eb64a0f-fb8d-4ff5-99b8-270b75d76849',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Développement des infrastructures linéaires',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6ebd58c2-c3d5-4611-a61c-1488eadaab2e',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Employés',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7008f763-aab6-4716-9ad3-9db8f2844046',
    'vocabulary_machine_name' => 'popp_tax_sociopro',
  );
  $terms[] = array(
    'name' => 'humain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 30,
    'uuid' => '706ba978-4175-4f48-82d4-4bb357a14215',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Célibataire sans enfant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7088aed8-3561-4628-b5c8-04192195d5b6',
    'vocabulary_machine_name' => 'popp_tax_family_struc',
  );
  $terms[] = array(
    'name' => 'Presqu\'île de Crozon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '70fc2e3b-ecc1-407b-a68a-a356d40e14de',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'golf',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '728831fc-9d7a-44ba-937c-785e6a5246ee',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'Massif de Paimpont-Brocéliande',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72889c96-6bfe-4d25-9031-bd978d234354',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Urbanisme : entrée de bourg, publicité',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7344f3a4-99f1-4fef-abb1-88c4b58f9788',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Arrière-pays bocager',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '739de564-010d-40bc-a4ab-2cee4b14ea36',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Centre-bourg',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '73d0e55b-22fb-4fd7-927c-703b1592b575',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'forêt de conifère',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '73ed4486-ce92-427f-a445-3909023f4b7e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'Pôle de Lamballe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '747707b8-580f-4ab4-ae30-d44050d78f6d',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Urbain dense',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '757423a1-ebb3-4922-8f21-d021ff33e6d4',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'infrastructures et réseaux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 145,
    'uuid' => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'fossé',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '759e9683-5bf5-4a62-87bf-8ed7bb827b33',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'Île-de-France',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '75a59bd1-d8b4-4dc7-9c59-bfbe15950c9b',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'ripisylve',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '7633625a-3231-4a4d-9089-571191da621e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'voie de bus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '76615a96-fe33-4e8d-b593-cfdf6b6b7a1e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'chemin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '77293b5d-de59-428a-9f00-27a42bb50080',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c38faa0e-6a56-486e-b014-56ebe025f32e',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage rural, naturel, de forêt',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '77bf7e85-26bd-4c06-b950-84286ef6ac03',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'prairie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7934644d-498f-4b4e-9972-ffa683ade504',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Champagne-Ardenne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '79e78b4a-642f-4d83-b5f6-e3763a0168c8',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Bassin de Châteaulin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7adf8a88-8970-43d9-81bb-5b5804e4073a',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Côte d\'Emeraude, du Frémur à la Rance',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7afd1ab0-f63a-44bd-96c4-6464cae00328',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'antenne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7b2f0a64-0aa8-42a1-a531-a97cc7b42504',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '599370f8-124c-40c6-92d3-2e95405528dd',
    ),
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
    'name' => 'Marais d\'eau douce et zones humides',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7cb75c36-56be-4458-8e40-44a069e2dfdc',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'mobilier urbain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '7eb22f0c-8fc7-4ffa-a825-4b10ebc82b89',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'Cornouaille littorale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '80c99793-d053-45fb-9878-beb0043f1638',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'publicité',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '80d0fc7f-0fb1-483f-a021-6956fd20c2af',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Centre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '80df4fba-eb0c-4a35-97e5-8b8e2e3fee15',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Couple sans enfant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '819f1915-02e9-4ff8-a0aa-8f25905aed47',
    'vocabulary_machine_name' => 'popp_tax_family_struc',
  );
  $terms[] = array(
    'name' => 'Plateaux avec paysages ouverts et bocage relictuel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8229a9a4-9d57-4acd-a916-1fe399ae3fa2',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Évolution des systèmes dunaires',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '828e3eb2-b978-4c1b-9cea-aa62731c8150',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'signalétique de sentier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '82bedc02-e81e-459f-871a-efd9d33085ca',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c38faa0e-6a56-486e-b014-56ebe025f32e',
    ),
  );
  $terms[] = array(
    'name' => 'SCOT du Pays de Saint-Brieuc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '830ab708-b653-43c0-b0b6-67c08f21e8e5',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Léon légumier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '831d83b2-0f30-42b0-811c-1c5198c496f0',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'écluse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8325b4ad-0cd8-4340-8df7-444a9b082fce',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'Marches de l\'Arrée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8371a777-f43c-4c3b-8d33-7e63f28a0f2f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'édifice militaire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '848d4e88-388e-4344-92f8-057ac338c5c9',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'Provence-Alpes-Côte d\'Azur',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84c62ca4-6a83-4212-b718-1b2c780d823b',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'édifice religieux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '84e0ef04-78de-4b5c-9952-e94a216b6282',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
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
    'name' => 'ornementale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '85e05d35-54f8-4bc4-b8ae-3be8cc38f2b2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    ),
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Les plateaux de la Feuillée et de Berrien (UP8 -8E)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '863f453a-f698-4fc7-949e-f6654b80faf8',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Le bassin central du Golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '869317ed-141b-411d-948a-f30c80d27700',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
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
    'name' => 'maison individuelle',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '87923fea-a555-44b4-8896-9fd3661375f2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e355e1fd-a135-4272-a947-c5857306dff2',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage de montagne',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '87ae90e5-6d89-4e8d-8cd9-b472eafca0f8',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Photo',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '886acb0c-3e12-467e-ae14-e1f49262eab1',
    'vocabulary_machine_name' => 'popp_tax_content_type',
  );
  $terms[] = array(
    'name' => 'Lannion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '88a1bbff-7763-4b9e-9f3f-4387e6f8e985',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'Rennes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '893adbd6-f182-43b0-bad1-931b70c57ba4',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'pont',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '8940492e-0b17-41d6-aee7-da8d344688ff',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'infrastructures aériennes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 24,
    'uuid' => '8a245115-b062-451f-815e-d9c6c9637637',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Famille monoparentale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8b3175e7-ec89-41fb-8c08-eda719252db8',
    'vocabulary_machine_name' => 'popp_tax_family_struc',
  );
  $terms[] = array(
    'name' => 'rond point',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '8c1a2db2-100b-4c1d-ba7a-9cf823360ba3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'versants',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '8c4393ba-36f9-46b8-a434-c6a6bcef6c03',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'Vallée du Couesnon de Saint-Marc à Pontorson',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d0748f3-4ee9-4893-a7e0-f04f7c664bd9',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Dunes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8d0b9fe9-cdfd-4ca5-bd8e-9c9977ef317c',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Exploitation agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8ef11188-d566-4d0d-9904-7fac0abae942',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'méthanisation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '8f56faf7-df26-4aed-905f-46b36f24e846',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'chantier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '8faf63f7-3c23-4c65-ba47-ff25e93ed099',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'Évolution des landes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8fe4b477-be04-438e-9cf4-f41b53185eac',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'alignement d’arbres',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8febe6d1-29ce-4d70-8e51-a55e988ac6ca',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'intersection',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => '907bc371-44ed-4f9c-b32e-e3fd9575d343',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Plaines avec bocage à ragosse déstructuré',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '908da3b6-a0c3-49a6-b773-97e4ef29b7af',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'étendue',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9220bc39-b270-46e8-8ed6-260824d4bfb4',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'tourbière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '924c2c47-67fc-4913-8b3b-380ed7493870',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    ),
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
    'name' => 'cours d’eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'df576522-9218-4c59-8087-ebd4430223aa',
    ),
  );
  $terms[] = array(
    'name' => 'pylône',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '93202937-6297-4733-92e6-1938dd9b16c4',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '3107c25b-70a4-4c39-86cd-9fe0bda3dcbc',
    ),
  );
  $terms[] = array(
    'name' => 'équipement public',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '93323b53-ff59-4b81-bac3-1a9cb5386602',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'tunnel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '93f247c7-f7ff-4bc0-8495-99498bd23e28',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'infrastructure sportive',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '95ca620e-5320-42ab-9815-7570a21941e5',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'sablière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '96a552f5-9433-4b55-b349-eeb8ab82258a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'Valon de Saint-Thual',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '982f7e7d-f4fa-43b0-8862-58ef4be61a26',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
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
    'name' => 'voie de tramway',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '98d47cbe-2374-435c-8de9-63fe24574c12',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Basse-Normandie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98ef8f6a-c811-4e9d-9971-b02319ef2a3f',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
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
    'name' => 'Plateau de Plumelec',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9ba377fb-3e98-4fb5-8782-3f295a0489ea',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Friches et landes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9ba89f27-04e8-45ff-af0f-204acff01026',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'habitat',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 16,
    'uuid' => '9bf9c1b9-6ea9-4d88-85c1-18e351bbeddb',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'fosse à lisier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '9cf0db00-c9c4-448e-b5ea-853973750607',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'friche',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9fb71c1e-68a8-44aa-a4bf-db0db409907b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    ),
  );
  $terms[] = array(
    'name' => 'Les estuaires de la rade de Brest - Secteur de l’Hôpital Camfrout',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a086555d-bbf7-44da-92bc-f05872c74b6a',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'cimetière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'a0c101f4-7737-4687-ad7c-e06b1f18f2b4',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Les horizons',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a0c61512-013b-45b1-bc4e-8897bfc8ee21',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Aquitaine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a2309e90-a6ad-41a2-8d2e-050755ee6d4a',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Paysage de littoral, paysages d’îles',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a24aa85e-7aee-486d-af21-60d5e2bc1c69',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'lande rase',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a2ca34a8-9ffb-4723-8bac-aed9dbe03ccb',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    ),
  );
  $terms[] = array(
    'name' => 'individus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a2ecf55c-c89b-49c8-8e1a-43f2889f567b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a84ffd5f-d7c7-46f8-ab1d-ed97ad19d42d',
    ),
  );
  $terms[] = array(
    'name' => 'Vallée de la Vilaine de Langon à Redon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a3327ab7-e913-439b-b434-13664ec7c36f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'eau continentale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a37d5f5b-1d95-49cd-ac31-c429c0acf992',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'faune',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 31,
    'uuid' => 'a3d64892-357b-4650-970b-c7e0038abd98',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Poitou-Charentes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a468f590-2073-442f-818f-5aa78f0116f9',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'fontaine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'a47f0c6d-af74-4a9b-817a-7dde7a3f6f6f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'Trame verte',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a4ba8afc-949e-4c3e-9d08-2463b1535a42',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'magasin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'a6f364ee-31db-463e-ba06-bf3a6f5671a6',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'culture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'a7091aea-7bf7-4bc8-a9bd-1b7dfb49ad44',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'exploitation agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'bureau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'a81e2589-318c-4fce-8b88-57b763b105b1',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'humain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a84ffd5f-d7c7-46f8-ab1d-ed97ad19d42d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b778f035-e052-48d4-b8d2-1bbd7a4b788b',
    ),
  );
  $terms[] = array(
    'name' => 'Vallée de la Vilaine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a95dd016-d42d-4324-bf59-6bdf7997cff7',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'culture fruitière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'aab1f300-5be8-4887-8396-69331f22bf2f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Les balcons du golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab1f21c6-bbbb-47c6-820f-d507e9c2f904',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Typologie et évolution du bocage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'acb7fb27-d351-4f43-b448-de54d4129e6f',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'infrastructures et réseaux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 22,
    'uuid' => 'ad2529bc-facf-42bc-ad4b-665e283be98d',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
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
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Pratiques agricoles',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ae284647-ba85-45eb-8239-5fe5055a2313',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'voie ferrée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'aedc3313-74ea-4577-ac82-24877610bd7b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    ),
  );
  $terms[] = array(
    'name' => 'Forêt à dominante de feuillus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'afbfce68-1e3a-48c7-aa86-0976dcf31775',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'centre commercial',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'aff7a385-0fe3-41e1-af78-852cd4f1ed63',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'Le Faou (UP3 / 3B)"',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b00a0818-edab-41f0-bf34-e8baf529be8a',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Cornouaille Fouesnantaise',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b0f7965e-753c-4249-83a4-79680abb2cb2',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Golfe du Morbihan',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b10845e2-8712-4a65-aad2-dc5b8a4cdf3c',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'friches',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'b10e5f28-1d95-4263-91f4-13b03b0268a9',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    ),
  );
  $terms[] = array(
    'name' => 'culture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    ),
  );
  $terms[] = array(
    'name' => 'aire de covoiturage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'b3764b4e-a940-4696-9a2b-122a66567b81',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Habiter le Golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3814401-8ed5-4d87-a12a-552832357162',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Infrastructures routières',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b3a147ed-7440-47cd-a3ed-e4b19f375aaf',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'ferme',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b4e43391-dc8a-4580-a367-1e7739d4aa68',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'énergie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 23,
    'uuid' => 'b52d0e3c-ff72-47f2-bce1-6355509bed91',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'bois',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'b5677fd9-243c-4bdb-9092-f72753bd6f09',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'taillis',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b6b34142-694e-4c8f-8faa-daf0ae122242',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '6c5241b2-fb5f-444e-a0a4-982e4ce2fbc3',
    ),
  );
  $terms[] = array(
    'name' => 'animal sauvage',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b6dd3452-7824-4c6e-8238-e71e27751f07',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '16d0099a-be70-418d-be70-888a08672a6b',
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
    'name' => 'Plaine de Saint Dolay (Miteau)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b6f37472-7f94-43f6-8cdd-ba0b867189a2',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'sujet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 146,
    'uuid' => 'b778f035-e052-48d4-b8d2-1bbd7a4b788b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'Plaine de Janzé-La Guerche de Bretagne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b8bd4b64-1fe9-49da-8dd2-ec832a376584',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
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
    'name' => 'Crêtes de Bain de Bretagne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ba18a059-37b1-47af-a48e-859453499382',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Côte de Damgan à Pénétin, estuaire de la Vilaine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bac69ca0-19cf-44eb-9545-5d7888dbad64',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Campagne de l\'Aff',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bb8aaa11-1d34-4d80-a608-2c49d3590742',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Sillon de l\'Arz',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bbd24c3c-9357-4fb1-a3da-e69863bd07df',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'fossés',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'bd839681-42d4-4f86-92bd-e37ad02fbb3d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    ),
  );
  $terms[] = array(
    'name' => 'Brest',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bdb08fd2-1724-4233-8fa9-6d7bed89efac',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'La Réunion',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'be0b5532-920b-48b3-87fa-50a21761f1cc',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Cultures de légumes sur plateaux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'be6c2b52-c701-449f-8e7f-6fc2eaeb3773',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Rivière d\'Auray',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bec92891-00d7-4f38-9493-3b71b45869a6',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Paysage boisé et de bosquets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bfd56c70-203f-4183-a161-4948ddf9941f',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'zone humide',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'c0fc0a80-8452-4c3b-8df6-541b00b8786d',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    ),
  );
  $terms[] = array(
    'name' => 'Les estuaires de la rade de Brest - Secteur de Logonna Daoulas (UP3 / 3A)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c120a1d0-cb9a-45d6-a5db-810b3af9b9bd',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'moulin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c277124a-2ce1-4c2e-a6a2-e424922f36c5',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'Côtes d\'Armor (itinéraire 5 de l\'OPNP)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c2f87fbd-2eec-4ab3-a81f-94a145bd2256',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'bâtiment d’élevage (porcherie, poulailler…)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c2fae6bf-d7c5-4ee3-bc82-97fe9269d0c2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'viaduc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'c33f8624-9245-4662-b56c-5dd92e54ac48',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    ),
  );
  $terms[] = array(
    'name' => 'ligne électrique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c3544224-4d21-4be8-bc78-fe70fac6b892',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '3107c25b-70a4-4c39-86cd-9fe0bda3dcbc',
    ),
  );
  $terms[] = array(
    'name' => 'potagers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c36dc64a-a6c3-4890-b21f-ac5900e174f6',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'chemins',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'c38faa0e-6a56-486e-b014-56ebe025f32e',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'canal',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'c3f1bd67-8892-4ebe-a038-82bfa4e3d2b3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '92a54bee-29ac-4ff9-9352-6590e5a51e67',
    ),
  );
  $terms[] = array(
    'name' => 'chemins',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 28,
    'uuid' => 'c4a84f3a-8536-43a7-97f1-1d7fdfcd51f1',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Le patrimoine',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c4f2cff2-08a8-4b13-a9be-4b442a56cb93',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'La vallée de l’Aulne - Les collines de l’Aulne (UP5 - 5A)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c5040dc8-2d32-4c5e-bb39-86ab388d9f0d',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'édifice',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'sécheresse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'c5765ba0-0aea-4084-b06d-5d558ef9bc74',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'Cuvette de Porzay',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c6b5932d-4924-4607-b990-b64e22f50809',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Guerlédan et Quénécan',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c70f6f36-3814-41f5-9fe0-2ce447c9f097',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'rue',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'c72e2116-4045-4d7e-bee6-09a6729a5444',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Le toul de Saint Rivoal (UP8 -8B)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c7921757-58fd-4760-bf8c-bf5a19de2278',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'La campagne des transitions',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c906c527-7b10-4929-8d88-6fed14a9c718',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'parabole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'c9374827-772b-4a3a-845e-02b7d61dd847',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '599370f8-124c-40c6-92d3-2e95405528dd',
    ),
  );
  $terms[] = array(
    'name' => 'Landivisiau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c976298f-1e34-4e22-90ba-92b09473de91',
    'vocabulary_machine_name' => 'popp_towns',
    'field_insee_code' => array(),
  );
  $terms[] = array(
    'name' => 'aéroport',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'c9aceda3-5d0e-4603-bffa-98763cc31ea6',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '458e4f38-dd6a-4c7b-9b55-3488dabcfcb0',
    ),
  );
  $terms[] = array(
    'name' => 'Parcourir le Golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c9fbe210-d3be-4eea-bcbc-b8aea847014e',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Guadeloupe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ca7ecb27-eec9-429c-930b-92fa15b5edf0',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Paysage associé à la présence de l\'eau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cc1ad5c6-87e9-4803-baa2-cc151f815a63',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'panneau solaire (thermique et photovoltaïque)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'cc4ddd8d-ebda-495c-8a2b-c1e94f3a2937',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'Travailler dans le Golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ccfdeb4a-e74e-47a0-ad82-b63255d23b0d',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'cours d’eau',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'cd40755f-388d-4b88-ab6d-749f3ad8a1b5',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'mare',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'cee041d8-bcac-4736-b3c0-c72c515cb780',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    ),
  );
  $terms[] = array(
    'name' => 'Agglomération de Saint-Brieuc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cf2b67ef-0fdd-4cea-9530-205a19d46ac7',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'habitat urbain',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'cffaceef-595e-4d22-bc7b-420626da7abb',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e355e1fd-a135-4272-a947-c5857306dff2',
    ),
  );
  $terms[] = array(
    'name' => 'Auvergne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd02ce1b1-3289-4962-9d72-d98be76d03cd',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Massif de Saint-Broladre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0a94547-cc48-4e59-8ca2-7dc4714961f7',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Golfe du Morbihan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd1356cfe-bb45-469c-94d3-6c7594cfa344',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Dynamique sylvicole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd17456c8-385d-49e1-b895-555d1daa5bdc',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'bâti',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 144,
    'uuid' => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'PNR d\'Armorique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2785d85-b947-43c4-8e69-9fe4eb0b0844',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'stagnante',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'df576522-9218-4c59-8087-ebd4430223aa',
    ),
  );
  $terms[] = array(
    'name' => 'transformateur',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'd3366303-1a16-4a5f-a5c8-f0fb64e26f71',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '3107c25b-70a4-4c39-86cd-9fe0bda3dcbc',
    ),
  );
  $terms[] = array(
    'name' => 'Le bassin de Châteaulin - Les méandres de l’Aulne (UP6 - 6B)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd44a2cae-e212-451d-b0e1-5521f6e4c0e2',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Bassin de Lieuron Pipriac',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd6edcae4-4a0b-45da-86aa-b0ba07410593',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Monts d\'Arrée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7e93a4f-0fb2-439b-858d-38fd12ac1c63',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Picardie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd887d4ef-d09d-4a10-8eec-eb0202b09b85',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Dynamique des zones humides',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd9c2da84-2037-4655-8a98-921a09c329a0',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Les îles d’iroise (UP 1)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da2e741b-a5bb-41bb-bacd-6555ee830de7',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Plateau léonard',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da366f84-e9f6-4822-9339-7f2bfa270290',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Entrée de bourg',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da5fa830-6e9a-4806-ad2e-c7d593a37d06',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Bassin de la Noë-Blanche',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da89c764-4ccf-4b0c-829d-f3649e62f86f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'loisir / tourisme',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 21,
    'uuid' => 'da8e57fc-fc89-459c-b2e5-1f485b7fc124',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Les Monts d’Arrée - Les sommets des monts d’Arrée (UP8 -8D)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dafb540f-3e96-49ac-8d9f-f46c4795a0bf',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'La rivière de Pénerf',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'db0172b8-72da-4084-8181-a3aec6232e7d',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'œuvre d’art public',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'db4a6e9c-8953-4e6f-90f5-5f0d77ccfc72',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'Paysage littoral urbanisé',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'db97de5f-0018-4c6a-8a51-00eb47992697',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'végétation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'dbc69fae-afef-41cf-8db6-af8ba04ec2eb',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'gravière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'dcb37e90-20ee-4723-8b20-66942d371475',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'culture céréalière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'dcd5d574-afbc-4a80-811a-fcdf6e0d614b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'serre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'dd3f234a-4556-408b-abed-160ab87749bf',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'Presqu\'île de Quiberon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ddf72b15-35e5-45ca-a2d0-1273e65480b5',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Forêt à dominante de résineux',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'de1e2388-95ed-4c43-956f-d35d972979a8',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'carrière',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'de603b4d-b36a-4711-83af-cd163db82245',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'eau continentale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df576522-9218-4c59-8087-ebd4430223aa',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'forêt',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'dff7e866-c48a-434f-9416-2f39ac10581b',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Ouest Cornouaille',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e044c27e-f538-468a-8523-b58cda460939',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'hangar agricole',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e06d286d-7061-4b49-b420-c46043dd065f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'a7909a54-3145-47cd-85e6-6cd1c1f8c2bc',
    ),
  );
  $terms[] = array(
    'name' => 'patrimonial',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'Limousin',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e0eeca6c-f733-494a-890f-940be9413cc9',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'séisme',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'e1c9a60c-473b-41aa-b53a-461cfad1fc3f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'réseaux ferroviaire et aérien',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 26,
    'uuid' => 'e23ade81-f8e5-4db3-ad20-e83df696d0de',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'habitat',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e355e1fd-a135-4272-a947-c5857306dff2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd1b4f08f-900b-46a2-8d7d-2dbdaa5c1cb2',
    ),
  );
  $terms[] = array(
    'name' => 'monument',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'e4215f9b-aa4f-44fa-83d6-842e8780f51c',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'e0b5a561-784d-40ad-8e71-a5f3cbb4652b',
    ),
  );
  $terms[] = array(
    'name' => 'Plaine de Sainte Anne d\'Auray',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e4490076-40f3-4ba9-9a1e-6ad76da0f558',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'culture fourragère (dont maïs)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e56f5682-def6-48ee-a456-3222b2539b7f',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'b162ca09-7f8e-40e5-afee-f50a1197e0fa',
    ),
  );
  $terms[] = array(
    'name' => 'Le fond du Golfe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e5c76c83-1fb3-4243-83bc-5063489cb362',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
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
    'name' => 'Couple avec enfant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e68d7bdb-2b30-4079-9698-f7c20fc3fb18',
    'vocabulary_machine_name' => 'popp_tax_family_struc',
  );
  $terms[] = array(
    'name' => 'Le bassin de Châteaulin - Le secteur de Pleyben (UP6 - 6A)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e715b393-e3b7-4cd5-9b8e-ead698545b6b',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'prairie humide',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'e721eba6-f973-4870-978a-18f861d62a0b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'd27c13e0-0701-477c-a2af-19c192a6b7d7',
    ),
  );
  $terms[] = array(
    'name' => 'Habitat diffus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e73c7317-e5ec-4edf-a4c1-8851202ce899',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Enregistrement sonore',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e7569d6d-66aa-40ff-9959-52662aeaaa50',
    'vocabulary_machine_name' => 'popp_tax_content_type',
  );
  $terms[] = array(
    'name' => 'capteur solaire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'e8dc9b0c-ee40-4ab8-8e3c-e09a0fd40942',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'Implantation d’éoliennes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e9f187cc-0a48-4147-a869-02236fe385ab',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Collines de Saint-Aubin-d\'Aubigné',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea00b17b-e141-4730-b0b6-1a1dfa253ab2',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
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
    'name' => 'LGV Bretagne Pays de Loire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eba670ea-980e-4c7c-ae61-092a055fbcb3',
    'vocabulary_machine_name' => 'popp_tax_thepopp',
    'field_popp_opp_area' => array(),
    'field_popp_opp_valuation' => array(),
    'field_popp_opp_creation_year' => array(),
    'field_popp_opp_technicity' => array(),
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'lac artificiel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'ebae4016-b9ab-4144-8491-d8a4feef1bf9',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '580c92bd-c3a7-495a-ab9e-d37f6fd1ad31',
    ),
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
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Haute-Normandie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec5ac23a-42e0-4aa9-b731-ea6896bcf36e',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'La presquîle de Crozon - L’ouest de la presqu’île (UP 2 / 2A)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec681b61-a60f-4717-b493-16a6b326cdf3',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Côte et rade de Lorient',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ecf99e58-2acc-4637-b109-313b95ac7c6f',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'parking',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'ed68c1d1-74b5-42d2-8c4c-ffbc0832d998',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Le littoral atlantique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ede38dc1-2848-447b-85aa-1b85ffbad920',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => '4 voies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ee184dd7-1a4c-4abe-8ffa-8420b9a70aaf',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'caravanning',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'ee29b629-a971-416e-8d38-7787fbf8fa09',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5aef4aea-a3a7-417a-8e4a-41210ab91dfc',
    ),
  );
  $terms[] = array(
    'name' => 'centrale électrique',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ee69ce1d-906a-4e27-ac6e-75817fef41ae',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'réseau routier',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 27,
    'uuid' => 'eece7d42-7afb-46ac-87d8-4167a45d2e8f',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'La presquîle de Crozon - Secteur de Lanvéoc Poulmic (UP 2 / 2B)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eed22596-c872-42b2-ac8d-85a4cf9c645b',
    'vocabulary_machine_name' => 'popp_thematic_local_axes',
  );
  $terms[] = array(
    'name' => 'Montagnes Noires',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eee82a46-9220-4a78-abf6-5410d7d05acc',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Aulne maritime',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eeecd0cd-bf2b-4b29-969c-b2df36e1ed6e',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'lisière / limites',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'ef241639-d941-4a47-a928-93039757806c',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '27d2c55b-19f6-4f3e-a99c-b9245d54f6e8',
    ),
  );
  $terms[] = array(
    'name' => 'Mer, lacs, cours d\'eau, estran',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ef5f36dc-500e-40ab-bf0f-c8c8581bd305',
    'vocabulary_machine_name' => 'landscape_set',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Plateau de Gourin',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'efb28fb9-a555-4473-8c1c-97136708521a',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Impacts des mesures agro-environnementales',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f21752d8-cd81-4b15-a06d-0f5e4f367753',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'Golfe du Morbihan',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f2525a7a-2b4a-46ba-9f19-687c717a0cc0',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'équipement culturel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'f2ed9482-5852-419b-96ce-e97489d3fd96',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'c5740d46-255e-4727-b8c4-97068d8cf2e7',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de Vitré',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f33d5537-c3a4-48cd-a10b-71bb4f6162ab',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'bâti',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => 'f3bdd58b-fe5f-4e7c-872f-d354eca7596c',
    'vocabulary_machine_name' => 'popp_nonreq_thesaurus',
  );
  $terms[] = array(
    'name' => 'Paysage de vallée',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f3ffa0ee-edc1-4c95-959d-18dfdd8ef2a5',
    'vocabulary_machine_name' => 'landscape_typologies',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'talus',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'f45539e7-228b-4324-b859-a9b8eaaf345a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'ef241639-d941-4a47-a928-93039757806c',
    ),
  );
  $terms[] = array(
    'name' => 'La végétation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f5fbd8b1-8abe-4022-a103-8a8ed33513d6',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  $terms[] = array(
    'name' => 'signalisation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 18,
    'uuid' => 'f60f2c67-129d-4625-b7e0-6996bed1bd72',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'énergie',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '7593d2a1-fa78-4148-8f4b-3b1767fe0c9f',
    ),
  );
  $terms[] = array(
    'name' => 'Bretagne',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f96a73a0-4aca-427d-a7e9-4ab103db60bb',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'phénomène',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fd4cefcf-9a93-4260-8a48-565db787020b',
    ),
  );
  $terms[] = array(
    'name' => 'place de stationnement',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 16,
    'uuid' => 'fca743d2-86aa-4286-b82f-2cd1000ba7d3',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '5644a468-78cd-4f11-a5cf-ab028d4ae7a9',
    ),
  );
  $terms[] = array(
    'name' => 'Sillon du Loc\'h et de l\'Arz',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fcf698ac-8cdf-4ddc-827f-80f67a197eaa',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'climat',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 27,
    'uuid' => 'fd4cefcf-9a93-4260-8a48-565db787020b',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
  );
  $terms[] = array(
    'name' => 'site industriel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fd873191-9358-4167-83d2-504ba3584590',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => '4d011b82-45b1-401e-9829-a4cb52caed95',
    ),
  );
  $terms[] = array(
    'name' => 'Nord-Pas-de-Calais',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fdeab5a8-bef6-461b-b474-44b89a45f503',
    'vocabulary_machine_name' => 'region',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Collines de Guichen',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fe18205f-d1c4-479d-b87f-eed377eb1b99',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'centrale nucléaire',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'fe694aee-b90f-4ea0-8dfd-0629996529a2',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'f642e3ae-ced5-4dee-87b6-73a50cb2c62a',
    ),
  );
  $terms[] = array(
    'name' => 'Massif de Saint-Pierre-de-Plesguen',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fe76be82-a396-4565-8f96-2e1f814d1f8a',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'tempête (vent)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'fe7d629f-10e6-47ae-b676-8db06696852a',
    'vocabulary_machine_name' => 'popp_tax_thesaurus',
    'parent' => array(
      0 => 'fb29885c-5420-4a7d-b096-59c6c2403b54',
    ),
  );
  $terms[] = array(
    'name' => 'Plateau de Questembert',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fe98bf34-f14f-46cd-afe5-53b2a86c8540',
    'vocabulary_machine_name' => 'landscape_units',
    'field_regional_code' => array(),
  );
  $terms[] = array(
    'name' => 'Superstructures',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff0dce51-0ee6-440e-b26b-e5f327b00933',
    'vocabulary_machine_name' => 'popp_thematic_axes',
  );
  return $terms;
}
