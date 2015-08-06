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

  // Exported role: Import de masse.
  $roles['Import de masse'] = array(
    'name' => 'Import de masse',
    'weight' => 2,
  );

  // Exported role: Root.
  $roles['Root'] = array(
    'name' => 'Root',
    'weight' => 4,
  );

  return $roles;
}
