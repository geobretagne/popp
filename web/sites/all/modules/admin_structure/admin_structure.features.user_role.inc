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

  // Exported role: Administrateur.
  $roles['Administrateur'] = array(
    'name' => 'Administrateur',
    'weight' => 3,
  );

  return $roles;
}
