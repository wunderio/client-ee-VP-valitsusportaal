<?php
/**
 * @file
 * vp_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear video_gallery_import_from_youtube feeds'.
  $permissions['clear video_gallery_import_from_youtube feeds'] = array(
    'name' => 'clear video_gallery_import_from_youtube feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create youtube_video content'.
  $permissions['create youtube_video content'] = array(
    'name' => 'create youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any youtube_video content'.
  $permissions['delete any youtube_video content'] = array(
    'name' => 'delete any youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own youtube_video content'.
  $permissions['delete own youtube_video content'] = array(
    'name' => 'delete own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any youtube_video content'.
  $permissions['edit any youtube_video content'] = array(
    'name' => 'edit any youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own youtube_video content'.
  $permissions['edit own youtube_video content'] = array(
    'name' => 'edit own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import video_gallery_import_from_youtube feeds'.
  $permissions['import video_gallery_import_from_youtube feeds'] = array(
    'name' => 'import video_gallery_import_from_youtube feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper video_gallery_import_from_youtube'.
  $permissions['tamper video_gallery_import_from_youtube'] = array(
    'name' => 'tamper video_gallery_import_from_youtube',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock video_gallery_import_from_youtube feeds'.
  $permissions['unlock video_gallery_import_from_youtube feeds'] = array(
    'name' => 'unlock video_gallery_import_from_youtube feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
