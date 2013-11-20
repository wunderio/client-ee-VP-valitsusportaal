<?php
/**
 * @file
 * vp_weekly_schedule.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_weekly_schedule_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test eelinfo päev 14.11.2013',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '38666508-d3da-4913-ba12-5331553c5338',
  'type' => 'weekly_schedule_day',
  'language' => 'et',
  'created' => 1384440460,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '5d699a88-8e9d-412e-ba21-6e0c0bf49d95',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>13:00 - istung<br>
	14:00 - lõuna<br>
	17:30 -&nbsp;<span style="background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna. Purus parturient habitasse enim magnis magnis aliquet ut nisi sed ut nec nec et scelerisque elementum</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>13:00 - istung<br>
	14:00 - l&otilde;una<br>
	17:30 -&nbsp;<span style="background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna. Purus parturient habitasse enim magnis magnis aliquet ut nisi sed ut nec nec et scelerisque elementum</span></p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_weekly_schedule_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_weekly_schedule_source' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'weekly_schedule_day',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131114,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
      'type' => 'property',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_content_type' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:type',
      ),
    ),
    'field_created' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:date',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'mekaia',
  'picture' => 0,
  'data' => 'a:4:{s:15:"l10n_client_key";s:39:"280359:848d5e7a98587ad4469fa85a496c21eb";s:20:"l10n_client_disabled";b:0;s:14:"geoip_location";a:10:{s:7:"country";s:1:"-";s:12:"country_code";s:1:"-";s:6:"region";s:1:"-";s:11:"region_code";s:0:"";s:4:"city";s:1:"-";s:3:"zip";s:1:"-";s:8:"latitude";N;s:9:"longitude";N;s:10:"ip_address";s:13:"192.168.1.254";s:9:"timestamp";i:1322473462;}s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-11-14 16:47:40 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test eelinfo päev 14.11.2013 Välisministeerium',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e9b4e8e7-54c3-4f56-9748-f44e301aeb0d',
  'type' => 'weekly_schedule_day',
  'language' => 'et',
  'created' => 1384440517,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a0e1f9fd-bd34-46ff-8538-fea2ecef5d8a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">17:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna</span><br>
	<span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">20:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">dictumst sociis urna</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">17:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna</span><br><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">20:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">dictumst sociis urna</span></p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_weekly_schedule_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_weekly_schedule_source' => array(
    'und' => array(
      0 => array(
        'tid' => 137,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'weekly_schedule_day',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131114,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
      'type' => 'property',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_content_type' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:type',
      ),
    ),
    'field_created' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:date',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'mekaia',
  'picture' => 0,
  'data' => 'a:4:{s:15:"l10n_client_key";s:39:"280359:848d5e7a98587ad4469fa85a496c21eb";s:20:"l10n_client_disabled";b:0;s:14:"geoip_location";a:10:{s:7:"country";s:1:"-";s:12:"country_code";s:1:"-";s:6:"region";s:1:"-";s:11:"region_code";s:0:"";s:4:"city";s:1:"-";s:3:"zip";s:1:"-";s:8:"latitude";N;s:9:"longitude";N;s:10:"ip_address";s:13:"192.168.1.254";s:9:"timestamp";i:1322473462;}s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-11-14 16:48:37 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test weekly schedule day 14.nov 2013',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '95cf0ed2-eed6-4310-a212-f603d23e620c',
  'type' => 'weekly_schedule_day',
  'language' => 'en',
  'created' => 1384440597,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd216ef7a-451a-42bf-a4dd-c6984a0a5c39',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">17:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna</span><br style="line-height: 18px; background-color: rgb(255, 255, 255);">
	<span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">20:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">dictumst sociis urna</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">17:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">sagittis elementum nunc in, etiam scelerisque sagittis velit, dictumst sociis urna</span><br style="line-height: 18px; background-color: rgb(255, 255, 255);"><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255);">20:30 -&nbsp;</span><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; font-style: normal; font-variant: normal; line-height: 18px; background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);">dictumst sociis urna</span></p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_weekly_schedule_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_weekly_schedule_source' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'weekly_schedule_day',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131114,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
      'type' => 'property',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_content_type' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:type',
      ),
    ),
    'field_created' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:date',
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'mekaia',
  'picture' => 0,
  'data' => 'a:4:{s:15:"l10n_client_key";s:39:"280359:848d5e7a98587ad4469fa85a496c21eb";s:20:"l10n_client_disabled";b:0;s:14:"geoip_location";a:10:{s:7:"country";s:1:"-";s:12:"country_code";s:1:"-";s:6:"region";s:1:"-";s:11:"region_code";s:0:"";s:4:"city";s:1:"-";s:3:"zip";s:1:"-";s:8:"latitude";N;s:9:"longitude";N;s:10:"ip_address";s:13:"192.168.1.254";s:9:"timestamp";i:1322473462;}s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-11-14 16:49:57 +0200',
);
  return $nodes;
}
