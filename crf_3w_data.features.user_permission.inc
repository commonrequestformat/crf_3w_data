<?php
/**
 * @file
 * crf_3w_data.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_3w_data_user_default_permissions() {
  $permissions = array();

  // Exported permission: create 3w_data content.
  $permissions['create 3w_data content'] = array(
    'name' => 'create 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any 3w_data content.
  $permissions['delete any 3w_data content'] = array(
    'name' => 'delete any 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own 3w_data content.
  $permissions['delete own 3w_data content'] = array(
    'name' => 'delete own 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any 3w_data content.
  $permissions['edit any 3w_data content'] = array(
    'name' => 'edit any 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own 3w_data content.
  $permissions['edit own 3w_data content'] = array(
    'name' => 'edit own 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished 3w_data content.
  $permissions['view any unpublished 3w_data content'] = array(
    'name' => 'view any unpublished 3w_data content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
