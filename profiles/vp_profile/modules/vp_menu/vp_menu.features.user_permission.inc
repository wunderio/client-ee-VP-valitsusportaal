<?php
/**
 * @file
 * vp_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'create vp_menu_dropdown_box content'.
  $permissions['create vp_menu_dropdown_box content'] = array(
    'name' => 'create vp_menu_dropdown_box content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vp_menu_dropdown_box content'.
  $permissions['delete any vp_menu_dropdown_box content'] = array(
    'name' => 'delete any vp_menu_dropdown_box content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vp_menu_dropdown_box content'.
  $permissions['delete own vp_menu_dropdown_box content'] = array(
    'name' => 'delete own vp_menu_dropdown_box content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vp_menu_dropdown_box content'.
  $permissions['edit any vp_menu_dropdown_box content'] = array(
    'name' => 'edit any vp_menu_dropdown_box content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vp_menu_dropdown_box content'.
  $permissions['edit own vp_menu_dropdown_box content'] = array(
    'name' => 'edit own vp_menu_dropdown_box content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
