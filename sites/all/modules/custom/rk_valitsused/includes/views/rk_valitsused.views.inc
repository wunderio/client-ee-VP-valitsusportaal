<?php

/**
 * Implementation of hook_views_data().
 * Let views know about rk_government, rk_minister etc.
 */
function rk_valitsused_views_data() {

  $data = array(
        'rk_government' => array(
			'table' => array(
							'group' => t('Riigikantselei'),
							//'base' => array('field' => array('vid', 'mid', 'iid', 'eid'), 'title' => t('Government Join'), 'help' => t('Republic of Estonia governments'), 'weight' => -15),
							'base' => array('field' => array('id'), 'title' => t('Government Info'), 'help' => t('Republic of Estonia governments'), 'weight' => -15),
                            /*'join' => array(
								'rk_valitsus' => array('left_field' => 'vid', 'field' => 'vid'),
								'rk_minister' => array('left_field' => 'mid', 'field' => 'mid'),
								'rk_isik' => array('left_field' => 'iid', 'field' => 'iid'),
								'rk_erakond' => array('left_field' => 'eid', 'field' => 'eid'),
							),*/
			),
			'id' => array(
                            'title' => t('Valitsus ID'), 
                            'help' => t('Government\'s primary key from rk_government'), 
							'relationship' => array(
							  'base' => 'rk_minister_government', // The name of the table to join with.
							  'base field' => 'government_id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_government and rk_minister_government'),
							  'title' => t('rk_government and rk_minister_government'),
							  'help' => t('Relationship for tables rk_government and rk_minister_government.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'government_number' => array(
                            'title' => t('Government Number'), 
                            'help' => t('Government # 1, 2, 3... Found in rk_government.'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),
			'rule_time_type_code' => array(
							    'title' => t('Rule Time Type Code'),
							    'help' => t('1st republic, exile, 2nd republic. Found in rk_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'ruled_start_date' => array(
							    'title' => t('Government Start'),
							    'help' => t('Format in db is 2013-12-31. Found in rk_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'ruled_end_date' => array(
							    'title' => t('Government End'),
							    'help' => t('Format in db is 2013-12-31. Found in rk_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
            ),
			'ruled_days' => array(
                                'title' => t('Government Number Days in Power'), 
                                'help' => t('Numeric field, non-calculated. From rk_government'), 
							    'field' => array(
							      'handler' => 'views_handler_field_numeric', 
							      'click sortable' => TRUE,
							    ), 
							    'filter' => array(
							      'handler' => 'views_handler_filter_numeric',
							    ), 
							    'sort' => array(
							      'handler' => 'views_handler_sort',
							    ),
            ),
			'description' => array(
							    'title' => t('Description'),
							    'help' => t('Free text. Generally used to list which political parties formed government. Found in rk_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field_markup', 
								  'format' => 'full_html', 
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
            ),
			'cabinet_img_fid' => array(
							    'title' => t('FID of government pic'),
								'help' => t('Primary key from file_managed table.'),
							    'field' => array(
							      'handler' => 'views_handler_field_numeric', 
							      'click sortable' => TRUE,
							    ), 
							    'filter' => array(
							      'handler' => 'views_handler_filter_numeric',
							    ), 
							    'sort' => array(
							      'handler' => 'views_handler_sort',
							    ),
			),	            
			'is_active' => array(
                            'title' => t('Active Government'), 
                            'help' => t('Active flag. Yes or no.'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),            
        ),

		'rk_minister' => array(
			'table' => array(
							  'group' => t('Riigikantselei'),
							  'base' => array('field' => 'id', 'title' => t('Minister'), 'help' => t('The individual that filled roll of minister.'), 'weight' => -5),
			),
			'id' => array(
                            'title' => t('Minister ID'), 
                            'help' => t('Primary key. rk_minister'), 
						    'relationship' => array(
							  'base' => 'rk_minister_government', // The name of the table to join with.
							  'base field' => 'minister_id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_minister and rk_minister_government'),
							  'title' => t('rk_minister and rk_minister_government'),
							  'help' => t(''),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),
			'first_name' => array(
							    'title' => t('First Name'),
								'help' => t('Politician\'s first name. rk_minister'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'last_name' => array(
							    'title' => t('Last Name'),
								'help' => t('Politician\'s last name. rk_minister'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'person_sex_type_code' => array(
							    'title' => t('Gender'),
								'help' => t('Male or Female. rk_minister'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'description' => array(
							    'title' => t('Blurb'),
								'help' => t('Blurb about the politician. rk_minister'),
								'field' => array(
								  'handler' => 'views_handler_field_markup', 
								  'format' => 'full_html', 
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'minister_img_fid' => array(
							    'title' => t('FID of minister pic'),
								'help' => t('Primary key from file_managed table.'),
							    'field' => array(
							      'handler' => 'views_handler_field_numeric', 
							      'click sortable' => TRUE,
							    ), 
							    'filter' => array(
							      'handler' => 'views_handler_filter_numeric',
							    ), 
							    'sort' => array(
							      'handler' => 'views_handler_sort',
							    ),
			),	
			'image_file_name' => array(
							    'title' => t('Picture'),
								'help' => t('Name of picture file. rk_minister'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'created_by' => array(
                                'title' => t('Created By Admin'), 
                                'help' => t('Numeric field, non-calculated. From rk_minister'), 
							    'field' => array(
							      'handler' => 'views_handler_field_numeric', 
							      'click sortable' => TRUE,
							    ), 
							    'filter' => array(
							      'handler' => 'views_handler_filter_numeric',
							    ), 
							    'sort' => array(
							      'handler' => 'views_handler_sort',
							    ),
            ),
			'is_active' => array(
                            'title' => t('Active Minister'), 
                            'help' => t('Active flag. Yes or no.'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),             
        ), // End rk_minister

		'rk_minister_government' => array(
			'table' => array(
							'group' => t('Riigikantselei'),
							//'base' => array('field' => array('vid', 'mid', 'iid', 'eid'), 'title' => t('Government Join'), 'help' => t('Republic of Estonia governments'), 'weight' => -15),
							'base' => array('field' => array('id'), 'title' => t('rk_minister_government'), 'help' => t('Join table rk_minister and rk_government'), 'weight' => -15),
                            /*'join' => array(
								'rk_valitsus' => array('left_field' => 'vid', 'field' => 'vid'),
								'rk_minister' => array('left_field' => 'mid', 'field' => 'mid'),
								'rk_isik' => array('left_field' => 'iid', 'field' => 'iid'),
								'rk_erakond' => array('left_field' => 'eid', 'field' => 'eid'),
							),*/
			),
			'government_id' => array(
                            'title' => t('Valitsus ID'), 
                            'help' => t('Government\'s primary key used as foreign key in rk_minister_government.'), 
							'relationship' => array(
							  'base' => 'rk_government', // The name of the table to join with.
							  'base field' => 'id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_government and rk_minister_government'),
							  'title' => t('rk_government and rk_minister_government'),
							  'help' => t('Relationship for tables rk_government and rk_minister_government.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'minister_id' => array(
                           'title' => t('Minister ID'), 
                           'help' => t('Minister\'s primary key used as foreign key in rk_minister_government.'), 
							'relationship' => array(
							  'base' => 'rk_minister', // The name of the table to join with.
							  'base field' => 'id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_minister and rk_minister_government'),
							  'title' => t('rk_minister and rk_minister_government'),
							  'help' => t('Relationship for tables rk_minister and rk_minister_government.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'position_type_code' => array(
							    'title' => t('Ministerial Role'),
								'help' => t('Which minister was it? rk_minister_government'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'ruled_start_date' => array(
							    'title' => t('Individual Start'),
							    'help' => t('Format in db is 2013-12-31. Found in rk_minister_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'ruled_end_date' => array(
							    'title' => t('Individual End'),
							    'help' => t('Format in db is 2013-12-31. Found in rk_minister_government.'),
							    'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
            ),
			'ruled_days' => array(
                                'title' => t('Individual Number Days in Power'), 
                                'help' => t('Numeric field, non-calculated. From rk_minister_government'), 
							    'field' => array(
							      'handler' => 'views_handler_field_numeric', 
							      'click sortable' => TRUE,
							    ), 
							    'filter' => array(
							      'handler' => 'views_handler_filter_numeric',
							    ), 
							    'sort' => array(
							      'handler' => 'views_handler_sort',
							    ),
            ),
			'party_name' => array(
							    'title' => t('Party Name'),
								'help' => t('Which political party this minister belonged to. rk_minister_government'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'is_head_of_government' => array(
                            'title' => t('Is Head of Government'), 
                            'help' => t('Whether or not the head of government. rk_minister_government'),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'display_title' => array(
							    'title' => t('Minister\'s Display Title'),
								'help' => t('Label to display to end user. rk_minister_government'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			),
			'display_indiv_name' => array(
							    'title' => t('Minister\'s Name Display Override.'),
								'help' => t('Individual name display override. rk_minister_government'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
			), 
			'is_active' => array(
                            'title' => t('Active Minister Service Period'), 
                            'help' => t('Active flag. Yes or no.'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),
            'weight' => array(
                            'title' => t('Weight for ordering.'), 
                            'help' => t('Heavier numbers are further down the list.'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),
            ),
		), // End rk_minister_government

        'rk_duty' => array(
			'table' => array(
							'group' => t('Riigikantselei'),							
							'base' => array('field' => array('id'), 'title' => t('Minister duty info'), 'help' => t('Republic of Estonia governments'), 'weight' => -18),
			),
			'id' => array(
                            'title' => t('Duty ID'), 
                            'help' => t('Duty\'s primary key from rk_duty'), 
							'relationship' => array(
							  'base' => 'rk_duty_minister', // The name of the table to join with.
							  'base field' => 'duty_id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_duty and rk_duty_minister'),
							  'title' => t('rk_duty and rk_duty_minister'),
							  'help' => t('Relationship for tables rk_duty and rk_duty_minister.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'duty' => array(
							    'title' => t('Duty'),
							    'help' => t('Free text. Concrete duty being performed, peaminister, kaitseminister etc. Found in rk_duty.'),
								'field' => array(
								  'handler' => 'views_handler_field', 
								  'click sortable' => TRUE, // This is use by the table display plugin.
								), 
								'sort' => array(
								  'handler' => 'views_handler_sort',
								), 
								'filter' => array(
								  'handler' => 'views_handler_filter_string',
								), 
								'argument' => array(
								  'handler' => 'views_handler_argument_string',
								),
            ),
        ), // End rk_duty.
        'rk_duty_minister' => array(
			'table' => array(
							'group' => t('Riigikantselei'),							
							'base' => array('field' => array('id'), 'title' => t('Join table minister duty.'), 'help' => t('Republic of Estonia governments'), 'weight' => -20),
			),
			'id' => array(
                            'title' => t('Duty Minister ID'), 
                            'help' => t('Primary key for rk_duty_minister table'), 
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
            ),
			'minister_id' => array(
                           'title' => t('Minister ID'), 
                           'help' => t('Minister\'s primary key used as foreign key in rk_minister_duty.'), 
							'relationship' => array(
							  'base' => 'rk_minister', // The name of the table to join with.
							  'base field' => 'id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_minister and rk_duty_minister'),
							  'title' => t('rk_minister and rk_duty_minister'),
							  'help' => t('Relationship for tables rk_minister and rk_duty_minister.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),							
            ),
			'government_id' => array(
                            'title' => t('Valitsus ID'), 
                            'help' => t('Government\'s primary key used as foreign key in rk_duty_minister.'), 
							'relationship' => array(
							  'base' => 'rk_government', // The name of the table to join with.
							  'base field' => 'id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_government and rk_duty_minister'),
							  'title' => t('rk_government and rk_duty_minister'),
							  'help' => t('Relationship for tables rk_government and rk_duty_minister.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),							
            ),
			'duty_id' => array(
                            'title' => t('Duty ID'), 
                            'help' => t('Duty\'s primary key used as foreign key in rk_duty_minister.'), 
							'relationship' => array(
							  'base' => 'rk_duty', // The name of the table to join with.
							  'base field' => 'id', // The name of the field on the joined table.
							  // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
							  'handler' => 'views_handler_relationship',
							  'label' => t('Join tables rk_duty_minister and rk_duty'),
							  'title' => t('rk_duty_minister and rk_duty'),
							  'help' => t('Relationship for tables rk_duty_minister rk_duty.'),
							),
							'field' => array(
							  'handler' => 'views_handler_field_numeric', 
							  'click sortable' => TRUE,
							), 
							'filter' => array(
							  'handler' => 'views_handler_filter_numeric',
							), 
							'sort' => array(
							  'handler' => 'views_handler_sort',
							),
							'argument' => array(
							  'handler' => 'views_handler_argument_numeric',
							),							
            ),
        ), // End rk_duty_minister.
  );

  return $data;

}