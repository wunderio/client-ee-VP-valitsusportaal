<?php
/**
 * @file
 * vp_weekly_schedule.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_weekly_schedule_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear weekly_schedule feeds'.
  $permissions['clear weekly_schedule feeds'] = array(
    'name' => 'clear weekly_schedule feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create weekly_schedule_day content'.
  $permissions['create weekly_schedule_day content'] = array(
    'name' => 'create weekly_schedule_day content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any weekly_schedule_day content'.
  $permissions['delete any weekly_schedule_day content'] = array(
    'name' => 'delete any weekly_schedule_day content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own weekly_schedule_day content'.
  $permissions['delete own weekly_schedule_day content'] = array(
    'name' => 'delete own weekly_schedule_day content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any weekly_schedule_day content'.
  $permissions['edit any weekly_schedule_day content'] = array(
    'name' => 'edit any weekly_schedule_day content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own weekly_schedule_day content'.
  $permissions['edit own weekly_schedule_day content'] = array(
    'name' => 'edit own weekly_schedule_day content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import weekly_schedule feeds'.
  $permissions['import weekly_schedule feeds'] = array(
    'name' => 'import weekly_schedule feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper weekly_schedule'.
  $permissions['tamper weekly_schedule'] = array(
    'name' => 'tamper weekly_schedule',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock weekly_schedule feeds'.
  $permissions['unlock weekly_schedule feeds'] = array(
    'name' => 'unlock weekly_schedule feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
