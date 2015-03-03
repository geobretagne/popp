<?php
/**
 * @file
 * popp_opp.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function popp_opp_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:opp:add user'
  $permissions['node:opp:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:administer group'
  $permissions['node:opp:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:approve and deny subscription'
  $permissions['node:opp:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:create opp_photo content'
  $permissions['node:opp:create opp_photo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:create supporting_structure content'
  $permissions['node:opp:create supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete any opp_photo content'
  $permissions['node:opp:delete any opp_photo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete any supporting_structure content'
  $permissions['node:opp:delete any supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete own opp_photo content'
  $permissions['node:opp:delete own opp_photo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete own supporting_structure content'
  $permissions['node:opp:delete own supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:manage members'
  $permissions['node:opp:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:manage permissions'
  $permissions['node:opp:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:manage roles'
  $permissions['node:opp:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:subscribe'
  $permissions['node:opp:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:opp:subscribe without approval'
  $permissions['node:opp:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:unsubscribe'
  $permissions['node:opp:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:update any opp_photo content'
  $permissions['node:opp:update any opp_photo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:update any supporting_structure content'
  $permissions['node:opp:update any supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:update group'
  $permissions['node:opp:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp:update own opp_photo content'
  $permissions['node:opp:update own opp_photo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:update own supporting_structure content'
  $permissions['node:opp:update own supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:add user'
  $permissions['node:opp_takepart:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:administer group'
  $permissions['node:opp_takepart:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve and deny subscription'
  $permissions['node:opp_takepart:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:create opp_photo content'
  $permissions['node:opp_takepart:create opp_photo content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:create supporting_structure content'
  $permissions['node:opp_takepart:create supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:delete any opp_photo content'
  $permissions['node:opp_takepart:delete any opp_photo content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete any supporting_structure content'
  $permissions['node:opp_takepart:delete any supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:delete own opp_photo content'
  $permissions['node:opp_takepart:delete own opp_photo content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete own supporting_structure content'
  $permissions['node:opp_takepart:delete own supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:manage members'
  $permissions['node:opp_takepart:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:manage permissions'
  $permissions['node:opp_takepart:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:manage roles'
  $permissions['node:opp_takepart:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:subscribe'
  $permissions['node:opp_takepart:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:subscribe without approval'
  $permissions['node:opp_takepart:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:unsubscribe'
  $permissions['node:opp_takepart:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update any opp_photo content'
  $permissions['node:opp_takepart:update any opp_photo content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update any supporting_structure content'
  $permissions['node:opp_takepart:update any supporting_structure content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:update group'
  $permissions['node:opp_takepart:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update own opp_photo content'
  $permissions['node:opp_takepart:update own opp_photo content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update own supporting_structure content'
  $permissions['node:opp_takepart:update own supporting_structure content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
