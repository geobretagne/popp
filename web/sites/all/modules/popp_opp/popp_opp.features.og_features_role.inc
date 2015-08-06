<?php
/**
 * @file
 * popp_opp.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function popp_opp_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:opp:Fournisseur'.
  $roles['node:opp:Fournisseur'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'opp',
    'name' => 'Fournisseur',
  );

  // Exported OG Role: 'node:opp:Gestionnaire'.
  $roles['node:opp:Gestionnaire'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'opp',
    'name' => 'Gestionnaire',
  );

  // Exported OG Role: 'node:opp_takepart:Fournisseur'.
  $roles['node:opp_takepart:Fournisseur'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'opp_takepart',
    'name' => 'Fournisseur',
  );

  // Exported OG Role: 'node:opp_takepart:Gestionnaire'.
  $roles['node:opp_takepart:Gestionnaire'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'opp_takepart',
    'name' => 'Gestionnaire',
  );

  return $roles;
}
