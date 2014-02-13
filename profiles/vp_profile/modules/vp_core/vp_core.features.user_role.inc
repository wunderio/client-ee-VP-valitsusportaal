<?php
/**
 * @file
 * vp_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vp_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  return $roles;
}
