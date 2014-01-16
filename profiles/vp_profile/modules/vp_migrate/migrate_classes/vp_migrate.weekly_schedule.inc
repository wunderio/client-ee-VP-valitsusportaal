<?php

/**
 * @file
 * Migrate classes.
 */

/**
 * Import Weekly Schedule Day nodes.
 */
class WeeklyScheduleDayNodeMigration extends Migration {
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
      MigrateDestinationNode::getKeySchema()
    );

    // Query.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_weekly_schedules', 'ws');

    $query->condition('ws.ministry', array('EL', 'PEAMINISTER'), 'IN');

    $query->fields('ws', array('id', 'schedule', 'ministry', 'week_start'));

    $query->addExpression('DATE_FORMAT(ws.week_start, \'%Y-%m-%d\')', 'week_day');
    $query->addExpression('UNIX_TIMESTAMP(ws.date_time)', 'created');

    $query->distinct();

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('weekly_schedule_day', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'week_start');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'created');
    $this->addFieldMapping('field_simplenews_term')->defaultValue('Imported');
    $this->addFieldMapping('field_simplenews_term:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('language')->defaultValue('et');
    $this->addFieldMapping('body', 'schedule');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('field_weekly_schedule_source')->defaultValue('Valitsus');
    $this->addFieldMapping('field_weekly_schedule_source:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_weekly_schedule_date', 'week_day');
    $this->addFieldMapping(NULL, 'ministry');
  }
  public function prepareRow($current_row) {
  
    if ($current_row->ministry === 'PEAMINISTER') {
      $current_row->schedule = '<b>Peaminister</b><br /><br />'.$current_row->schedule;
    }
    
    $current_row->week_day = $current_row->week_day.' +0000';
    
    return TRUE;
  }
}

/**
 * Import Weekly Schedule Day nodes that are in English.
 */
class WeeklyScheduleDayEnNodeMigration extends Migration {
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

    $this->description = t('Migrate weekly schedule day nodes that are in English!');

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
      MigrateDestinationNode::getKeySchema()
    );

    // Query.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_news', 'ws');
    $query->join('rk_news_categories_rel', 'c_rel', 'ws.id = c_rel.news_id');
    $query->join('rk_news_categories', 'c', 'c.id = c_rel.category_id');

    $query->condition('c_rel.category_id', 18);
    $query->condition('ws.date_added', '2006-09-25', '>');

    $query->fields('ws', array('id', 'lang', 'cont'));

    $query->addExpression("CONCAT(ws.descr, ws.cont)", 'body');
    $query->addExpression('DATE_FORMAT(ws.date_added, \'%d.%m.%Y\')', 'title');
    $query->addExpression('DATE_FORMAT(ws.date_added, \'%Y-%m-%d\')', 'week_day');
    $query->addExpression('UNIX_TIMESTAMP(ws.date_added)', 'created');

    $query->distinct();
    

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('weekly_schedule_day', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'created');
    $this->addFieldMapping('field_simplenews_term')->defaultValue('Imported');
    $this->addFieldMapping('field_simplenews_term:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('language', 'lang');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('field_weekly_schedule_source')->defaultValue('Valitsus');
    $this->addFieldMapping('field_weekly_schedule_source:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_weekly_schedule_date', 'week_day');
  }
  
  public function prepareRow($current_row) {
    //Fix week day.
    $week_day = $current_row->week_day;
    if (strtotime($week_day) > strtotime('2011-12-08')) {
      $week_day = date('Y-m-d', strtotime('+5 days', strtotime($week_day)));
    }
    $current_row->week_day = $week_day.' +0000';
        
    return TRUE;
  }
}
