<?php
/**
 * @file
 * Documents API functions for hook_post_action module.
 */

/**
 * Gets called after an entity has been inserted/updated/deleted to database.
 *
 * @param $entity
 *   An entity object
 * @param string $entity
 *   An string containing entity type name
 * @param string $op
 *   An string containing the operating that's taking place (insert/update/delete)
 *
 * @see hook_entity_postinsert()
 * @see hook_entity_postupdate()
 * @see hook_entity_postdelete()
 * @ingroup entity_api_hooks
 */
function hook_entity_postsave($entity, $entity_type, $op) {
  list($id) = entity_extract_ids($entity_type, $entity);
  watchdog('hook_post_action_test', "The {$op}d entity {$entity_type} id is {$id} from " . __FUNCTION__);
}

/**
 * Gets called after an entity has been inserted to database.
 *
 * @param $entity
 *   An entity object
 * @param string $entity
 *   An string containing entity type name
 *
 * @see hook_entity_postsave()
 * @see hook_entity_postupdate()
 * @see hook_entity_postdelete()
 * @ingroup entity_api_hooks
 */
function hook_entity_postinsert($entity, $entity_type) {
  list($id) = entity_extract_ids($entity_type, $entity);
  watchdog('hook_post_action_test', "The inserted entity {$entity_type} id is {$id} from " . __FUNCTION__);
}

/**
 * Gets called after an entity has been updated in database.
 *
 * @param $entity
 *   An entity object
 * @param string $entity
 *   An string containing entity type name
 *
 * @see hook_entity_postsave()
 * @see hook_entity_postinsert()
 * @see hook_entity_postdelete()
 * @ingroup entity_api_hooks
 */
function hook_entity_postupdate($entity, $entity_type) {
  list($id) = entity_extract_ids($entity_type, $entity);
  watchdog('hook_post_action_test', "The updated entity {$entity_type} id is {$id} from " . __FUNCTION__);
}

/**
 * Gets called after an entity has been deleted from database.
 *
 * @param $entity
 *   An entity object
 * @param string $entity
 *   An string containing entity type name
 *
 * @see hook_entity_postsave()
 * @see hook_entity_postinsert()
 * @see hook_entity_postupdate()
 * @ingroup entity_api_hooks
 */
function hook_entity_postdelete($entity, $entity_type) {
  list($id) = entity_extract_ids($entity_type, $entity);
  watchdog('hook_post_action_test', "The deleted entity {$entity_type} id is {$id} from " . __FUNCTION__);
}

/**
 * Gets called after a node has been inserted/updated/deleted to database.
 *
 * @param $node
 *   A node object
 * @param string $op
 *   An string containing the operating that's taking place (insert/update/delete)
 *
 * @see hook_node_postinsert()
 * @see hook_node_postupdate()
 * @see hook_node_postdelete()
 * @ingroup node_api_hooks
 */
function hook_node_postsave($node, $op) {
  watchdog('hook_post_action_test', "The {$op}d node {$node->type} id is {$node->nid} from " . __FUNCTION__);
}

/**
 * Gets called after a node has been inserted to database.
 *
 * @param $node
 *   A node object
 *
 * @see hook_node_postsave()
 * @see hook_node_postupdate()
 * @see hook_node_postdelete()
 * @ingroup node_api_hooks
 */
function hook_node_postinsert($node) {
  watchdog('hook_post_action_test', "The inserted node {$node->type} id is {$node->nid} from " . __FUNCTION__);
}

/**
 * Gets called after a node has been updated to database.
 *
 * @param $node
 *   A node object
 *
 * @see hook_node_postsave()
 * @see hook_node_postinsert()
 * @see hook_node_postdelete()
 * @ingroup node_api_hooks
 */
function hook_node_postupdate($node) {
  watchdog('hook_post_action_test', "The updated node {$node->type} id is {$node->nid} from " . __FUNCTION__);
}

/**
 * Gets called after a node has been deleted from database.
 *
 * @param $node
 *   A node object
 *
 * @see hook_node_postsave()
 * @see hook_node_postinsert()
 * @see hook_node_postupdate()
 * @ingroup node_api_hooks
 */
function hook_node_postdelete($node) {
  watchdog('hook_post_action_test', "The deleted node {$node->type} id is {$node->nid} from " . __FUNCTION__);
}