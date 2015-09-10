<?php
/**
 * @file
 * structure_front.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function structure_front_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc Register';
  $fe_block_boxes->format = 'editeur';
  $fe_block_boxes->machine_name = 'bloc_register';
  $fe_block_boxes->body = '<p>Hello, ceci est un test</p>';

  $export['bloc_register'] = $fe_block_boxes;

  return $export;
}
