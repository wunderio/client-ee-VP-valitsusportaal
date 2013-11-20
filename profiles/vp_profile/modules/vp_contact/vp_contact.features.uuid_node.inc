<?php
/**
 * @file
 * vp_contact.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_contact_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testkontakt',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eedb6965-f5a9-4b80-9348-f8d8d341142e',
  'type' => 'contact',
  'language' => 'et',
  'created' => 1384440145,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => -1,
  'rh_redirect' => '',
  'rh_redirect_response' => 301,
  'uuid' => '29fc4433-2f03-42d6-a2cd-c2270301ae3a',
  'revision_uid' => 1,
  'field_department' => array(
    'und' => array(
      0 => array(
        'tid' => 103,
      ),
    ),
  ),
  'field_position' => array(
    'und' => array(
      0 => array(
        'value' => 'asjaajaja',
        'format' => NULL,
        'safe_value' => 'asjaajaja',
      ),
    ),
  ),
  'field_skype' => array(
    'und' => array(
      0 => array(
        'value' => 'skype_name',
        'format' => NULL,
        'safe_value' => 'skype_name',
      ),
    ),
  ),
  'field_contact_e_mail' => array(
    'und' => array(
      0 => array(
        'email' => 'test@test.ee',
      ),
    ),
  ),
  'field_the_functions' => array(
    'und' => array(
      0 => array(
        'value' => 'Tegeleb asjade ajamisega.',
        'format' => NULL,
        'safe_value' => 'Tegeleb asjade ajamisega.',
      ),
    ),
  ),
  'field_educational_institution' => array(
    'und' => array(
      0 => array(
        'value' => 'Tartu Ülikool',
        'format' => NULL,
        'safe_value' => 'Tartu Ülikool',
      ),
    ),
  ),
  'field_specialty' => array(
    'und' => array(
      0 => array(
        'value' => 'majandus',
        'format' => NULL,
        'safe_value' => 'majandus',
      ),
    ),
  ),
  'field_degree' => array(
    'und' => array(
      0 => array(
        'value' => 'bakalaureus',
        'format' => NULL,
        'safe_value' => 'bakalaureus',
      ),
    ),
  ),
  'field_profile_photo' => array(),
  'field_contact_phone_nr' => array(
    'und' => array(
      0 => array(
        'value' => 55666666,
        'format' => NULL,
        'safe_value' => 55666666,
      ),
    ),
  ),
  'field_source' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
  ),
  'field_other' => array(
    'und' => array(
      0 => array(
        'value' => 'test',
        'format' => NULL,
        'safe_value' => 'test',
      ),
    ),
  ),
  'field_position_in_english' => array(
    'und' => array(
      0 => array(
        'value' => 'mastermind',
        'format' => NULL,
        'safe_value' => 'mastermind',
      ),
    ),
  ),
  'field_position_in_russian' => array(
    'und' => array(
      0 => array(
        'value' => 'cекретарь',
        'format' => NULL,
        'safe_value' => 'cекретарь',
      ),
    ),
  ),
  'field_field_lock' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 'puhkusel',
        'format' => NULL,
        'safe_value' => 'puhkusel',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'mekaia',
  'picture' => 0,
  'data' => 'a:4:{s:15:"l10n_client_key";s:39:"280359:848d5e7a98587ad4469fa85a496c21eb";s:20:"l10n_client_disabled";b:0;s:14:"geoip_location";a:10:{s:7:"country";s:1:"-";s:12:"country_code";s:1:"-";s:6:"region";s:1:"-";s:11:"region_code";s:0:"";s:4:"city";s:1:"-";s:3:"zip";s:1:"-";s:8:"latitude";N;s:9:"longitude";N;s:10:"ip_address";s:13:"192.168.1.254";s:9:"timestamp";i:1322473462;}s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-11-14 16:42:25 +0200',
);
  return $nodes;
}
