<?php

/**
 * @file
 * Set migrate_api.
 */

/**
 * Implements hook_migrate_api().
 */
function vp_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(

      // VP
      'NewsNode' => array('class_name' => 'NewsNodeMigration'),

      'WeeklyScheduleDayNode' => array('class_name' => 'WeeklyScheduleDayNodeMigration'),
      'WeeklyScheduleDayEnNode' => array('class_name' => 'WeeklyScheduleDayEnNodeMigration'),

      'GalleryNode' => array('class_name' => 'GalleryNodeMigration'),

      // RK
      'RKNewsNode' => array('class_name' => 'RKNewsNodeMigration'),

      'RKWeeklyScheduleDayNode' => array('class_name' => 'RKWeeklyScheduleDayNodeMigration'),

    ),
  );
  return $api;
}
