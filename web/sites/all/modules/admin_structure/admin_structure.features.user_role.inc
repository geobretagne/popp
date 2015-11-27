<?php
/**
 * @file
 * admin_structure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function admin_structure_user_default_roles() {
  $roles = array();

  // Exported role: Import de masse.
  $roles['Import de masse'] = array(
    'name' => 'Import de masse',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
