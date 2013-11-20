<?php
/**
 * @file
 * vp_video_gallery.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_video_gallery_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testvideo',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '17ec1ee2-9a04-479f-abf8-3f1d6b78db77',
  'type' => 'youtube_video',
  'language' => 'et',
  'created' => 1384781325,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'cd7363a3-7173-4877-a184-5b56eada92e6',
  'revision_uid' => 1,
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Video seletab lihtsalt ja ilmekalt, kuidas digiallkiri meie elu mugavamaks muudab, aitab säästa keskkonda, raha ja aega.

Video tegi Tolm.

Tellijaks oli Eesti Infotehnoloogia ja Telekommunikatsiooni Liit ning abiks oli Euroopa Regionaalarengu Fond. 

http://e-estonia.com/',
        'format' => NULL,
        'safe_value' => 'Video seletab lihtsalt ja ilmekalt, kuidas digiallkiri meie elu mugavamaks muudab, aitab säästa keskkonda, raha ja aega.

Video tegi Tolm.

Tellijaks oli Eesti Infotehnoloogia ja Telekommunikatsiooni Liit ning abiks oli Euroopa Regionaalarengu Fond. 

http://e-estonia.com/',
      ),
    ),
  ),
  'field_embbed_source' => array(
    'und' => array(
      0 => array(
        'value' => 'juLTG1JWNLg',
        'format' => NULL,
        'safe_value' => 'juLTG1JWNLg',
      ),
    ),
  ),
  'field_thumbnail' => array(),
  'field_term' => array(
    'und' => array(
      0 => array(
        'value' => 'News',
        'format' => NULL,
        'safe_value' => 'News',
      ),
    ),
  ),
  'field_label' => array(
    'und' => array(
      0 => array(
        'value' => 'News & Politics',
        'format' => NULL,
        'safe_value' => 'News &amp; Politics',
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
  'date' => '2013-11-18 15:28:45 +0200',
);
  return $nodes;
}
