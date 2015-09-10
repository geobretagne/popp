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
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:administer group'
  $permissions['node:opp:administer group'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:approve and deny subscription'
  $permissions['node:opp:approve and deny subscription'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:approve comment_node_opp'
  $permissions['node:opp:approve comment_node_opp'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:approve comment_node_opp_takepart'
  $permissions['node:opp:approve comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:approve comment_node_popp_photo_serie'
  $permissions['node:opp:approve comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:approve comment_node_popp_reference_document'
  $permissions['node:opp:approve comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:create popp_photo_serie content'
  $permissions['node:opp:create popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:create popp_reference_document content'
  $permissions['node:opp:create popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:delete any popp_photo_serie content'
  $permissions['node:opp:delete any popp_photo_serie content'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:delete any popp_reference_document content'
  $permissions['node:opp:delete any popp_reference_document content'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:delete comment_node_opp'
  $permissions['node:opp:delete comment_node_opp'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete comment_node_opp_takepart'
  $permissions['node:opp:delete comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:delete comment_node_popp_photo_serie'
  $permissions['node:opp:delete comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:delete comment_node_popp_reference_document'
  $permissions['node:opp:delete comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:delete own popp_photo_serie content'
  $permissions['node:opp:delete own popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:delete own popp_reference_document content'
  $permissions['node:opp:delete own popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:edit comment_node_opp'
  $permissions['node:opp:edit comment_node_opp'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:edit comment_node_opp_takepart'
  $permissions['node:opp:edit comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:edit comment_node_popp_photo_serie'
  $permissions['node:opp:edit comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:edit comment_node_popp_reference_document'
  $permissions['node:opp:edit comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:edit own comment_node_opp'
  $permissions['node:opp:edit own comment_node_opp'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:edit own comment_node_opp_takepart'
  $permissions['node:opp:edit own comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:edit own comment_node_popp_photo_serie'
  $permissions['node:opp:edit own comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:edit own comment_node_popp_reference_document'
  $permissions['node:opp:edit own comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:manage members'
  $permissions['node:opp:manage members'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:manage permissions'
  $permissions['node:opp:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:manage roles'
  $permissions['node:opp:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:post comment_node_opp'
  $permissions['node:opp:post comment_node_opp'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:post comment_node_opp_takepart'
  $permissions['node:opp:post comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:post comment_node_popp_photo_serie'
  $permissions['node:opp:post comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:post comment_node_popp_reference_document'
  $permissions['node:opp:post comment_node_popp_reference_document'] = array(
    'roles' => array(),
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
      'Fournisseur' => 'Fournisseur',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp:update any popp_photo_serie content'
  $permissions['node:opp:update any popp_photo_serie content'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:update any popp_reference_document content'
  $permissions['node:opp:update any popp_reference_document content'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:update group'
  $permissions['node:opp:update group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp:update own popp_photo_serie content'
  $permissions['node:opp:update own popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp:update own popp_reference_document content'
  $permissions['node:opp:update own popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:add user'
  $permissions['node:opp_takepart:add user'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:administer group'
  $permissions['node:opp_takepart:administer group'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve and deny subscription'
  $permissions['node:opp_takepart:approve and deny subscription'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve comment_node_opp'
  $permissions['node:opp_takepart:approve comment_node_opp'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve comment_node_opp_takepart'
  $permissions['node:opp_takepart:approve comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve comment_node_popp_photo_serie'
  $permissions['node:opp_takepart:approve comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:approve comment_node_popp_reference_document'
  $permissions['node:opp_takepart:approve comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:create popp_photo_serie content'
  $permissions['node:opp_takepart:create popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:create popp_reference_document content'
  $permissions['node:opp_takepart:create popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete any popp_photo_serie content'
  $permissions['node:opp_takepart:delete any popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete any popp_reference_document content'
  $permissions['node:opp_takepart:delete any popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete comment_node_opp'
  $permissions['node:opp_takepart:delete comment_node_opp'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete comment_node_opp_takepart'
  $permissions['node:opp_takepart:delete comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete comment_node_popp_photo_serie'
  $permissions['node:opp_takepart:delete comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete comment_node_popp_reference_document'
  $permissions['node:opp_takepart:delete comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:delete own popp_photo_serie content'
  $permissions['node:opp_takepart:delete own popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:delete own popp_reference_document content'
  $permissions['node:opp_takepart:delete own popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit comment_node_opp'
  $permissions['node:opp_takepart:edit comment_node_opp'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit comment_node_opp_takepart'
  $permissions['node:opp_takepart:edit comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit comment_node_popp_photo_serie'
  $permissions['node:opp_takepart:edit comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit comment_node_popp_reference_document'
  $permissions['node:opp_takepart:edit comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:edit own comment_node_opp'
  $permissions['node:opp_takepart:edit own comment_node_opp'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit own comment_node_opp_takepart'
  $permissions['node:opp_takepart:edit own comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit own comment_node_popp_photo_serie'
  $permissions['node:opp_takepart:edit own comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:edit own comment_node_popp_reference_document'
  $permissions['node:opp_takepart:edit own comment_node_popp_reference_document'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:manage members'
  $permissions['node:opp_takepart:manage members'] = array(
    'roles' => array(
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:manage permissions'
  $permissions['node:opp_takepart:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:manage roles'
  $permissions['node:opp_takepart:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:post comment_node_opp'
  $permissions['node:opp_takepart:post comment_node_opp'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:post comment_node_opp_takepart'
  $permissions['node:opp_takepart:post comment_node_opp_takepart'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:post comment_node_popp_photo_serie'
  $permissions['node:opp_takepart:post comment_node_popp_photo_serie'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:post comment_node_popp_reference_document'
  $permissions['node:opp_takepart:post comment_node_popp_reference_document'] = array(
    'roles' => array(),
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
      'Fournisseur' => 'Fournisseur',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update any popp_photo_serie content'
  $permissions['node:opp_takepart:update any popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update any popp_reference_document content'
  $permissions['node:opp_takepart:update any popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update group'
  $permissions['node:opp_takepart:update group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:opp_takepart:update own popp_photo_serie content'
  $permissions['node:opp_takepart:update own popp_photo_serie content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:opp_takepart:update own popp_reference_document content'
  $permissions['node:opp_takepart:update own popp_reference_document content'] = array(
    'roles' => array(
      'Fournisseur' => 'Fournisseur',
      'Gestionnaire' => 'Gestionnaire',
      'member' => 'member',
    ),
  );

  return $permissions;
}
