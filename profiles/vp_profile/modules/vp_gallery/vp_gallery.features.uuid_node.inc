<?php
/**
 * @file
 * vp_gallery.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_gallery_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test gallery',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'fa6e428d-eb18-4a5c-99d8-7baa2cdd9474',
  'type' => 'gallery',
  'language' => 'en',
  'created' => 1384432617,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '3fc9ce4e-94a6-4f70-a6c0-b4d34114fecf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Turpis et lectus. Turpis enim tortor tortor ultricies egestas augue in mus, nisi massa turpis in. Nisi amet? Penatibus, porta porttitor? Turpis aliquam ac in tortor, tincidunt sed. Est velit, dolor tincidunt penatibus? Egestas. Duis! Augue lacus lectus aliquet cras pulvinar odio! Turpis adipiscing in, turpis, duis eu, ac in turpis platea nisi elementum!</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Turpis et lectus. Turpis enim tortor tortor ultricies egestas augue in mus, nisi massa turpis in. Nisi amet? Penatibus, porta porttitor? Turpis aliquam ac in tortor, tincidunt sed. Est velit, dolor tincidunt penatibus? Egestas. Duis! Augue lacus lectus aliquet cras pulvinar odio! Turpis adipiscing in, turpis, duis eu, ac in turpis platea nisi elementum!</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_pictures' => array(
    'und' => array(
      0 => array(
        'value' => 119,
        'revision_id' => 119,
      ),
      1 => array(
        'value' => 120,
        'revision_id' => 120,
      ),
      2 => array(
        'value' => 126,
        'revision_id' => 126,
      ),
      3 => array(
        'value' => 127,
        'revision_id' => 127,
      ),
    ),
  ),
  'field_author' => array(
    'und' => array(
      0 => array(
        'value' => 'John Smith',
        'format' => NULL,
        'safe_value' => 'John Smith',
      ),
    ),
  ),
  'field_news_subject' => array(
    'und' => array(
      0 => array(
        'tid' => 127,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'gallery',
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
  'date' => '2013-11-14 14:36:57 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testgalerii',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'be3366c3-d125-4bdd-b9ca-391fe1a02faf',
  'type' => 'gallery',
  'language' => 'et',
  'created' => 1384433410,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '7a808664-5768-465f-ac6a-1b4b769d6716',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Sed platea parturient sit scelerisque. Parturient in? Cum integer? Enim ut auctor elementum et nec! Tincidunt turpis rhoncus sagittis porta ridiculus nascetur augue, ac. In, sed dictumst, nascetur ultricies quis etiam nisi, urna tincidunt integer vut elementum in odio odio! Ultrices dolor integer nunc, rhoncus. Non massa nisi adipiscing, turpis nascetur ultricies lorem nisi porttitor, cursus augue ut lorem? Et nisi, parturient etiam ut pellentesque, eu. Turpis. Velit lorem rhoncus ac lundium ultricies vut magna et pulvinar!</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Sed platea parturient sit scelerisque. Parturient in? Cum integer? Enim ut auctor elementum et nec! Tincidunt turpis rhoncus sagittis porta ridiculus nascetur augue, ac. In, sed dictumst, nascetur ultricies quis etiam nisi, urna tincidunt integer vut elementum in odio odio! Ultrices dolor integer nunc, rhoncus. Non massa nisi adipiscing, turpis nascetur ultricies lorem nisi porttitor, cursus augue ut lorem? Et nisi, parturient etiam ut pellentesque, eu. Turpis. Velit lorem rhoncus ac lundium ultricies vut magna et pulvinar!</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_pictures' => array(
    'und' => array(
      0 => array(
        'value' => 124,
        'revision_id' => 124,
      ),
      1 => array(
        'value' => 125,
        'revision_id' => 125,
      ),
    ),
  ),
  'field_author' => array(),
  'field_news_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'gallery',
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
  'date' => '2013-11-14 14:50:10 +0200',
);
  return $nodes;
}
