<?php
/**
 * @file
 * term_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function term_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'cat_gorie_socioprofessionnelle' => array(
      'name' => 'Catégorie socioprofessionnelle',
      'machine_name' => 'cat_gorie_socioprofessionnelle',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'droits' => array(
      'name' => 'Droits',
      'machine_name' => 'droits',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'format' => array(
      'name' => 'Format',
      'machine_name' => 'format',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'les_opp' => array(
      'name' => 'Les OPP',
      'machine_name' => 'les_opp',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'structure_familiale' => array(
      'name' => 'Structure familiale',
      'machine_name' => 'structure_familiale',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type_de_contenu' => array(
      'name' => 'Type de contenu',
      'machine_name' => 'type_de_contenu',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
