<?php
/**
 * @file
 * vm_country_and_representations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vm_country_and_representations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_agency_type'
  $field_bases['field_agency_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_agency_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'aukonsul' => 'Aukonsul',
        'aupeakonsul' => 'Aupeakonsul',
        'suursaatkond' => 'Suursaatkond',
        'konsul' => 'Konsul',
        'peakonsul' => 'Peakonsul',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_area'
  $field_bases['field_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_area',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_country_code'
  $field_bases['field_country_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_code',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_e_mail'
  $field_bases['field_e_mail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_e_mail',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_embassy_name'
  $field_bases['field_embassy_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_embassy_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_estonian_embassy'
  $field_bases['field_estonian_embassy'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_estonian_embassy',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_flag'
  $field_bases['field_flag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_flag',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_foreign_embassy'
  $field_bases['field_foreign_embassy'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_foreign_embassy',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_link'
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_link_to_content'
  $field_bases['field_link_to_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link_to_content',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$entity_field[0][\'value\'] = url(\'node/\'.$entity->nid);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_map'
  $field_bases['field_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_map',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => 'global $language;

$countries = array(\'AF\' => \'Afghanistan\', \'AX\' => \'Aland Islands\', \'AL\' => \'Albania\', \'DZ\' => \'Algeria\', \'AS\' => \'American Samoa\', \'AD\' => \'Andorra\', \'AO\' => \'Angola\', \'AI\' => \'Anguilla\', \'AQ\' => \'Antarctica\', \'AG\' => \'Antigua And Barbuda\', \'AR\' => \'Argentina\', \'AM\' => \'Armenia\', \'AW\' => \'Aruba\', \'AU\' => \'Australia\', \'AT\' => \'Austria\', \'AZ\' => \'Azerbaijan\', \'BS\' => \'Bahamas\', \'BH\' => \'Bahrain\', \'BD\' => \'Bangladesh\', \'BB\' => \'Barbados\', \'BY\' => \'Belarus\', \'BE\' => \'Belgium\', \'BZ\' => \'Belize\', \'BJ\' => \'Benin\', \'BM\' => \'Bermuda\', \'BT\' => \'Bhutan\', \'BO\' => \'Bolivia\', \'BA\' => \'Bosnia And Herzegovina\', \'BW\' => \'Botswana\', \'BV\' => \'Bouvet Island\', \'BR\' => \'Brazil\', \'IO\' => \'British Indian Ocean Territory\', \'BN\' => \'Brunei Darussalam\', \'BG\' => \'Bulgaria\', \'BF\' => \'Burkina Faso\', \'BI\' => \'Burundi\', \'KH\' => \'Cambodia\', \'CM\' => \'Cameroon\', \'CA\' => \'Canada\', \'CV\' => \'Cape Verde\', \'KY\' => \'Cayman Islands\', \'CF\' => \'Central African Republic\', \'TD\' => \'Chad\', \'CL\' => \'Chile\', \'CN\' => \'China\', \'CX\' => \'Christmas Island\', \'CC\' => \'Cocos (Keeling) Islands\', \'CO\' => \'Colombia\', \'KM\' => \'Comoros\', \'CG\' => \'Congo\', \'CD\' => \'Congo, Democratic Republic\', \'CK\' => \'Cook Islands\', \'CR\' => \'Costa Rica\', \'CI\' => \'Cote D\\\'Ivoire\', \'HR\' => \'Croatia\', \'CU\' => \'Cuba\', \'CY\' => \'Cyprus\', \'CZ\' => \'Czech Republic\', \'DK\' => \'Denmark\', \'DJ\' => \'Djibouti\', \'DM\' => \'Dominica\', \'DO\' => \'Dominican Republic\', \'EC\' => \'Ecuador\', \'EG\' => \'Egypt\', \'SV\' => \'El Salvador\', \'GQ\' => \'Equatorial Guinea\', \'ER\' => \'Eritrea\', \'EE\' => \'Estonia\', \'ET\' => \'Ethiopia\', \'FK\' => \'Falkland Islands (Malvinas)\', \'FO\' => \'Faroe Islands\', \'FJ\' => \'Fiji\', \'FI\' => \'Finland\', \'FR\' => \'France\', \'GF\' => \'French Guiana\', \'PF\' => \'French Polynesia\', \'TF\' => \'French Southern Territories\', \'GA\' => \'Gabon\', \'GM\' => \'Gambia\', \'GE\' => \'Georgia\', \'DE\' => \'Germany\', \'GH\' => \'Ghana\', \'GI\' => \'Gibraltar\', \'GR\' => \'Greece\', \'GL\' => \'Greenland\', \'GD\' => \'Grenada\', \'GP\' => \'Guadeloupe\', \'GU\' => \'Guam\', \'GT\' => \'Guatemala\', \'GG\' => \'Guernsey\', \'GN\' => \'Guinea\', \'GW\' => \'Guinea-Bissau\', \'GY\' => \'Guyana\', \'HT\' => \'Haiti\', \'HM\' => \'Heard Island & Mcdonald Islands\', \'VA\' => \'Holy See (Vatican City State)\', \'HN\' => \'Honduras\', \'HK\' => \'Hong Kong\', \'HU\' => \'Hungary\', \'IS\' => \'Iceland\', \'IN\' => \'India\', \'ID\' => \'Indonesia\', \'IR\' => \'Iran, Islamic Republic Of\', \'IQ\' => \'Iraq\', \'IE\' => \'Ireland\', \'IM\' => \'Isle Of Man\', \'IL\' => \'Israel\', \'IT\' => \'Italy\', \'JM\' => \'Jamaica\', \'JP\' => \'Japan\', \'JE\' => \'Jersey\', \'JO\' => \'Jordan\', \'KZ\' => \'Kazakhstan\', \'KE\' => \'Kenya\', \'KI\' => \'Kiribati\', \'KR\' => \'Korea\', \'KW\' => \'Kuwait\', \'KG\' => \'Kyrgyzstan\', \'LA\' => \'Lao People\\\'s Democratic Republic\', \'LV\' => \'Latvia\', \'LB\' => \'Lebanon\', \'LS\' => \'Lesotho\', \'LR\' => \'Liberia\', \'LY\' => \'Libyan Arab Jamahiriya\', \'LI\' => \'Liechtenstein\', \'LT\' => \'Lithuania\', \'LU\' => \'Luxembourg\', \'MO\' => \'Macao\', \'MK\' => \'Macedonia\', \'MG\' => \'Madagascar\', \'MW\' => \'Malawi\', \'MY\' => \'Malaysia\', \'MV\' => \'Maldives\', \'ML\' => \'Mali\', \'MT\' => \'Malta\', \'MH\' => \'Marshall Islands\', \'MQ\' => \'Martinique\', \'MR\' => \'Mauritania\', \'MU\' => \'Mauritius\', \'YT\' => \'Mayotte\', \'MX\' => \'Mexico\', \'FM\' => \'Micronesia, Federated States Of\', \'MD\' => \'Moldova\', \'MC\' => \'Monaco\', \'MN\' => \'Mongolia\', \'ME\' => \'Montenegro\', \'MS\' => \'Montserrat\', \'MA\' => \'Morocco\', \'MZ\' => \'Mozambique\', \'MM\' => \'Myanmar\', \'NA\' => \'Namibia\', \'NR\' => \'Nauru\', \'NP\' => \'Nepal\', \'NL\' => \'Netherlands\', \'AN\' => \'Netherlands Antilles\', \'NC\' => \'New Caledonia\', \'NZ\' => \'New Zealand\', \'NI\' => \'Nicaragua\', \'NE\' => \'Niger\', \'NG\' => \'Nigeria\', \'NU\' => \'Niue\', \'NF\' => \'Norfolk Island\', \'MP\' => \'Northern Mariana Islands\', \'NO\' => \'Norway\', \'OM\' => \'Oman\', \'PK\' => \'Pakistan\', \'PW\' => \'Palau\', \'PS\' => \'Palestinian Territory, Occupied\', \'PA\' => \'Panama\', \'PG\' => \'Papua New Guinea\', \'PY\' => \'Paraguay\', \'PE\' => \'Peru\', \'PH\' => \'Philippines\', \'PN\' => \'Pitcairn\', \'PL\' => \'Poland\', \'PT\' => \'Portugal\', \'PR\' => \'Puerto Rico\', \'QA\' => \'Qatar\', \'RE\' => \'Reunion\', \'RO\' => \'Romania\', \'RU\' => \'Russian Federation\', \'RW\' => \'Rwanda\', \'BL\' => \'Saint Barthelemy\', \'SH\' => \'Saint Helena\', \'KN\' => \'Saint Kitts And Nevis\', \'LC\' => \'Saint Lucia\', \'MF\' => \'Saint Martin\', \'PM\' => \'Saint Pierre And Miquelon\', \'VC\' => \'Saint Vincent And Grenadines\', \'WS\' => \'Samoa\', \'SM\' => \'San Marino\', \'ST\' => \'Sao Tome And Principe\', \'SA\' => \'Saudi Arabia\', \'SN\' => \'Senegal\', \'RS\' => \'Serbia\', \'SC\' => \'Seychelles\', \'SL\' => \'Sierra Leone\', \'SG\' => \'Singapore\', \'SK\' => \'Slovakia\', \'SI\' => \'Slovenia\', \'SB\' => \'Solomon Islands\', \'SO\' => \'Somalia\', \'ZA\' => \'South Africa\', \'GS\' => \'South Georgia And Sandwich Isl.\', \'ES\' => \'Spain\', \'LK\' => \'Sri Lanka\', \'SD\' => \'Sudan\', \'SR\' => \'Suriname\', \'SJ\' => \'Svalbard And Jan Mayen\', \'SZ\' => \'Swaziland\', \'SE\' => \'Sweden\', \'CH\' => \'Switzerland\', \'SY\' => \'Syrian Arab Republic\', \'TW\' => \'Taiwan\', \'TJ\' => \'Tajikistan\', \'TZ\' => \'Tanzania\', \'TH\' => \'Thailand\', \'TL\' => \'Timor-Leste\', \'TG\' => \'Togo\', \'TK\' => \'Tokelau\', \'TO\' => \'Tonga\', \'TT\' => \'Trinidad And Tobago\', \'TN\' => \'Tunisia\', \'TR\' => \'Turkey\', \'TM\' => \'Turkmenistan\', \'TC\' => \'Turks And Caicos Islands\', \'TV\' => \'Tuvalu\', \'UG\' => \'Uganda\', \'UA\' => \'Ukraine\', \'AE\' => \'United Arab Emirates\', \'GB\' => \'United Kingdom\', \'US\' => \'United States\', \'UM\' => \'United States Outlying Islands\', \'UY\' => \'Uruguay\', \'UZ\' => \'Uzbekistan\', \'VU\' => \'Vanuatu\', \'VE\' => \'Venezuela\', \'VN\' => \'Viet Nam\', \'VG\' => \'Virgin Islands, British\', \'VI\' => \'Virgin Islands, U.S.\', \'WF\' => \'Wallis And Futuna\', \'EH\' => \'Western Sahara\', \'YE\' => \'Yemen\', \'ZM\' => \'Zambia\', \'ZW\' => \'Zimbabwe\');

$q = $countries[drupal_strtoupper($entity->field_country_code[\'und\'][0][\'value\'])];
if (empty($q)) $q = $entity->title;
$entity_field[0][\'value\'] = \'<iframe width="425" height="350" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.ee/maps?t=h&amp;f=q&amp;hl=\'.$language->language.\'&amp;q=\'.$q.\' country&amp;output=embed"></iframe>\';',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'longtext',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_population'
  $field_bases['field_population'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_population',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'bigint',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_bigint',
  );

  // Exported field_base: 'field_visa_free_destination'
  $field_bases['field_visa_free_destination'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_visa_free_destination',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_visa_free_to_estonia'
  $field_bases['field_visa_free_to_estonia'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_visa_free_to_estonia',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_visa_notes'
  $field_bases['field_visa_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_visa_notes',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_warning'
  $field_bases['field_warning'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_warning',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'roheline' => 'Roheline',
        'roh-kol' => 'Roheline-Kollane',
        'roh-ora' => 'Roheline-Oraanz',
        'roh-pun' => 'Roheline-Punane',
        'roh-mus' => 'Roheline-Must',
        'kollane' => 'Kollane',
        'kol-ora' => 'Kollane-Oraanz',
        'kol-pun' => 'Kollane-Punane',
        'kol-mus' => 'Kollane-Must',
        'oraanz' => 'Oraanz',
        'ora-pun' => 'Oraanz-Punane',
        'ora-mus' => 'Oraanz-Must',
        'punane' => 'Punane',
        'pun-mus' => 'Punane-Must',
        'must' => 'Must',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
