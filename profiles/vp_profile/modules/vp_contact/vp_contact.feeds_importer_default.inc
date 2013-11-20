<?php
/**
 * @file
 * vp_contact.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function vp_contact_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts';
  $feeds_importer->config = array(
    'name' => 'Contacts X-tee',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSOAPFetcher',
      'config' => array(
        'endpoint' => 'http://10.0.14.15/cgi-bin/consumer_proxy',
        'envelope' => '<SOAP-ENV:Envelope
	xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/"
	xmlns:SOAP-ENC="http://schemas.xmlsoap.org/soap/encoding/"
	xmlns:ns4="http://x-tee.riik.ee/xsd/xtee.xsd"
	xmlns:ns5="http://producers.rmviki.xtee.riik.ee/producer/rmviki"
	xmlns:xsd="http://www.w3.org/2001/XMLSchema"
	xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">
	<SOAP-ENV:Header>
		<ns4:asutus xsi:type="xsd:string">70006317</ns4:asutus>
		<ns4:andmekogu xsi:type="xsd:string">rmviki</ns4:andmekogu>
		<ns4:isikukood xsi:type="xsd:string">70006317</ns4:isikukood>
		<ns4:id xsi:type="xsd:string">7bcc6f0aa5d30725c26b196b28282c7fe0dadf06</ns4:id>
		<ns4:nimi xsi:type="xsd:string">rmviki.Z_EMPLOEES.v1</ns4:nimi>
	</SOAP-ENV:Header>
	<SOAP-ENV:Body>
		<ns5:Z_EMPLOEES>
			<keha>
				<COMPANYCODE>1101</COMPANYCODE>
				<DATE_FROM xsi:type="xsd:string">2011-12-20</DATE_FROM>
				<DATE_TO xsi:type="xsd:string">2011-12-25</DATE_TO>
				<TOOTAJAD xsi:type="xsd:string" />
			</keha>
		</ns5:Z_EMPLOEES>
	</SOAP-ENV:Body>
</SOAP-ENV:Envelope>',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'PERNR/text()',
          'xpathparser:1' => 'concat(VORNA/text(), \' \', NACHN/text())',
          'xpathparser:2' => 'EMAIL/text()',
          'xpathparser:3' => 'HARIDUS/text()',
          'xpathparser:4' => 'ERIALA/text()',
          'xpathparser:5' => 'PLSTX/text()',
          'xpathparser:6' => 'LAUATELEFON/text()',
          'xpathparser:7' => 'AJUH/text()',
          'xpathparser:8' => 'ORGEH/text()',
          'xpathparser:9' => 'DESCR/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
        ),
        'context' => '//TOOTAJAD/item[PERNR!=\'00000000\']',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_contact_e_mail',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_degree',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_specialty',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_contact_phone_nr',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_other',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_department',
            'term_search' => '2',
            'autocreate' => 0,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_the_functions',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contacts'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts_absentees';
  $feeds_importer->config = array(
    'name' => 'Contacts - Absentees',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSOAPFetcher',
      'config' => array(
        'endpoint' => 'http://10.0.14.15/cgi-bin/consumer_proxy',
        'envelope' => '<SOAP-ENV:Envelope
	xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/"
	xmlns:SOAP-ENC="http://schemas.xmlsoap.org/soap/encoding/"
	xmlns:ns4="http://x-tee.riik.ee/xsd/xtee.xsd"
	xmlns:ns5="http://producers.rmviki.xtee.riik.ee/producer/rmviki"
	xmlns:xsd="http://www.w3.org/2001/XMLSchema"
	xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">
	<SOAP-ENV:Header>
		<ns4:asutus xsi:type="xsd:string">70006317</ns4:asutus>
		<ns4:andmekogu xsi:type="xsd:string">rmviki</ns4:andmekogu>
		<ns4:isikukood xsi:type="xsd:string">70006317</ns4:isikukood>
		<ns4:id xsi:type="xsd:string">7bcc6f0aa5d30725c26b196b28282c7fe0dadf06</ns4:id>
		<ns4:nimi xsi:type="xsd:string">rmviki.Z_EMPLOEES.v1</ns4:nimi>
	</SOAP-ENV:Header>
	<SOAP-ENV:Body>
		<ns5:Z_EMPLOEES>
			<keha>
				<COMPANYCODE>1101</COMPANYCODE>
				<DATE_FROM xsi:type="xsd:string">2011-12-20</DATE_FROM>
				<DATE_TO xsi:type="xsd:string">2011-12-25</DATE_TO>
				<TOOTAJAD xsi:type="xsd:string" />
			</keha>
		</ns5:Z_EMPLOEES>
	</SOAP-ENV:Body>
</SOAP-ENV:Envelope>',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'PERNR/text()',
          'xpathparser:1' => 'BEGDA/text()',
          'xpathparser:2' => 'ENDDA/text()',
          'xpathparser:3' => 'ATEXT/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
        ),
        'context' => '//PUUDUMINE/item[PERNR!=\'00000000\']',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'Temporary target 3',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contacts_absentees'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts_departments';
  $feeds_importer->config = array(
    'name' => 'Contacts X-tee - Departments',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSOAPFetcher',
      'config' => array(
        'endpoint' => 'http://10.0.14.15/cgi-bin/consumer_proxy',
        'envelope' => '<SOAP-ENV:Envelope
  xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/"
  xmlns:SOAP-ENC="http://schemas.xmlsoap.org/soap/encoding/"
  xmlns:ns4="http://x-tee.riik.ee/xsd/xtee.xsd"
  xmlns:ns5="http://producers.rmviki.xtee.riik.ee/producer/rmviki"
  xmlns:xsd="http://www.w3.org/2001/XMLSchema"
  xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
  SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">
  <SOAP-ENV:Header>
    <ns4:asutus xsi:type="xsd:string">70006317</ns4:asutus>
    <ns4:andmekogu xsi:type="xsd:string">rmviki</ns4:andmekogu>
    <ns4:isikukood xsi:type="xsd:string">70006317</ns4:isikukood>
    <ns4:id xsi:type="xsd:string">7bcc6f0aa5d30725c26b196b28282c7fe0dadf06</ns4:id>
    <ns4:nimi xsi:type="xsd:string">rmviki.asutuseStruktuur.v1</ns4:nimi>
  </SOAP-ENV:Header>
  <SOAP-ENV:Body>
    <ns5:asutuseStruktuur>
      <keha>
        <STRUKTUURI_ALGUS>51085550</STRUKTUURI_ALGUS>
        <KEHTIV_ALATES xsi:type="xsd:string">2011-12-10</KEHTIV_ALATES>
        <KEHTIV_KUNI xsi:type="xsd:string">2011-12-25</KEHTIV_KUNI>
        <ONLINE xsi:type="xsd:string" />
      </keha>
    </ns5:asutuseStruktuur>
  </SOAP-ENV:Body>
</SOAP-ENV:Envelope>',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'OBJEKTI_ID/text()',
          'xpathparser:1' => 'TEKST/text()',
          'xpathparser:2' => 'PIKK_TEKST/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
        ),
        'context' => '//item[OBJEKTI_TYYP=\'O\' and KUULUB!=\'00000000\']',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'department',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '604800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contacts_departments'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts_leavers';
  $feeds_importer->config = array(
    'name' => 'Contacts - Leavers',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSOAPFetcher',
      'config' => array(
        'endpoint' => 'http://10.0.14.15/cgi-bin/consumer_proxy',
        'envelope' => '<SOAP-ENV:Envelope
	xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/"
	xmlns:SOAP-ENC="http://schemas.xmlsoap.org/soap/encoding/"
	xmlns:ns4="http://x-tee.riik.ee/xsd/xtee.xsd"
	xmlns:ns5="http://producers.rmviki.xtee.riik.ee/producer/rmviki"
	xmlns:xsd="http://www.w3.org/2001/XMLSchema"
	xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	SOAP-ENV:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">
	<SOAP-ENV:Header>
		<ns4:asutus xsi:type="xsd:string">70006317</ns4:asutus>
		<ns4:andmekogu xsi:type="xsd:string">rmviki</ns4:andmekogu>
		<ns4:isikukood xsi:type="xsd:string">70006317</ns4:isikukood>
		<ns4:id xsi:type="xsd:string">7bcc6f0aa5d30725c26b196b28282c7fe0dadf06</ns4:id>
		<ns4:nimi xsi:type="xsd:string">rmviki.Z_EMPLOEES.v1</ns4:nimi>
	</SOAP-ENV:Header>
	<SOAP-ENV:Body>
		<ns5:Z_EMPLOEES>
			<keha>
				<COMPANYCODE>1101</COMPANYCODE>
				<DATE_FROM xsi:type="xsd:string">2011-12-20</DATE_FROM>
				<DATE_TO xsi:type="xsd:string">2012-12-25</DATE_TO>
				<TOOTAJAD xsi:type="xsd:string" />
			</keha>
		</ns5:Z_EMPLOEES>
	</SOAP-ENV:Body>
</SOAP-ENV:Envelope>',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'PERNR/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
        ),
        'context' => '//LAHKUJAD/item[PERNR!=\'00000000\']',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contacts_leavers'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contacts_vp';
  $feeds_importer->config = array(
    'name' => 'Contacts - VP',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'guid/text()',
          'xpathparser:1' => 'title/text()',
          'xpathparser:2' => 'degree/text()',
          'xpathparser:3' => 'department/text()',
          'xpathparser:4' => 'email/text()',
          'xpathparser:5' => 'educational_institution/text()',
          'xpathparser:6' => 'other/text()',
          'xpathparser:7' => 'phone_nr/text()',
          'xpathparser:8' => 'position/text()',
          'xpathparser:9' => 'profile_photo/text()',
          'xpathparser:10' => 'skype/text()',
          'xpathparser:11' => 'specialty/text()',
          'xpathparser:12' => 'the_functions/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
        ),
        'context' => '//node',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_degree',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_department',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_contact_e_mail',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_educational_institution',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_other',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_contact_phone_nr',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_profile_photo',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_skype',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_specialty',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_the_functions',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contacts_vp'] = $feeds_importer;

  return $export;
}
