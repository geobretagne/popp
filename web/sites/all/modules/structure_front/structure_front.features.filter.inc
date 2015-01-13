<?php
/**
 * @file
 * structure_front.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function structure_front_filter_default_formats() {
  $formats = array();

  // Exported format: Editeur.
  $formats['editeur'] = array(
    'format' => 'editeur',
    'name' => 'Editeur',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
