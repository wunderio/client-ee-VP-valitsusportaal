<?php
/**
 * @file
 * vp_core.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_core_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'This is a test announcement',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a5abedf1-c92d-44db-a87a-088ae25629ba',
  'type' => 'announcements',
  'language' => 'en',
  'created' => 1384437365,
  'tnid' => 164,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '29a01d99-bf43-4d4d-9461-968f6c2694d7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis.',
        'summary' => '',
        'format' => 'ds_code',
        'safe_value' => 'Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_announcements_picture' => array(),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://mekaia.com',
        'title' => '',
        'attributes' => array(),
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
  'date' => '2013-11-14 15:56:05 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test ajalooartikkel 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f3f7d9f5-9ecd-4494-b250-1f35c5ede8ee',
  'type' => 'history',
  'language' => 'et',
  'created' => 1384437190,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '2cd1d8e2-76ea-4d96-a0a0-09f655f6c21d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_optional_date_period' => array(
    'und' => array(
      0 => array(
        'value' => '2013-10-17 00:00:00',
        'value2' => '2013-11-29 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'history',
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
  'date' => '2013-11-14 15:53:10 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test teadaanne',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '78815a50-d79b-4eae-b060-642e3656d3e5',
  'type' => 'announcements',
  'language' => 'et',
  'created' => 1368716831,
  'tnid' => 164,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '2d411fba-9dc9-4981-b98f-b3abe567cb04',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Kell 12 algaval pressikonverentsil vastavad ajakirjanike küsimustele peaminister, justiitsminister ja kultuuriminister.',
        'summary' => '',
        'format' => 'ds_code',
        'safe_value' => 'Kell 12 algaval pressikonverentsil vastavad ajakirjanike küsimustele peaminister, justiitsminister ja kultuuriminister.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_announcements_picture' => array(
    'und' => array(
      0 => array(
        'fid' => 361,
        'alt' => '',
        'title' => '',
        'width' => 37,
        'height' => 37,
        'uid' => 1,
        'filename' => 'otse.png',
        'uri' => 'public://announcements-pictures/otse.png',
        'filemime' => 'image/png',
        'filesize' => 1104,
        'status' => 1,
        'timestamp' => 1370511066,
        'origname' => 'otse.png',
        'uuid' => 'f4ad5d29-5e87-48eb-ba73-1c0c408e0d0e',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://mekaia.com',
        'title' => '',
        'attributes' => array(),
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
  'date' => '2013-05-16 18:07:11 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accessibility',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7ee4a863-561c-453b-8b11-acbaf1abe62c',
  'type' => 'article',
  'language' => 'en',
  'created' => 1384341805,
  'tnid' => 1127,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '3dd15708-d4b9-402e-8b31-734c6633e545',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>sisu</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>sisu</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131113,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-11-13 13:23:25 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test history article',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2a99a25d-2582-46ab-935c-cbb3285fac23',
  'type' => 'history',
  'language' => 'en',
  'created' => 1367990913,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '5285ee5e-c12b-4e32-af16-66e67a233253',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Consequat elit ibidem laoreet minim molior nostrud populus secundum sudo. Aliquam refoveo volutpat. Camur comis eu quadrum ymo. Decet euismod plaga venio zelus. Lucidus macto probo tego volutpat. Accumsan dignissim saepius vel. Antehabeo eum minim ratis refero ymo. Iusto refoveo similis ullamcorper. Augue consectetuer elit lucidus praesent quidem refero singularis virtus.</p>
<p>Abico exputo illum meus molior premo typicus. Capto incassum magna. Diam ex magna nibh praemitto. Huic importunus iustum lucidus macto nunc saepius. Causa immitto oppeto quidne suscipere venio. Gilvus loquor occuro ulciscor. Luptatum pala usitas. Blandit dolore dolus incassum ludus metuo populus suscipere. Acsi distineo facilisis iaceo lenis olim pecus quidem tamen. Dignissim dolor elit ex in proprius ut. Commodo damnum interdico meus singularis usitas. Amet commoveo letalis persto secundum utrum. Causa in interdico iriure jumentum similis sino. At consectetuer eum feugiat iaceo nulla tation utinam vero verto. Distineo eu huic humo interdico utrum. Ad consequat huic vereor. Comis enim haero imputo lobortis quis typicus vereor. Euismod eum loquor te.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Consequat elit ibidem laoreet minim molior nostrud populus secundum sudo. Aliquam refoveo volutpat. Camur comis eu quadrum ymo. Decet euismod plaga venio zelus. Lucidus macto probo tego volutpat. Accumsan dignissim saepius vel. Antehabeo eum minim ratis refero ymo. Iusto refoveo similis ullamcorper. Augue consectetuer elit lucidus praesent quidem refero singularis virtus.</p>
<p>Abico exputo illum meus molior premo typicus. Capto incassum magna. Diam ex magna nibh praemitto. Huic importunus iustum lucidus macto nunc saepius. Causa immitto oppeto quidne suscipere venio. Gilvus loquor occuro ulciscor. Luptatum pala usitas. Blandit dolore dolus incassum ludus metuo populus suscipere. Acsi distineo facilisis iaceo lenis olim pecus quidem tamen. Dignissim dolor elit ex in proprius ut. Commodo damnum interdico meus singularis usitas. Amet commoveo letalis persto secundum utrum. Causa in interdico iriure jumentum similis sino. At consectetuer eum feugiat iaceo nulla tation utinam vero verto. Distineo eu huic humo interdico utrum. Ad consequat huic vereor. Comis enim haero imputo lobortis quis typicus vereor. Euismod eum loquor te.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_optional_date_period' => array(
    'und' => array(
      0 => array(
        'value' => '2012-05-29 00:00:00',
        'value2' => '2012-05-29 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'history',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130508,
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
  'date' => '2013-05-08 08:28:33 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test ajalooartikkel 3',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '34256538-bd4d-4497-8cef-de0977581ccc',
  'type' => 'history',
  'language' => 'et',
  'created' => 1384437211,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '69d36812-2798-4a6f-8072-dc2a28a94c9a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis? Nec placerat massa tortor risus tincidunt amet, in augue massa ridiculus? Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac?</p>
<p>Penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Mauris placerat odio tempor montes in montes cursus augue! Sed aliquet elementum platea integer ultricies, porta lorem tortor lundium natoque. Risus in dapibus nunc turpis nunc mauris aliquet nascetur, platea mus, urna mus porttitor integer enim magnis. Elit mus cras, turpis elementum massa ac tincidunt nec urna, dapibus eros, massa parturient sociis, placerat tempor nisi, in, penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>
',
        'summary' => 'Kokkuvõtte lahtris. Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis? Nec placerat massa tortor risus tincidunt amet, in augue massa ridiculus? Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac?',
        'format' => 'full_html',
        'safe_value' => '<p>Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis? Nec placerat massa tortor risus tincidunt amet, in augue massa ridiculus? Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac?</p>
<p>Penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Mauris placerat odio tempor montes in montes cursus augue! Sed aliquet elementum platea integer ultricies, porta lorem tortor lundium natoque. Risus in dapibus nunc turpis nunc mauris aliquet nascetur, platea mus, urna mus porttitor integer enim magnis. Elit mus cras, turpis elementum massa ac tincidunt nec urna, dapibus eros, massa parturient sociis, placerat tempor nisi, in, penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>',
        'safe_summary' => '<p>Kokkuv&otilde;tte lahtris. Mauris ultricies, cum eu ultricies, et cum. Lectus nec vel facilisis? Nec placerat massa tortor risus tincidunt amet, in augue massa ridiculus? Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac?</p>',
      ),
    ),
  ),
  'field_optional_date_period' => array(
    'und' => array(
      0 => array(
        'value' => '2013-11-14 00:00:00',
        'value2' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'history',
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
  'date' => '2013-11-14 15:53:31 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tähtsad teated test 3',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '28ca3486-bfa0-43ce-8db0-dabea65bddf6',
  'type' => 'important_announcements',
  'language' => 'et',
  'created' => 1368787828,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '76787a57-288f-43a2-a6a8-6df96fec8863',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Curabitur posuere, leo euismod cursus venenatis, orci tellus aliquam metus, et interdum lacus lorem vel lorem.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Curabitur posuere, leo euismod cursus venenatis, orci tellus aliquam metus, et interdum lacus lorem vel lorem.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_wallpaper' => array(
    'und' => array(
      0 => array(
        'fid' => 265,
        'alt' => '',
        'title' => '',
        'width' => 325,
        'height' => 200,
        'uid' => 1,
        'filename' => 'bulb.png',
        'uri' => 'public://important-announcements-wallpapers/bulb.png',
        'filemime' => 'image/png',
        'filesize' => 22182,
        'status' => 1,
        'timestamp' => 1368787828,
        'origname' => 'bulb.png',
        'uuid' => 'ddccecf0-288d-40d0-b92b-d1fdf984fba3',
        'rdf_mapping' => array(),
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
  'date' => '2013-05-17 13:50:28 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test ajalooartikkel 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '98fedfea-e8b7-452a-b1db-0015be172521',
  'type' => 'history',
  'language' => 'et',
  'created' => 1375793301,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '7c608a28-7178-44cb-89dd-de91b5c9c016',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong>Automaatne viewsi lühendatud tekst.</strong> Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac? Mauris placerat odio tempor montes in montes cursus augue!</p>
<p>Sed aliquet elementum platea integer ultricies, porta lorem tortor lundium natoque. Risus in dapibus nunc turpis nunc mauris aliquet nascetur, platea mus, urna mus porttitor integer enim magnis. Elit mus cras, turpis elementum massa ac tincidunt nec urna, dapibus eros, massa parturient sociis, placerat tempor nisi, in, penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><strong>Automaatne viewsi l&uuml;hendatud tekst.</strong> Velit rhoncus arcu! Hac enim porta porttitor mid natoque penatibus, elementum tristique ac? Mauris placerat odio tempor montes in montes cursus augue!</p>
<p>Sed aliquet elementum platea integer ultricies, porta lorem tortor lundium natoque. Risus in dapibus nunc turpis nunc mauris aliquet nascetur, platea mus, urna mus porttitor integer enim magnis. Elit mus cras, turpis elementum massa ac tincidunt nec urna, dapibus eros, massa parturient sociis, placerat tempor nisi, in, penatibus eu porttitor ridiculus lectus etiam aliquam sit sit nec purus amet sagittis, quis? Nisi, phasellus amet, natoque, augue facilisis nunc porta elementum et ac placerat montes, nascetur, enim.</p>
<p>Pellentesque sagittis in. Lundium, lorem, vut elementum, dictumst amet? Arcu, non! Eu in urna et risus cum urna aliquam, elementum cursus pulvinar odio elementum? Et ac dignissim! Lectus tortor cum natoque ac turpis, ac tristique arcu habitasse, cursus a odio tortor! Lundium adipiscing platea in nunc ut, vel lacus! Porttitor ut adipiscing ut lectus facilisis arcu turpis platea velit sed dignissim penatibus vel amet ridiculus tristique cras. A? Turpis porttitor egestas augue massa! Pulvinar vut tincidunt tincidunt? Non arcu dolor etiam urna lundium, eu, amet integer! Placerat? Et magnis. Tincidunt ridiculus! Quis elit urna non amet elementum! Aliquam amet, lectus a, rhoncus a pulvinar vut placerat ac? Odio non adipiscing, lectus cursus dolor montes purus, nisi ultrices? Lorem in.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_optional_date_period' => array(
    'und' => array(
      0 => array(
        'value' => '2011-03-10 00:00:00',
        'value2' => '2013-11-14 00:00:00',
        'timezone' => 'Europe/Tallinn',
        'timezone_db' => 'Europe/Tallinn',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'history',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130806,
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
  'date' => '2013-08-06 15:48:21 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'RSS',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '206da682-f6e1-4b69-b254-c61f27a7fe2e',
  'type' => 'article',
  'language' => 'ru',
  'created' => 1381921511,
  'tnid' => 209,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '87268008-dd6e-45a9-87fd-3b5d023f7502',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; line-height: 20px;">RSS-каналы</span>:</strong></p>
<ol id="rsseses">
	<li><a class="icon-internal" href="/ru/news/1/feed">Пресс-релизы</a></li>
</ol>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><strong><span style="font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 14px; line-height: 20px;">RSS-&#1082;&#1072;&#1085;&#1072;&#1083;&#1099;</span>:</strong></p>
<ol id="rsseses"><li><a class="icon-internal" href="/ru/news/1/feed">&#1055;&#1088;&#1077;&#1089;&#1089;-&#1088;&#1077;&#1083;&#1080;&#1079;&#1099;</a></li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131016,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-10-16 14:05:11 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Подписаться на рассылку',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7c64121-9996-4c49-bb5b-50cbfcae848a',
  'type' => 'article',
  'language' => 'ru',
  'created' => 1384504679,
  'tnid' => 313,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '9f3429db-9ecd-49f8-a47a-3df43989f35d',
  'revision_uid' => 1,
  'body' => array(),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131115,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-11-15 10:37:59 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tähtsad teated test 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '494c429f-9c39-4773-8f34-7972491320e8',
  'type' => 'important_announcements',
  'language' => 'et',
  'created' => 1368787832,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a1634f36-2c94-4d49-8d9c-3896ffe3eeb9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi convallis velit sed massa lobortis ultrices. Duis quis ipsum nulla, auctor fringilla nibh.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi convallis velit sed massa lobortis ultrices. Duis quis ipsum nulla, auctor fringilla nibh.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_wallpaper' => array(
    'und' => array(
      0 => array(
        'fid' => 266,
        'alt' => '',
        'title' => '',
        'width' => 325,
        'height' => 200,
        'uid' => 1,
        'filename' => 'hand.png',
        'uri' => 'public://important-announcements-wallpapers/hand.png',
        'filemime' => 'image/png',
        'filesize' => 47895,
        'status' => 1,
        'timestamp' => 1368787832,
        'origname' => 'hand.png',
        'uuid' => '5eacdfdb-ec22-44e7-93e1-3b7dce93c11f',
        'rdf_mapping' => array(),
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
  'date' => '2013-05-17 13:50:32 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test taustapilt',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6476667d-f426-43f0-8863-be70f398cf47',
  'type' => 'background_image',
  'language' => 'et',
  'created' => 1369640063,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a795c10f-f2d5-4c13-a82b-17c41066e834',
  'revision_uid' => 1,
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 487,
        'alt' => '',
        'title' => '',
        'width' => 2000,
        'height' => 1205,
        'uid' => 1,
        'filename' => 'bg2.jpg',
        'uri' => 'public://background-pictures/bg2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 96594,
        'status' => 1,
        'timestamp' => 1375699781,
        'origname' => 'bg2.jpg',
        'uuid' => '730d606c-8acc-4f99-ba59-d163109f42d4',
        'rdf_mapping' => array(),
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
  'date' => '2013-05-27 10:34:23 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Tähtsad teated test 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '561d309e-e961-4162-b657-e64ae5885838',
  'type' => 'important_announcements',
  'language' => 'et',
  'created' => 1367652671,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a9b65fe4-d580-4793-aaec-3e37a3095886',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Tänase tähtsa päeva puhul 
heiskame lipud.
Lipud peavad vardas olema 
hommikust õhtuni.
Elagu Eesti!',
        'summary' => '',
        'format' => 'ds_code',
        'safe_value' => 'Tänase tähtsa päeva puhul 
heiskame lipud.
Lipud peavad vardas olema 
hommikust õhtuni.
Elagu Eesti!',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_wallpaper' => array(
    'und' => array(
      0 => array(
        'fid' => 450,
        'alt' => '',
        'title' => '',
        'width' => 250,
        'height' => 202,
        'uid' => 337,
        'filename' => 'lipp.png',
        'uri' => 'public://important-announcements-wallpapers/lipp.png',
        'filemime' => 'image/png',
        'filesize' => 9737,
        'status' => 1,
        'timestamp' => 1374228745,
        'origname' => 'lipp.png',
        'uuid' => 'd3731e90-c3cc-43d8-9096-1cc9b4e231c1',
        'rdf_mapping' => array(),
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-05-04 10:31:11 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Доступност',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4d21f6e1-6281-4256-9ede-1759de14f37e',
  'type' => 'article',
  'language' => 'ru',
  'created' => 1384522187,
  'tnid' => 1127,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'afd84b97-7f56-4408-967e-4926f26648bc',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>sisu rus</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>sisu rus</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131115,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-11-15 15:29:47 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Liitu uudiskirjaga',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '72403ccb-b408-41db-9f6e-5659683a1388',
  'type' => 'article',
  'language' => 'et',
  'created' => 1380801406,
  'tnid' => 313,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'b2fc2402-e476-4b52-a190-a57c9a6b3a41',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Soovite saada lehel valitsus.ee avaldatavaid uudiseid ja teateid e-postiga? See on lihtne: märkige, milliseid teated soovite ning kirjutage lahtritesse oma e-posti aadress ja turvanumber. Teile saadetakse seejärel tellimuse kinnitamiseks e-kiri koos juhistega, kuidas saate oma tellimust hiljem soovi korral muuta või lõpetada.</p>
<p>E-postiga teadete tellimise asemel on uudiseid mugav&nbsp;jälgida ka&nbsp;<a href="/rss-vood" style="text-decoration: underline; color: rgb(153, 102, 204);">RSS uudistevoogudena</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Soovite saada lehel valitsus.ee avaldatavaid uudiseid ja teateid e-postiga? See on lihtne: m&auml;rkige, milliseid teated soovite ning kirjutage lahtritesse oma e-posti aadress ja turvanumber. Teile saadetakse seej&auml;rel tellimuse kinnitamiseks e-kiri koos juhistega, kuidas saate oma tellimust hiljem soovi korral muuta v&otilde;i l&otilde;petada.</p>
<p>E-postiga teadete tellimise asemel on uudiseid mugav&nbsp;j&auml;lgida ka&nbsp;<a href="/rss-vood" style="text-decoration: underline; color: rgb(153, 102, 204);" class=" icon-internal">RSS uudistevoogudena</a>.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131003,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-10-03 14:56:46 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testartikkel',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9c40f433-bdb5-4f92-ba5f-bf18f1f292ce',
  'type' => 'article',
  'language' => 'et',
  'created' => 1366108574,
  'tnid' => 139,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'bad1c5d8-4c2f-4aaa-88f5-41a784841c0c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><!-- Sample Content to Plugin to Template --></p>
<h2>CSS Basic Elements</h2>
<p>The purpose of this HTML is to help determine what default settings are with CSS and to make sure that all possible HTML Elements are included in this HTML so as to not miss any possible Elements when designing a site.</p>
<p><img alt="" longdesc="Yellow flowers" src="/sites/default/files/content-editors/flower.png" style="width: 294px; height: 292px;" title="Yellow flowers"></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="headings">Headings</h2>
<p>&nbsp;</p>
<h2><span style="font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 20px; line-height: 24px;">Heading 2</span></h2>
<h3><span style="color: rgb(189, 71, 50); font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 18px; line-height: 22px;">Heading 3</span></h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p><small><a href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="paragraph">Links with icons and metadata</h2>
<p>&nbsp;</p>
<p>Lorem ipsum dolor sit amet, <a href="#" title="test link">link to anchor</a>&nbsp;adipiscing elit. Nullam <a href="/sites/default/files/elfinder/article_files/2006-03-30_km_sissejuhatus.pdf">link to pdf</a> convallis est. Quisque aliquam. Donec faucibus. Nunc <a href="/sites/default/files/content-editors/raamistik-2011.odt">link to doc</a> iaculis suscipit <a href="http://mekaia.com">external link</a>.</p>
<p>&nbsp;</p>
<p>Lets test a Flash element embed:</p>
<p><object height="315" width="420"><param name="movie" value="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3"><param name="allowFullScreen" value="true"><param name="allowscriptaccess" value="always"><embed allowfullscreen="true" allowscriptaccess="always" height="315" src="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3" type="application/x-shockwave-flash" width="420"></object></p>
<p>Lets test an iframe:</p>
<p><iframe allowfullscreen="" frameborder="0" height="315" src="//www.youtube.com/embed/uKQYehm68m0" width="420"></iframe></p>
<p>&nbsp;</p>
<div class="hr">&nbsp;</div>
<h2 id="list_types">List Types</h2>
<h3>&nbsp;</h3>
<h3>Ordered List</h3>
<ol>
	<li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ol>
<h3>Unordered List</h3>
<ul>
	<li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ul>
<h3>Unordered List from design</h3>
<ul style="width: 540px;">
	<li>Eesti koostöö Põhjala ja Balti riikide ametiasutustega finantsjärelevalve vallas on olnud tõhus.</li>
	<li>Paljud regiooni maad ei kuulu euroalasse:
		<ul>
			<li>Eesti koostöö Põhjala ja Balti riikide ametiasutustega finantsjärelevalve vallas on olnud tõhus.</li>
			<li>Paljud regiooni maad ei kuulu euroalasse</li>
		</ul>
	</li>
	<li>Ühtse pangandusjärelevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koostöö ja järelevalve kvaliteet.</li>
	<li>Ühtse pangandusjärelevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koostöö ja järelevalve kvaliteet.</li>
</ul>
<hr>
<h2>&nbsp;</h2>
<h2 id="form_elements">Fieldsets, Legends, and Form Elements</h2>
<p>&nbsp;</p>
<fieldset><legend>Legend</legend>
	<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus.</p>
	<form>
		<h2>Form Element</h2>
		<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui.</p>
		<p><label for="text_field">Text Field:</label><br>
			<input id="text_field" type="text"></p>
		<p><label for="text_area">Text Area:</label><br>
			<textarea id="text_area"></textarea></p>
		<p><label for="select_element">Select Element:</label><br>
			<select name="select_element"><optgroup label="Option Group 1"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup><optgroup label="Option Group 2"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup></select></p>
		<p><label for="radio_buttons">Radio Buttons:</label><br>
			<input class="radio" name="radio_button" type="radio" value="radio_1"> Radio 1<br>
			<input class="radio" name="radio_button" type="radio" value="radio_2"> Radio 2<br>
			<input class="radio" name="radio_button" type="radio" value="radio_3"> Radio 3</p>
		<p><label for="checkboxes">Checkboxes:</label><br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_1"> Radio 1<br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_2"> Radio 2<br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_3"> Radio 3</p>
		<p><label for="password">Password:</label><br>
			<input class="password" name="password" type="password"></p>
		<p><label for="file">File Input:</label><br>
			<input class="file" name="file" type="file"></p>
		<p><input class="button" type="reset" value="Clear"><input class="button" type="submit" value="Submit"></p>
	</form>
</fieldset>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="tables">Tables</h2>
<p>&nbsp;</p>
<table cellpadding="0" cellspacing="0">
	<tbody>
		<tr>
			<th>Table Header 1</th>
			<th>Table Header 2</th>
			<th>Table Header 3</th>
		</tr>
		<tr>
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
		<tr class="even">
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
		<tr>
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
	</tbody>
</table>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="misc">Misc Stuff - abbr, acronym, pre, code, sub, sup, etc.</h2>
<p>&nbsp;</p>
<p>Lorem <sup>superscript</sup> dolor <sub>subscript</sub> amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. <cite>cite</cite>. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<pre></pre>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<blockquote>"This stylesheet is going to help so freaking much." -Blockquote</blockquote>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small> <!-- End of Sample Content --></p>
<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/10-global/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesmärgid</h2>
		<p>Valitsusliidu eesmärk on viia Eesti hariduse Põhjamaade tipptasemele – meie eesmärk on haritud rahvas ja edukas Eesti. Hea haridus tähendab inimese jaoks suuremat palka, paremat kaitset töötuse vastu ja suuremat pensioni tulevikus.</p>
	</div>
	<div class="main">
		<ul>
			<li class="has-bullet">Haridustee katkestajate osakaalu vähenemine 11%ni vanusegrupis 18–24 (põhihariduse või madalama haridustasemega õpinguid mittejätkavad noored)</li>
			<li class="has-bullet">Test test test</li>
			<li class="has-bullet">Noorte õpetajate (kuni 30-aaastaste) osakaalu kasv üldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30–34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>Täiskasvanute (25–64-aastaste) elukestvas õppes osalemise määra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul>
	</div>
</div>
<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
			<p class="lead">werwererweererwe<br>
				SFSF</p>
			<p>Kõik kodutarbijad ning enamik Eesti firmasid ostab hetkelFSDF</p>
			<p>SDFSsdfsfelektrit selle võrguettevõtja käest, kelle võrguga tarbija ühendatud on (näiteks Eesti Energia Jaotusvõrk või Imatra Elekter). Elektri müügihind suletud turuosa tarbijatele ning kõik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega sõltu otseselt elektribörsil kujunevast hinnast.</p>
		</div>
		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
<div class="static-module-3-2 clearfix">
	<h2>Küsimused ja Vastused</h2>
	<div class="col col-1">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-2">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-3 last">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
</div>
<div id="static-module-5">
	<div class="main">
		<div class="main-inner">
			<h2>Valitsuse tegevus</h2>
			<h3>Igale lapsele lastehoiuteenuse ja kvaliteetse alushariduse omandamise võimalus</h3>
			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>
			<div class="row">Vähendades erinevusi kooliminejate ettevalmistuses väldime hilisemat haridustee katkemist.</div>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<div class="row">Lapsekeskse lastehoiuteenuse rakendamiseks seame pikaajaliseks sihiks õpetajate (sh eripedagoogide) arvu suurendamise lasteaialapse kohta.</div>
			<h3>Kaasaegsem ja kvaliteetsem üldharidus</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Õpetajakutse väärtustamine, et õpetajateks saaksid parimad</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Mõistliku koolivõrgu kujundamine</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Vähemusrahvustest õpilaste edukas lõimimine kvaliteetset haridust andvasse haridus- süsteemi, eesti keele õpe kõigile</h3>
			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>
			<h3>Test</h3>
			<div class="row">Test.</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
<div class="static static-read-more">
	<div class="container-12">
		<div class="grid-12">
			<h2>Loe ja vaata lisaks</h2>
		</div>
	</div>
	<div class="container-12">
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>
					Alusdokumendid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul>
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul>
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!-- Sample Content to Plugin to Template --></p>
<h2>CSS Basic Elements</h2>
<p>The purpose of this HTML is to help determine what default settings are with CSS and to make sure that all possible HTML Elements are included in this HTML so as to not miss any possible Elements when designing a site.</p>
<p><img alt="" longdesc="Yellow flowers" src="/sites/default/files/content-editors/flower.png" style="width: 294px; height: 292px;" title="Yellow flowers"></p>
<hr><h2>&nbsp;</h2>
<h2 id="headings">Headings</h2>
<p>&nbsp;</p>
<h2><span style="font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 20px; line-height: 24px;">Heading 2</span></h2>
<h3><span style="color: rgb(189, 71, 50); font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 18px; line-height: 22px;">Heading 3</span></h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p><small><a href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="paragraph">Links with icons and metadata</h2>
<p>&nbsp;</p>
<p>Lorem ipsum dolor sit amet, <a href="#" title="test link">link to anchor</a>&nbsp;adipiscing elit. Nullam <a href="/sites/default/files/elfinder/article_files/2006-03-30_km_sissejuhatus.pdf" class=" icon-internal icon-pdf">link to pdf</a> convallis est. Quisque aliquam. Donec faucibus. Nunc <a href="/sites/default/files/content-editors/raamistik-2011.odt" class=" icon-internal icon-odt">link to doc</a><span class="file-enrichments"> (254 KB)</span> iaculis suscipit <a href="http://mekaia.com" class=" icon-external icon-com">external link</a>.</p>
<p>&nbsp;</p>
<p>Lets test a Flash element embed:</p>
<p><object height="315" width="420"><param name="movie" value="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3"><param name="allowFullScreen" value="true"><param name="allowscriptaccess" value="always"><embed allowfullscreen="true" allowscriptaccess="always" height="315" src="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3" type="application/x-shockwave-flash" width="420"></embed></object></p>
<p>Lets test an iframe:</p>
<p><iframe allowfullscreen="" frameborder="0" height="315" src="//www.youtube.com/embed/uKQYehm68m0" width="420"></iframe></p>
<p>&nbsp;</p>
<div class="hr">&nbsp;</div>
<h2 id="list_types">List Types</h2>
<h3>&nbsp;</h3>
<h3>Ordered List</h3>
<ol><li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ol><h3>Unordered List</h3>
<ul><li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ul><h3>Unordered List from design</h3>
<ul style="width: 540px;"><li>Eesti koost&ouml;&ouml; P&otilde;hjala ja Balti riikide ametiasutustega finantsj&auml;relevalve vallas on olnud t&otilde;hus.</li>
	<li>Paljud regiooni maad ei kuulu euroalasse:
		<ul><li>Eesti koost&ouml;&ouml; P&otilde;hjala ja Balti riikide ametiasutustega finantsj&auml;relevalve vallas on olnud t&otilde;hus.</li>
			<li>Paljud regiooni maad ei kuulu euroalasse</li>
		</ul></li>
	<li>&Uuml;htse pangandusj&auml;relevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koost&ouml;&ouml; ja j&auml;relevalve kvaliteet.</li>
	<li>&Uuml;htse pangandusj&auml;relevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koost&ouml;&ouml; ja j&auml;relevalve kvaliteet.</li>
</ul><hr><h2>&nbsp;</h2>
<h2 id="form_elements">Fieldsets, Legends, and Form Elements</h2>
<p>&nbsp;</p>
<fieldset><legend>Legend</legend>
	<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus.</p>
	<form>
		<h2>Form Element</h2>
		<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui.</p>
		<p><label for="text_field">Text Field:</label><br><input id="text_field" type="text"></p>
		<p><label for="text_area">Text Area:</label><br><textarea id="text_area"></textarea></p>
		<p><label for="select_element">Select Element:</label><br><select name="select_element"><optgroup label="Option Group 1"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup><optgroup label="Option Group 2"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup></select></p>
		<p><label for="radio_buttons">Radio Buttons:</label><br><input class="radio" name="radio_button" type="radio" value="radio_1"> Radio 1<br><input class="radio" name="radio_button" type="radio" value="radio_2"> Radio 2<br><input class="radio" name="radio_button" type="radio" value="radio_3"> Radio 3</p>
		<p><label for="checkboxes">Checkboxes:</label><br><input class="checkbox" name="checkboxes" type="checkbox" value="check_1"> Radio 1<br><input class="checkbox" name="checkboxes" type="checkbox" value="check_2"> Radio 2<br><input class="checkbox" name="checkboxes" type="checkbox" value="check_3"> Radio 3</p>
		<p><label for="password">Password:</label><br><input class="password" name="password" type="password"></p>
		<p><label for="file">File Input:</label><br><input class="file" name="file" type="file"></p>
		<p><input class="button" type="reset" value="Clear"><input class="button" type="submit" value="Submit"></p>
	</form>
</fieldset><p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="tables">Tables</h2>
<p>&nbsp;</p>
<table cellpadding="0" cellspacing="0"><tbody><tr><th>Table Header 1</th>
			<th>Table Header 2</th>
			<th>Table Header 3</th>
		</tr><tr><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr><tr class="even"><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr><tr><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr></tbody></table><p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="misc">Misc Stuff - abbr, acronym, pre, code, sub, sup, etc.</h2>
<p>&nbsp;</p>
<p>Lorem <sup>superscript</sup> dolor <sub>subscript</sub> amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. <cite>cite</cite>. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<pre></pre>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<blockquote>"This stylesheet is going to help so freaking much." -Blockquote</blockquote>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small> <!-- End of Sample Content --></p>
<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/10-global/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesm&auml;rgid</h2>
		<p>Valitsusliidu eesm&auml;rk on viia Eesti hariduse P&otilde;hjamaade tipptasemele &ndash; meie eesm&auml;rk on haritud rahvas ja edukas Eesti. Hea haridus t&auml;hendab inimese jaoks suuremat palka, paremat kaitset t&ouml;&ouml;tuse vastu ja suuremat pensioni tulevikus.</p>
	</div>
	<div class="main">
		<ul><li class="has-bullet">Haridustee katkestajate osakaalu v&auml;henemine 11%ni vanusegrupis 18&ndash;24 (p&otilde;hihariduse v&otilde;i madalama haridustasemega &otilde;pinguid mittej&auml;tkavad noored)</li>
			<li class="has-bullet">Test test test</li>
			<li class="has-bullet">Noorte &otilde;petajate (kuni 30-aaastaste) osakaalu kasv &uuml;ldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30&ndash;34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>T&auml;iskasvanute (25&ndash;64-aastaste) elukestvas &otilde;ppes osalemise m&auml;&auml;ra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul></div>
</div>
<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast &ndash; suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See t&auml;hendab, et Eesti vabatarbijatel on &otilde;igus ja kohustus valida endale elektrienergia m&uuml;&uuml;ja. Vabatarbijad on ettev&otilde;tted, mis tarbivad &uuml;hes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
			<p class="lead">werwererweererwe<br>
				SFSF</p>
			<p>K&otilde;ik kodutarbijad ning enamik Eesti firmasid ostab hetkelFSDF</p>
			<p>SDFSsdfsfelektrit selle v&otilde;rguettev&otilde;tja k&auml;est, kelle v&otilde;rguga tarbija &uuml;hendatud on (n&auml;iteks Eesti Energia Jaotusv&otilde;rk v&otilde;i Imatra Elekter). Elektri m&uuml;&uuml;gihind suletud turuosa tarbijatele ning k&otilde;ik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega s&otilde;ltu otseselt elektrib&ouml;rsil kujunevast hinnast.</p>
		</div>
		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast &ndash; suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See t&auml;hendab, et Eesti vabatarbijatel on &otilde;igus ja kohustus valida endale elektrienergia m&uuml;&uuml;ja. Vabatarbijad on ettev&otilde;tted, mis tarbivad &uuml;hes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
<div class="static-module-3-2 clearfix">
	<h2>K&uuml;simused ja Vastused</h2>
	<div class="col col-1">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-2">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-3 last">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
</div>
<div id="static-module-5">
	<div class="main">
		<div class="main-inner">
			<h2>Valitsuse tegevus</h2>
			<h3>Igale lapsele lastehoiuteenuse ja kvaliteetse alushariduse omandamise v&otilde;imalus</h3>
			<div class="row">Seame eesm&auml;rgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides v&auml;hemalt 95% lastest. J&auml;tkame lasteaiakohtade loomist ja lastehoiuv&otilde;imaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide m&uuml;&uuml;gist laekuvate vahendite toel.</div>
			<div class="row">V&auml;hendades erinevusi kooliminejate ettevalmistuses v&auml;ldime hilisemat haridustee katkemist.</div>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<div class="row">Lapsekeskse lastehoiuteenuse rakendamiseks seame pikaajaliseks sihiks &otilde;petajate (sh eripedagoogide) arvu suurendamise lasteaialapse kohta.</div>
			<h3>Kaasaegsem ja kvaliteetsem &uuml;ldharidus</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>&Otilde;petajakutse v&auml;&auml;rtustamine, et &otilde;petajateks saaksid parimad</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>M&otilde;istliku kooliv&otilde;rgu kujundamine</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>V&auml;hemusrahvustest &otilde;pilaste edukas l&otilde;imimine kvaliteetset haridust andvasse haridus- s&uuml;steemi, eesti keele &otilde;pe k&otilde;igile</h3>
			<div class="row">Seame eesm&auml;rgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides v&auml;hemalt 95% lastest. J&auml;tkame lasteaiakohtade loomist ja lastehoiuv&otilde;imaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide m&uuml;&uuml;gist laekuvate vahendite toel.</div>
			<h3>Test</h3>
			<div class="row">Test.</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
<div class="static static-read-more">
	<div class="container-12">
		<div class="grid-12">
			<h2>Loe ja vaata lisaks</h2>
		</div>
	</div>
	<div class="container-12">
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>
					Alusdokumendid</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul><li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul><h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eeln&otilde;ud</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul><li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul><h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eeln&otilde;ud</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 1431,
        'display' => 1,
        'description' => '',
        'uid' => 1,
        'filename' => 'test.pdf',
        'uri' => 'public://elfinder/article_files/test.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 7380,
        'status' => 1,
        'timestamp' => 1384528976,
        'origname' => 'test.pdf',
        'uuid' => '9cb8cc38-775c-4f9b-a74c-ce8141b7f352',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_links' => array(),
  'field_gallery' => array(
    'und' => array(
      0 => array(
        'target_id' => 1132,
      ),
    ),
  ),
  'field_subject' => array(
    'und' => array(
      0 => array(
        'tid' => 127,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130416,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-04-16 13:36:14 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Important Topic test',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'fc1955ff-e2f7-4568-ae97-78dc5e69522a',
  'type' => 'important_announcements',
  'language' => 'en',
  'created' => 1384439293,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'cb5e90b8-f9ad-478e-be6f-46c424593778',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Auctor tortor ac habitasse cursus scelerisque dolor augue placerat cras, urna sed elit augue odio augue. Odio magna nec pid dignissim augue natoque in. Odio cum scelerisque est mauris auctor elementum.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Auctor tortor ac habitasse cursus scelerisque dolor augue placerat cras, urna sed elit augue odio augue. Odio magna nec pid dignissim augue natoque in. Odio cum scelerisque est mauris auctor elementum.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_wallpaper' => array(
    'und' => array(
      0 => array(
        'fid' => 1425,
        'alt' => '',
        'title' => '',
        'width' => 325,
        'height' => 200,
        'uid' => 1,
        'filename' => 'hand.png',
        'uri' => 'public://important-announcements-wallpapers/hand_0.png',
        'filemime' => 'image/png',
        'filesize' => 47895,
        'status' => 1,
        'timestamp' => 1384439293,
        'origname' => 'hand.png',
        'uuid' => '4753b066-ed41-4259-8c3f-d48abbb454e0',
        'rdf_mapping' => array(),
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
  'date' => '2013-11-14 16:28:13 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test article',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e584d7fa-df3f-4f58-b973-d29a084e2de3',
  'type' => 'article',
  'language' => 'en',
  'created' => 1367305254,
  'tnid' => 139,
  'translate' => 0,
  'rh_action' => -1,
  'rh_redirect' => '',
  'rh_redirect_response' => 301,
  'uuid' => 'cc30ebea-3de9-42d3-9ef4-b0d58573234b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><!-- Sample Content to Plugin to Template --></p>
<h2>CSS Basic Elements</h2>
<p>The purpose of this HTML is to help determine what default settings are with CSS and to make sure that all possible HTML Elements are included in this HTML so as to not miss any possible Elements when designing a site.</p>
<p><img alt="" longdesc="Yellow flowers" src="/sites/default/files/content-editors/flower.png" style="width: 294px; height: 292px;" title="Yellow flowers"></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="headings">Headings</h2>
<p>&nbsp;</p>
<h2><span style="font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 20px; line-height: 24px;">Heading 2</span></h2>
<h3><span style="color: rgb(189, 71, 50); font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 18px; line-height: 22px;">Heading 3</span></h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p><small><a href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="paragraph">Links with icons and metadata</h2>
<p>&nbsp;</p>
<p>Lorem ipsum dolor sit amet, <a href="#" title="test link">link to anchor</a>&nbsp;adipiscing elit. Nullam <a href="/sites/default/files/elfinder/article_files/2006-03-30_km_sissejuhatus.pdf">link to pdf</a> convallis est. Quisque aliquam. Donec faucibus. Nunc <a href="/sites/default/files/content-editors/raamistik-2011.odt">link to doc</a> iaculis suscipit <a href="http://mekaia.com">external link</a>.</p>
<p>&nbsp;</p>
<p>Lets test a Flash element embed:</p>
<p><object height="315" width="420"><param name="movie" value="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3"><param name="allowFullScreen" value="true"><param name="allowscriptaccess" value="always"><embed allowfullscreen="true" allowscriptaccess="always" height="315" src="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3" type="application/x-shockwave-flash" width="420"></object></p>
<p>Lets test an iframe:</p>
<p><iframe allowfullscreen="" frameborder="0" height="315" src="//www.youtube.com/embed/uKQYehm68m0" width="420"></iframe></p>
<p>&nbsp;</p>
<div class="hr">&nbsp;</div>
<h2 id="list_types">List Types</h2>
<h3>&nbsp;</h3>
<h3>Ordered List</h3>
<ol>
	<li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ol>
<h3>Unordered List</h3>
<ul>
	<li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ul>
<h3>Unordered List from design</h3>
<ul style="width: 540px;">
	<li>Eesti koostöö Põhjala ja Balti riikide ametiasutustega finantsjärelevalve vallas on olnud tõhus.</li>
	<li>Paljud regiooni maad ei kuulu euroalasse:
		<ul>
			<li>Eesti koostöö Põhjala ja Balti riikide ametiasutustega finantsjärelevalve vallas on olnud tõhus.</li>
			<li>Paljud regiooni maad ei kuulu euroalasse</li>
		</ul>
	</li>
	<li>Ühtse pangandusjärelevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koostöö ja järelevalve kvaliteet.</li>
	<li>Ühtse pangandusjärelevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koostöö ja järelevalve kvaliteet.</li>
</ul>
<hr>
<h2>&nbsp;</h2>
<h2 id="form_elements">Fieldsets, Legends, and Form Elements</h2>
<p>&nbsp;</p>
<fieldset><legend>Legend</legend>
	<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus.</p>
	<form>
		<h2>Form Element</h2>
		<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui.</p>
		<p><label for="text_field">Text Field:</label><br>
			<input id="text_field" type="text"></p>
		<p><label for="text_area">Text Area:</label><br>
			<textarea id="text_area"></textarea></p>
		<p><label for="select_element">Select Element:</label><br>
			<select name="select_element"><optgroup label="Option Group 1"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup><optgroup label="Option Group 2"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup></select></p>
		<p><label for="radio_buttons">Radio Buttons:</label><br>
			<input class="radio" name="radio_button" type="radio" value="radio_1"> Radio 1<br>
			<input class="radio" name="radio_button" type="radio" value="radio_2"> Radio 2<br>
			<input class="radio" name="radio_button" type="radio" value="radio_3"> Radio 3</p>
		<p><label for="checkboxes">Checkboxes:</label><br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_1"> Radio 1<br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_2"> Radio 2<br>
			<input class="checkbox" name="checkboxes" type="checkbox" value="check_3"> Radio 3</p>
		<p><label for="password">Password:</label><br>
			<input class="password" name="password" type="password"></p>
		<p><label for="file">File Input:</label><br>
			<input class="file" name="file" type="file"></p>
		<p><input class="button" type="reset" value="Clear"><input class="button" type="submit" value="Submit"></p>
	</form>
</fieldset>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="tables">Tables</h2>
<p>&nbsp;</p>
<table cellpadding="0" cellspacing="0">
	<tbody>
		<tr>
			<th>Table Header 1</th>
			<th>Table Header 2</th>
			<th>Table Header 3</th>
		</tr>
		<tr>
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
		<tr class="even">
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
		<tr>
			<td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr>
	</tbody>
</table>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr>
<h2>&nbsp;</h2>
<h2 id="misc">Misc Stuff - abbr, acronym, pre, code, sub, sup, etc.</h2>
<p>&nbsp;</p>
<p>Lorem <sup>superscript</sup> dolor <sub>subscript</sub> amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. <cite>cite</cite>. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<pre></pre>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<blockquote>"This stylesheet is going to help so freaking much." -Blockquote</blockquote>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small> <!-- End of Sample Content --></p>
<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/10-global/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesmärgid</h2>
		<p>Valitsusliidu eesmärk on viia Eesti hariduse Põhjamaade tipptasemele – meie eesmärk on haritud rahvas ja edukas Eesti. Hea haridus tähendab inimese jaoks suuremat palka, paremat kaitset töötuse vastu ja suuremat pensioni tulevikus.</p>
	</div>
	<div class="main">
		<ul>
			<li class="has-bullet">Haridustee katkestajate osakaalu vähenemine 11%ni vanusegrupis 18–24 (põhihariduse või madalama haridustasemega õpinguid mittejätkavad noored)</li>
			<li class="has-bullet">Test test test</li>
			<li class="has-bullet">Noorte õpetajate (kuni 30-aaastaste) osakaalu kasv üldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30–34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>Täiskasvanute (25–64-aastaste) elukestvas õppes osalemise määra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul>
	</div>
</div>
<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
			<p class="lead">werwererweererwe<br>
				SFSF</p>
			<p>Kõik kodutarbijad ning enamik Eesti firmasid ostab hetkelFSDF</p>
			<p>SDFSsdfsfelektrit selle võrguettevõtja käest, kelle võrguga tarbija ühendatud on (näiteks Eesti Energia Jaotusvõrk või Imatra Elekter). Elektri müügihind suletud turuosa tarbijatele ning kõik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega sõltu otseselt elektribörsil kujunevast hinnast.</p>
		</div>
		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
<div class="static-module-3-2 clearfix">
	<h2>Küsimused ja Vastused</h2>
	<div class="col col-1">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-2">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-3 last">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>
		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
</div>
<div id="static-module-5">
	<div class="main">
		<div class="main-inner">
			<h2>Valitsuse tegevus</h2>
			<h3>Igale lapsele lastehoiuteenuse ja kvaliteetse alushariduse omandamise võimalus</h3>
			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>
			<div class="row">Vähendades erinevusi kooliminejate ettevalmistuses väldime hilisemat haridustee katkemist.</div>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<div class="row">Lapsekeskse lastehoiuteenuse rakendamiseks seame pikaajaliseks sihiks õpetajate (sh eripedagoogide) arvu suurendamise lasteaialapse kohta.</div>
			<h3>Kaasaegsem ja kvaliteetsem üldharidus</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Õpetajakutse väärtustamine, et õpetajateks saaksid parimad</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Mõistliku koolivõrgu kujundamine</h3>
			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>
			<h3>Vähemusrahvustest õpilaste edukas lõimimine kvaliteetset haridust andvasse haridus- süsteemi, eesti keele õpe kõigile</h3>
			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>
			<h3>Test</h3>
			<div class="row">Test.</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
<div class="static static-read-more">
	<div class="container-12">
		<div class="grid-12">
			<h2>Loe ja vaata lisaks</h2>
		</div>
	</div>
	<div class="container-12">
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>
					Alusdokumendid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul>
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul>
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>
				<ul>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest lähemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!-- Sample Content to Plugin to Template --></p>
<h2>CSS Basic Elements</h2>
<p>The purpose of this HTML is to help determine what default settings are with CSS and to make sure that all possible HTML Elements are included in this HTML so as to not miss any possible Elements when designing a site.</p>
<p><img alt="" longdesc="Yellow flowers" src="/sites/default/files/content-editors/flower.png" style="width: 294px; height: 292px;" title="Yellow flowers"></p>
<hr><h2>&nbsp;</h2>
<h2 id="headings">Headings</h2>
<p>&nbsp;</p>
<h2><span style="font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 20px; line-height: 24px;">Heading 2</span></h2>
<h3><span style="color: rgb(189, 71, 50); font-family: Museo300, Tahoma, Verdana, Segoe, sans-serif; font-size: 18px; line-height: 22px;">Heading 3</span></h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p><small><a href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="paragraph">Links with icons and metadata</h2>
<p>&nbsp;</p>
<p>Lorem ipsum dolor sit amet, <a href="#" title="test link">link to anchor</a>&nbsp;adipiscing elit. Nullam <a href="/sites/default/files/elfinder/article_files/2006-03-30_km_sissejuhatus.pdf" class=" icon-internal icon-pdf">link to pdf</a> convallis est. Quisque aliquam. Donec faucibus. Nunc <a href="/sites/default/files/content-editors/raamistik-2011.odt" class=" icon-internal icon-odt">link to doc</a><span class="file-enrichments"> (254 KB)</span> iaculis suscipit <a href="http://mekaia.com" class=" icon-external icon-com">external link</a>.</p>
<p>&nbsp;</p>
<p>Lets test a Flash element embed:</p>
<p><object height="315" width="420"><param name="movie" value="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3"><param name="allowFullScreen" value="true"><param name="allowscriptaccess" value="always"><embed allowfullscreen="true" allowscriptaccess="always" height="315" src="//www.youtube.com/v/uKQYehm68m0?hl=en_US&amp;version=3" type="application/x-shockwave-flash" width="420"></embed></object></p>
<p>Lets test an iframe:</p>
<p><iframe allowfullscreen="" frameborder="0" height="315" src="//www.youtube.com/embed/uKQYehm68m0" width="420"></iframe></p>
<p>&nbsp;</p>
<div class="hr">&nbsp;</div>
<h2 id="list_types">List Types</h2>
<h3>&nbsp;</h3>
<h3>Ordered List</h3>
<ol><li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ol><h3>Unordered List</h3>
<ul><li>List Item 1</li>
	<li>List Item 2</li>
	<li>List Item 3</li>
</ul><h3>Unordered List from design</h3>
<ul style="width: 540px;"><li>Eesti koost&ouml;&ouml; P&otilde;hjala ja Balti riikide ametiasutustega finantsj&auml;relevalve vallas on olnud t&otilde;hus.</li>
	<li>Paljud regiooni maad ei kuulu euroalasse:
		<ul><li>Eesti koost&ouml;&ouml; P&otilde;hjala ja Balti riikide ametiasutustega finantsj&auml;relevalve vallas on olnud t&otilde;hus.</li>
			<li>Paljud regiooni maad ei kuulu euroalasse</li>
		</ul></li>
	<li>&Uuml;htse pangandusj&auml;relevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koost&ouml;&ouml; ja j&auml;relevalve kvaliteet.</li>
	<li>&Uuml;htse pangandusj&auml;relevalve loomisel Euroopa Keskpanga juurde ei tohi halveneda senine koost&ouml;&ouml; ja j&auml;relevalve kvaliteet.</li>
</ul><hr><h2>&nbsp;</h2>
<h2 id="form_elements">Fieldsets, Legends, and Form Elements</h2>
<p>&nbsp;</p>
<fieldset><legend>Legend</legend>
	<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus.</p>
	<form>
		<h2>Form Element</h2>
		<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui.</p>
		<p><label for="text_field">Text Field:</label><br><input id="text_field" type="text"></p>
		<p><label for="text_area">Text Area:</label><br><textarea id="text_area"></textarea></p>
		<p><label for="select_element">Select Element:</label><br><select name="select_element"><optgroup label="Option Group 1"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup><optgroup label="Option Group 2"><option value="1">Option 1</option><option value="2">Option 2</option><option value="3">Option 3</option></optgroup></select></p>
		<p><label for="radio_buttons">Radio Buttons:</label><br><input class="radio" name="radio_button" type="radio" value="radio_1"> Radio 1<br><input class="radio" name="radio_button" type="radio" value="radio_2"> Radio 2<br><input class="radio" name="radio_button" type="radio" value="radio_3"> Radio 3</p>
		<p><label for="checkboxes">Checkboxes:</label><br><input class="checkbox" name="checkboxes" type="checkbox" value="check_1"> Radio 1<br><input class="checkbox" name="checkboxes" type="checkbox" value="check_2"> Radio 2<br><input class="checkbox" name="checkboxes" type="checkbox" value="check_3"> Radio 3</p>
		<p><label for="password">Password:</label><br><input class="password" name="password" type="password"></p>
		<p><label for="file">File Input:</label><br><input class="file" name="file" type="file"></p>
		<p><input class="button" type="reset" value="Clear"><input class="button" type="submit" value="Submit"></p>
	</form>
</fieldset><p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="tables">Tables</h2>
<p>&nbsp;</p>
<table cellpadding="0" cellspacing="0"><tbody><tr><th>Table Header 1</th>
			<th>Table Header 2</th>
			<th>Table Header 3</th>
		</tr><tr><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr><tr class="even"><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr><tr><td>Division 1</td>
			<td>Division 2</td>
			<td>Division 3</td>
		</tr></tbody></table><p><small><a class="icon-internal" href="#wrapper">[top]</a></small></p>
<hr><h2>&nbsp;</h2>
<h2 id="misc">Misc Stuff - abbr, acronym, pre, code, sub, sup, etc.</h2>
<p>&nbsp;</p>
<p>Lorem <sup>superscript</sup> dolor <sub>subscript</sub> amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. <cite>cite</cite>. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<pre></pre>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nullam dignissim convallis est. Quisque aliquam. Donec faucibus. Nunc iaculis suscipit dui. Nam sit amet sem. Aliquam libero nisi, imperdiet at, tincidunt nec, gravida vehicula, nisl. Praesent mattis, massa quis luctus fermentum, turpis mi volutpat justo, eu volutpat enim diam eget metus. Maecenas ornare tortor. Donec sed tellus eget sapien fringilla nonummy. <acronym title="National Basketball Association">NBA</acronym> Mauris a ante. Suspendisse quam sem, consequat at, commodo vitae, feugiat in, nunc. Morbi imperdiet augue quis tellus.</p>
<blockquote>"This stylesheet is going to help so freaking much." -Blockquote</blockquote>
<p><small><a class="icon-internal" href="#wrapper">[top]</a></small> <!-- End of Sample Content --></p>
<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/10-global/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesm&auml;rgid</h2>
		<p>Valitsusliidu eesm&auml;rk on viia Eesti hariduse P&otilde;hjamaade tipptasemele &ndash; meie eesm&auml;rk on haritud rahvas ja edukas Eesti. Hea haridus t&auml;hendab inimese jaoks suuremat palka, paremat kaitset t&ouml;&ouml;tuse vastu ja suuremat pensioni tulevikus.</p>
	</div>
	<div class="main">
		<ul><li class="has-bullet">Haridustee katkestajate osakaalu v&auml;henemine 11%ni vanusegrupis 18&ndash;24 (p&otilde;hihariduse v&otilde;i madalama haridustasemega &otilde;pinguid mittej&auml;tkavad noored)</li>
			<li class="has-bullet">Test test test</li>
			<li class="has-bullet">Noorte &otilde;petajate (kuni 30-aaastaste) osakaalu kasv &uuml;ldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30&ndash;34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>T&auml;iskasvanute (25&ndash;64-aastaste) elukestvas &otilde;ppes osalemise m&auml;&auml;ra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul></div>
</div>
<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast &ndash; suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See t&auml;hendab, et Eesti vabatarbijatel on &otilde;igus ja kohustus valida endale elektrienergia m&uuml;&uuml;ja. Vabatarbijad on ettev&otilde;tted, mis tarbivad &uuml;hes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
			<p class="lead">werwererweererwe<br>
				SFSF</p>
			<p>K&otilde;ik kodutarbijad ning enamik Eesti firmasid ostab hetkelFSDF</p>
			<p>SDFSsdfsfelektrit selle v&otilde;rguettev&otilde;tja k&auml;est, kelle v&otilde;rguga tarbija &uuml;hendatud on (n&auml;iteks Eesti Energia Jaotusv&otilde;rk v&otilde;i Imatra Elekter). Elektri m&uuml;&uuml;gihind suletud turuosa tarbijatele ning k&otilde;ik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega s&otilde;ltu otseselt elektrib&ouml;rsil kujunevast hinnast.</p>
		</div>
		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast &ndash; suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See t&auml;hendab, et Eesti vabatarbijatel on &otilde;igus ja kohustus valida endale elektrienergia m&uuml;&uuml;ja. Vabatarbijad on ettev&otilde;tted, mis tarbivad &uuml;hes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
<div class="static-module-3-2 clearfix">
	<h2>K&uuml;simused ja Vastused</h2>
	<div class="col col-1">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-2">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
	<div class="col col-3 last">
		<h3>Kas ma v&otilde;in j&auml;&auml;da elektrita, kui midagi ette ei v&otilde;ta?</h3>
		<p>Ei - &uuml;hegi kodu ega ettev&otilde;tte varustamine elektriga ei katke hetkekski ning elektrim&uuml;&uuml;jat saab iga&uuml;ks vahetada ka p&auml;rast turu avanemist kasv&otilde;i igal kuul. Neid tarbijad, kes ei soovi v&otilde;i ei j&otilde;ua enne 2013. aastat elektrim&uuml;&uuml;jat valida, varustab elektrienergiaga asjaomase piirkonna v&otilde;rguettev&otilde;tja &uuml;ldteenuse raames. See t&auml;hendab, et hinna aluseks on eelmise kuu kaalutud keskmine b&ouml;rsihind, millele lisandub ettev&otilde;tte m&otilde;istlik kasum. Ettev&otilde;tete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
</div>
<div id="static-module-5">
	<div class="main">
		<div class="main-inner">
			<h2>Valitsuse tegevus</h2>
			<h3>Igale lapsele lastehoiuteenuse ja kvaliteetse alushariduse omandamise v&otilde;imalus</h3>
			<div class="row">Seame eesm&auml;rgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides v&auml;hemalt 95% lastest. J&auml;tkame lasteaiakohtade loomist ja lastehoiuv&otilde;imaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide m&uuml;&uuml;gist laekuvate vahendite toel.</div>
			<div class="row">V&auml;hendades erinevusi kooliminejate ettevalmistuses v&auml;ldime hilisemat haridustee katkemist.</div>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<div class="row">Lapsekeskse lastehoiuteenuse rakendamiseks seame pikaajaliseks sihiks &otilde;petajate (sh eripedagoogide) arvu suurendamise lasteaialapse kohta.</div>
			<h3>Kaasaegsem ja kvaliteetsem &uuml;ldharidus</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>&Otilde;petajakutse v&auml;&auml;rtustamine, et &otilde;petajateks saaksid parimad</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>M&otilde;istliku kooliv&otilde;rgu kujundamine</h3>
			<div class="row">Alus- ja p&otilde;hihariduses peab keskenduma &otilde;ppimisoskuse, iseseisva m&otilde;tlemise, loovuse ja &otilde;pijulguse kujundamisele. &Otilde;ppe ja kasvatusalal on oluline v&auml;&auml;rtustel p&otilde;hinev tegevus.</div>
			<h3>V&auml;hemusrahvustest &otilde;pilaste edukas l&otilde;imimine kvaliteetset haridust andvasse haridus- s&uuml;steemi, eesti keele &otilde;pe k&otilde;igile</h3>
			<div class="row">Seame eesm&auml;rgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides v&auml;hemalt 95% lastest. J&auml;tkame lasteaiakohtade loomist ja lastehoiuv&otilde;imaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide m&uuml;&uuml;gist laekuvate vahendite toel.</div>
			<h3>Test</h3>
			<div class="row">Test.</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
<div class="static static-read-more">
	<div class="container-12">
		<div class="grid-12">
			<h2>Loe ja vaata lisaks</h2>
		</div>
	</div>
	<div class="container-12">
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>
					Alusdokumendid</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul><li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul><h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eeln&otilde;ud</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>
				<ul><li><a class="icon-internal" href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a class="icon-internal" href="#">Sotsiaalministeerium</a></li>
				</ul><h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eeln&otilde;ud</span></h3>
				<ul><li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Alusharidusest l&auml;hemalt</a></li>
					<li><a class="icon-internal" href="#">Lapsehoiuteenusest l&auml;hemalt</a></li>
				</ul></div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 411,
        'display' => 1,
        'description' => '',
        'uid' => 1,
        'filename' => '2013-koenigsegg-agera-static-8-1920x1200.jpg',
        'uri' => 'public://elfinder/article_files/2013-koenigsegg-agera-static-8-1920x1200.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 297302,
        'status' => 1,
        'timestamp' => 1373551583,
        'origname' => '2013-koenigsegg-agera-static-8-1920x1200.jpg',
        'uuid' => '0624885c-5dba-4b31-aea7-decfca5e9624',
        'rdf_mapping' => array(),
      ),
      1 => array(
        'fid' => 412,
        'display' => 1,
        'description' => '',
        'uid' => 1,
        'filename' => 'test2.pdf',
        'uri' => 'public://elfinder/article_files/test2.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 7380,
        'status' => 1,
        'timestamp' => 1373551583,
        'origname' => 'test2.pdf',
        'uuid' => 'df45b29b-3a0f-4605-866a-a728cc1f29a2',
        'rdf_mapping' => array(),
      ),
      2 => array(
        'fid' => 413,
        'display' => 1,
        'description' => '',
        'uid' => 1,
        'filename' => 'test1.txt',
        'uri' => 'public://elfinder/article_files/test1.txt',
        'filemime' => 'text/plain',
        'filesize' => 5,
        'status' => 1,
        'timestamp' => 1373551583,
        'origname' => 'test1.txt',
        'uuid' => '5a993b1b-7d28-42cf-bc6d-ef7231d30310',
        'rdf_mapping' => array(),
      ),
      3 => array(
        'fid' => 475,
        'display' => 1,
        'description' => '',
        'uid' => 1,
        'filename' => 'vp-ajakava-2.png',
        'uri' => 'public://elfinder/article_files/vp-ajakava-2.png',
        'filemime' => 'image/png',
        'filesize' => 92388,
        'status' => 1,
        'timestamp' => 1375188591,
        'origname' => 'vp-ajakava-2.png',
        'uuid' => '611d36b0-29ef-4509-883e-d65ca5e6ef85',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_links' => array(
    'und' => array(
      0 => array(
        'url' => 'http://eelnoud.valitsus.ee',
        'title' => 'Eelnõude infosüsteem',
        'attributes' => array(),
      ),
    ),
  ),
  'field_gallery' => array(
    'und' => array(
      0 => array(
        'target_id' => 1131,
      ),
    ),
  ),
  'field_subject' => array(
    'und' => array(
      0 => array(
        'tid' => 127,
      ),
    ),
  ),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130430,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-04-30 10:00:54 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Ligipääsetavus',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4a5c8145-661e-4196-9653-48a662c80fb8',
  'type' => 'article',
  'language' => 'et',
  'created' => 1384341888,
  'tnid' => 1127,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd58b9012-3d6b-49de-ab4e-876ccd31a3ed',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>sisu est</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>sisu est</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20131113,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-11-13 13:24:48 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'RSS feeds',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '943ea019-b965-4747-bd89-06de8d7bdbdc',
  'type' => 'article',
  'language' => 'en',
  'created' => 1378802692,
  'tnid' => 209,
  'translate' => 0,
  'rh_action' => -1,
  'rh_redirect' => '',
  'rh_redirect_response' => 301,
  'uuid' => 'dcae2536-4c1a-4054-80f0-7c243d57e317',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>RSS is an acronym for Really Simple Syndication or Rich Site Summary. It is an XML-based method for distributing the latest news and information from a website that can be easily read by a variety of news readers or aggregators.</p>
<p><strong>Testfeed:</strong></p>
<ol id="rsseses">
	<li><a class="icon-internal" href="/en/news/1/feed">pressreleases</a>&nbsp;(based on taxonomy)</li>
</ol>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>RSS is an acronym for Really Simple Syndication or Rich Site Summary. It is an XML-based method for distributing the latest news and information from a website that can be easily read by a variety of news readers or aggregators.</p>
<p><strong>Testfeed:</strong></p>
<ol id="rsseses"><li><a class="icon-internal" href="/en/news/1/feed">pressreleases</a>&nbsp;(based on taxonomy)</li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130910,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-09-10 11:44:52 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'RSS vood',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1d850834-ab8e-4a54-927e-ac2181959e2e',
  'type' => 'article',
  'language' => 'et',
  'created' => 1369232168,
  'tnid' => 209,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'f288088c-6386-430d-a96a-54b14a067dc9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Valitsuse uudiseid, sealhulgas valitsuse pressiteateid eesti, inglise ja vene keeles, teateid valitsuse istungite kohta ning valitsuse pressikonverentside stenogramme saab tellida RSS uudistevoogudena.</p>
<p>Lisaks olemasolevatele uudistevoogudele on võimalik luua huvipakkuvate märksõnade alusel isiklikke uudisvoogusid. Märksõnaga filtreerimiseks palun sisestage see allolevasse lahtrisse. Seejärel vajutage vastaval RSS uudistevoo lingil, et uudiseid tellida. Loodud uudistevoo kaudu edastatakse ainult neid uudiseid, mis sisaldavad valitud märksõna.</p>
<p><strong>Testvood:</strong></p>
<ol id="rsseses">
	<li><a class="icon-internal" href="/et/news/1/feed">valitsuse pressiteated</a> (taksonoomiapõhine)</li>
	<li><a class="icon-internal" href="/en/gallery-rss/all/feed">valitsus.ee&nbsp;pildid</a> (galerii vaate põhjal)</li>
</ol>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Valitsuse uudiseid, sealhulgas valitsuse pressiteateid eesti, inglise ja vene keeles, teateid valitsuse istungite kohta ning valitsuse pressikonverentside stenogramme saab tellida RSS uudistevoogudena.</p>
<p>Lisaks olemasolevatele uudistevoogudele on v&otilde;imalik luua huvipakkuvate m&auml;rks&otilde;nade alusel isiklikke uudisvoogusid. M&auml;rks&otilde;naga filtreerimiseks palun sisestage see allolevasse lahtrisse. Seej&auml;rel vajutage vastaval RSS uudistevoo lingil, et uudiseid tellida. Loodud uudistevoo kaudu edastatakse ainult neid uudiseid, mis sisaldavad valitud m&auml;rks&otilde;na.</p>
<p><strong>Testvood:</strong></p>
<ol id="rsseses"><li><a class="icon-internal" href="/et/news/1/feed">valitsuse pressiteated</a> (taksonoomiap&otilde;hine)</li>
	<li><a class="icon-internal" href="/en/gallery-rss/all/feed">valitsus.ee&nbsp;pildid</a> (galerii vaate p&otilde;hjal)</li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130522,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-05-22 17:16:08 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Kolmanda taseme menüü testleht',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a052ca98-6ab9-42b7-a44b-0fe6064a8d95',
  'type' => 'article',
  'language' => 'et',
  'created' => 1373270119,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'fad535ed-d27e-473a-ba61-06e059249012',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nascetur ut placerat quis. Sociis, tortor. Ut nisi sed ut. Sit, porta aliquam amet cursus turpis a scelerisque magnis. Porta, integer, aliquam! Ultricies et? Nec tristique ultrices turpis, lectus! Facilisis. Sit eros? Adipiscing in nec rhoncus, non magna lundium ac tristique tincidunt integer penatibus aenean egestas diam cursus mauris nascetur, et dignissim. Mauris augue! Adipiscing? Massa. Nec, ac porta elementum auctor dolor mattis scelerisque rhoncus, pid massa massa aliquet, porttitor! Augue placerat cum mid? Quis? Eu, arcu pellentesque vut augue! Adipiscing urna etiam dictumst, integer habitasse habitasse! Augue! Nascetur etiam mattis augue platea placerat odio turpis! Integer nunc tristique, ut odio tincidunt, mattis nisi. Sit elementum est arcu, amet ultrices mus vel, amet, augue nisi tempor porta sed magnis risus.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Nascetur ut placerat quis. Sociis, tortor. Ut nisi sed ut. Sit, porta aliquam amet cursus turpis a scelerisque magnis. Porta, integer, aliquam! Ultricies et? Nec tristique ultrices turpis, lectus! Facilisis. Sit eros? Adipiscing in nec rhoncus, non magna lundium ac tristique tincidunt integer penatibus aenean egestas diam cursus mauris nascetur, et dignissim. Mauris augue! Adipiscing? Massa. Nec, ac porta elementum auctor dolor mattis scelerisque rhoncus, pid massa massa aliquet, porttitor! Augue placerat cum mid? Quis? Eu, arcu pellentesque vut augue! Adipiscing urna etiam dictumst, integer habitasse habitasse! Augue! Nascetur etiam mattis augue platea placerat odio turpis! Integer nunc tristique, ut odio tincidunt, mattis nisi. Sit elementum est arcu, amet ultrices mus vel, amet, augue nisi tempor porta sed magnis risus.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130708,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-07-08 10:55:19 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Subscribe to newsletter',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9d88e9c7-47a9-42ab-9699-358590da2903',
  'type' => 'article',
  'language' => 'en',
  'created' => 1378203962,
  'tnid' => 313,
  'translate' => 0,
  'rh_action' => -1,
  'rh_redirect' => '',
  'rh_redirect_response' => 301,
  'uuid' => 'fff5c243-6dfe-4e7d-a0e6-01ba74df16ed',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We also publish news as <a href="/rss-feeds" style="text-decoration: underline; color: rgb(153, 102, 204);">RSS feeds</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>We also publish news as <a href="/rss-feeds" style="text-decoration: underline; color: rgb(153, 102, 204);" class=" icon-internal">RSS feeds</a>.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_files' => array(),
  'field_links' => array(),
  'field_gallery' => array(),
  'field_subject' => array(),
  'field_content_type' => array(
    'und' => array(
      0 => array(
        'value' => 'article',
      ),
    ),
  ),
  'field_created' => array(
    'und' => array(
      0 => array(
        'value' => 20130903,
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
    'field_subject' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:subject',
      ),
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
  'date' => '2013-09-03 13:26:02 +0300',
);
  return $nodes;
}
