<?php

/**
 * @file
 * Migrate classes.
 */

/**
 * Import RK Weekly Schedule Day nodes.
 */
class RKWeeklyScheduleDayNodeMigration extends Migration {
  public $forte_db = '';
  public $forte_user = '';
  public $forte_pass = '';
  public $forte_host = '';

  public function __construct() {
    parent::__construct();
    
    $this->forte_db = variable_get('vp_migrate_database', '');
    $this->forte_user = variable_get('vp_migrate_username', '');
    $this->forte_pass = variable_get('vp_migrate_password', '');
    $this->forte_host = variable_get('vp_migrate_host', '');

    //Set up other database
    Database::addConnectionInfo('forte', 'default', array(
      'driver' => 'mysql',
      'database' => $this->forte_db,
      'username' => $this->forte_user,
      'password' => $this->forte_pass,
      'host' => $this->forte_host,
    ));

    $this->description = t('Migrate weekly schedule day nodes!');

    // Unikaalne id forte baasist.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'length' => 11,
          'not null' => TRUE,
          'alias' => 'ws',
        ),
      ),
      MigrateDestinationNode::getKeySchema(
)    );

    // Query.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_weekly_schedules', 'ws');

    $query->condition('ws.ministry', array('RIIGIKANTSELEI'), 'IN');

    $query->fields('ws', array('id', 'schedule', 'week_start'));

    $query->addExpression('DATE_FORMAT(ws.created, \'%d.%m.%Y\')', 'title');
    $query->addExpression('UNIX_TIMESTAMP(ws.created)', 'created');
    $query->addExpression('UNIX_TIMESTAMP(ws.updated)', 'updated');

    $query->distinct();

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('weekly_schedule_day', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'updated');
    $this->addFieldMapping('field_simplenews_term')->defaultValue('Imported');
    $this->addFieldMapping('field_simplenews_term:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('language')->defaultValue('et');
    $this->addFieldMapping('body', 'schedule');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('field_weekly_schedule_source')->defaultValue('Riigikantselei');
    $this->addFieldMapping('field_weekly_schedule_source:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_weekly_schedule_date', 'week_start');
  }
}
