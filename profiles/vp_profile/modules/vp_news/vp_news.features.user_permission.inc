<?php
/**
 * @file
 * vp_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer vp news'.
  $permissions['administer vp news'] = array(
    'name' => 'administer vp news',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'vp_news',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_types'.
  $permissions['delete terms in news_types'] = array(
    'name' => 'delete terms in news_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_types'.
  $permissions['edit terms in news_types'] = array(
    'name' => 'edit terms in news_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  return $permissions;
}
