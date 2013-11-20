<?php
/**
 * @file
 * vp_menu.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function vp_menu_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testsisu',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '034303f2-ed58-4d57-a3dd-de82f4956de6',
  'type' => 'vp_menu_dropdown_box',
  'language' => 'et',
  'created' => 1380797472,
  'tnid' => 220,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '56e68648-040e-4361-9598-5374ef001165',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>Päevakajalised teemad</h2>
					Siia slaider?</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Testsisu</h2>
					<ul class="widget-menu">
						<li><a href="/et/uudised">Uudised</a></li>
						<li><a href="/et/galeriid">Galeriid</a></li>
						<li><a href="/et/testartikkel">Test artikkel</a></li>
						<li><a href="/et/ajalugu">Ajalugu</a></li>
						<li><a href="/et/kontakt">Kontaktid</a></li>
						<li><a href="/et/rss-vood">RSS Vood</a></li>
						<li><a href="/et/uudiskiri">Uudiskirjad</a></li>
						<li><a href="/et/eelinfo">Eelinfo</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Testsisu jätkub</h2>
					<ul class="widget-menu">
						<li><a href="/et/search/gss/test">Google Site Search</a></li>
						<li><a href="/et/videod">YouTube videod</a></li>
						<li><a href="/et/uudised/testuudis-ara-kustuta">Testuudis</a></li>
						<li><a href="/et/kolmanda-taseme-menuu-testleht">3. taseme menüü</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>P&auml;evakajalised teemad</h2>
					Siia slaider?</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Testsisu</h2>
					<ul class="widget-menu"><li><a href="/et/uudised" class=" icon-internal">Uudised</a></li>
						<li><a href="/et/galeriid" class=" icon-internal">Galeriid</a></li>
						<li><a href="/et/testartikkel" class=" icon-internal">Test artikkel</a></li>
						<li><a href="/et/ajalugu" class=" icon-internal">Ajalugu</a></li>
						<li><a href="/et/kontakt" class=" icon-internal">Kontaktid</a></li>
						<li><a href="/et/rss-vood" class=" icon-internal">RSS Vood</a></li>
						<li><a href="/et/uudiskiri" class=" icon-internal">Uudiskirjad</a></li>
						<li><a href="/et/eelinfo" class=" icon-internal">Eelinfo</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Testsisu j&auml;tkub</h2>
					<ul class="widget-menu"><li><a href="/et/search/gss/test" class=" icon-internal">Google Site Search</a></li>
						<li><a href="/et/videod" class=" icon-internal">YouTube videod</a></li>
						<li><a href="/et/uudised/testuudis-ara-kustuta" class=" icon-internal">Testuudis</a></li>
						<li><a href="/et/kolmanda-taseme-menuu-testleht" class=" icon-internal">3. taseme men&uuml;&uuml;</a></li>
					</ul></div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
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
  'date' => '2013-10-03 13:51:12 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Test content',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7438123b-d0d1-4000-8cff-617474d3ed55',
  'type' => 'vp_menu_dropdown_box',
  'language' => 'en',
  'created' => 1372425613,
  'tnid' => 220,
  'translate' => 0,
  'rh_action' => -1,
  'rh_redirect' => '',
  'rh_redirect_response' => 301,
  'uuid' => '889ad7a3-b321-4c0e-9e4b-df88bed4ca63',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>Daily topics</h2>
					Slider here?</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Test Content</h2>
					<ul class="widget-menu">
						<li><a href="/en/news">News</a></li>
						<li><a href="/en/galleries">Galleries</a></li>
						<li><a href="/en/test-content">Test article</a></li>
						<li><a href="/en/history">History</a></li>
						<li><a href="/en/contact">Contacts</a></li>
						<li><a href="/en/rss-feeds">RSS Feeds</a></li>
						<li><a href="/en/newsletter">Newsletters</a></li>
						<li><a href="/en/weekly-schedule">Weekly schedule</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Test Content 2</h2>
					<ul class="widget-menu">
						<li><a href="/en/search/gss/test">Google Site Search</a></li>
						<li><a href="/en/news/test-newsitem">Test newsitem</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>Daily topics</h2>
					Slider here?</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Test Content</h2>
					<ul class="widget-menu"><li><a href="/en/news" class=" icon-internal">News</a></li>
						<li><a href="/en/galleries" class=" icon-internal">Galleries</a></li>
						<li><a href="/en/test-content" class=" icon-internal">Test article</a></li>
						<li><a href="/en/history" class=" icon-internal">History</a></li>
						<li><a href="/en/contact" class=" icon-internal">Contacts</a></li>
						<li><a href="/en/rss-feeds" class=" icon-internal">RSS Feeds</a></li>
						<li><a href="/en/newsletter" class=" icon-internal">Newsletters</a></li>
						<li><a href="/en/weekly-schedule" class=" icon-internal">Weekly schedule</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Test Content 2</h2>
					<ul class="widget-menu"><li><a href="/en/search/gss/test" class=" icon-internal">Google Site Search</a></li>
						<li><a href="/en/news/test-newsitem" class=" icon-internal">Test newsitem</a></li>
					</ul></div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
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
  'date' => '2013-06-28 16:20:13 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Valitsussüsteem, Osalemine',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8fb37b3f-f1a0-4045-9277-4c6667adae88',
  'type' => 'vp_menu_dropdown_box',
  'language' => 'et',
  'created' => 1372425990,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'ad72ff83-31e1-4c82-9194-2781181e72a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12 has-big-column-separators">
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valitsussüsteem, Osalemine</h2>
					<div class="widget-text">
						<p>Eestis on kolm riigivõimu - seadusandlik, täidesaatev ja kohtuvõim. Nende ülesanded ja tegevused on üksteisest eraldatud, kuid nad on oma tegevuses üksteisega tihedalt seotud. Vabariigi Valitsus esindab täidesaatvat riigivõimu.</p>
					</div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Kuidas riik toimib</h2>
					<ul class="widget-menu">
						<li><a href="#">Eesti iive on positiivne</a></li>
						<li><a href="#">Eelarve on ülejäägis</a></li>
						<li><a href="#">Tööhõive on 72%</a></li>
						<li><a href="#">Noorte koolist väljalangemine on vähenenud</a></li>
						<li><a href="#">Inimesed elavad kauem</a></li>
						<li><a href="#">Ettevõtete tootlikkus on kasvanud</a></li>
						<li><a href="#">Kasvuhoonegaaside heitkogus on märkimisväärselt vähenenud</a></li>
						<li class="vertical-push"><a href="#">Kõik valitsuse eesmärgid »</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Otsused ja kaasamine</h2>
					<div class="widget-text">
						<p>Valitsus kaasab oma otsustesse need, keda otsus kõige rohkem mõjutab.</p>
					</div>
					<ul class="widget-menu">
						<li><a href="#">Majandus ja ettevõtlus, energeetika, transport</a></li>
						<li><a href="#">Pere, töö, sotsiaalkaitse, tervis</a></li>
						<li><a href="#">Haridus, teadus, infoühiskond</a></li>
						<li><a href="#">Kultuur, sport, eesti keel, lõimumine</a></li>
						<li><a href="#">Keskkond, maaelu, põllumajandus</a></li>
						<li><a href="#">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="#">Kodanike riik, valitsemine, koostöö teiste riikidega</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Kuidas saab valitsuse otsustes kaasa rääkida?</h2>
					<ul class="widget-menu">
						<li><a href="#">Valitsuse tegevusprogramm</a></li>
						<li><a href="#">Koalitsioonileping</a></li>
						<li><a href="#">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="#">Tegevusprogrammi täitmine</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12 has-big-column-separators">
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valitsuss&uuml;steem, Osalemine</h2>
					<div class="widget-text">
						<p>Eestis on kolm riigiv&otilde;imu - seadusandlik, t&auml;idesaatev ja kohtuv&otilde;im. Nende &uuml;lesanded ja tegevused on &uuml;ksteisest eraldatud, kuid nad on oma tegevuses &uuml;ksteisega tihedalt seotud. Vabariigi Valitsus esindab t&auml;idesaatvat riigiv&otilde;imu.</p>
					</div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Kuidas riik toimib</h2>
					<ul class="widget-menu"><li><a href="#">Eesti iive on positiivne</a></li>
						<li><a href="#">Eelarve on &uuml;lej&auml;&auml;gis</a></li>
						<li><a href="#">T&ouml;&ouml;h&otilde;ive on 72%</a></li>
						<li><a href="#">Noorte koolist v&auml;ljalangemine on v&auml;henenud</a></li>
						<li><a href="#">Inimesed elavad kauem</a></li>
						<li><a href="#">Ettev&otilde;tete tootlikkus on kasvanud</a></li>
						<li><a href="#">Kasvuhoonegaaside heitkogus on m&auml;rkimisv&auml;&auml;rselt v&auml;henenud</a></li>
						<li class="vertical-push"><a href="#">K&otilde;ik valitsuse eesm&auml;rgid &raquo;</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Otsused ja kaasamine</h2>
					<div class="widget-text">
						<p>Valitsus kaasab oma otsustesse need, keda otsus k&otilde;ige rohkem m&otilde;jutab.</p>
					</div>
					<ul class="widget-menu"><li><a href="#">Majandus ja ettev&otilde;tlus, energeetika, transport</a></li>
						<li><a href="#">Pere, t&ouml;&ouml;, sotsiaalkaitse, tervis</a></li>
						<li><a href="#">Haridus, teadus, info&uuml;hiskond</a></li>
						<li><a href="#">Kultuur, sport, eesti keel, l&otilde;imumine</a></li>
						<li><a href="#">Keskkond, maaelu, p&otilde;llumajandus</a></li>
						<li><a href="#">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="#">Kodanike riik, valitsemine, koost&ouml;&ouml; teiste riikidega</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Kuidas saab valitsuse otsustes kaasa r&auml;&auml;kida?</h2>
					<ul class="widget-menu"><li><a href="#">Valitsuse tegevusprogramm</a></li>
						<li><a href="#">Koalitsioonileping</a></li>
						<li><a href="#">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="#">Tegevusprogrammi t&auml;itmine</a></li>
					</ul></div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
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
  'date' => '2013-06-28 16:26:30 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Stenbocki Maja',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '82a3bb3e-bea3-4d6c-b4b3-52ab39427189',
  'type' => 'vp_menu_dropdown_box',
  'language' => 'et',
  'created' => 1371118280,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'dd9de127-c180-42ea-aff4-25d92d955b94',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>Stenbocki Maja</h2>
					<div class="widget-text">
						<p>Stenbocki maja on ehitatud 1378 ja alates 2000 on see koduks Eesti Vabariigi Valitsusele ning Riigikantseleile.</p>
						<img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/mainmenu-popup-timeline.png"></div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Majast endast</h2>
					<div class="widget-text">
						<p>Valitsus on Stenbocki maja peremees alates aastast 2000.</p>
					</div>
					<ul class="widget-menu">
						<li><a href="#">Stenbocki maja kui valitsuse kodu</a></li>
						<li><a href="#">Arhitektuurist</a></li>
						<li><a href="/en/history">Ajaloost</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tule meile külla</h2>
					<ul class="widget-menu">
						<li><a href="#">Virtuaaltuur</a></li>
						<li><a href="#">Ekskursioonid</a></li>
						<li><a href="#">Stenbocki maja maaligalerii</a></li>
						<li><a href="#">Õuemuusika kontserdid</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12">
			<div class="column grid-6">
				<div class="grid-inner">
					<h2>Stenbocki Maja</h2>
					<div class="widget-text">
						<p>Stenbocki maja on ehitatud 1378 ja alates 2000 on see koduks Eesti Vabariigi Valitsusele ning Riigikantseleile.</p>
						<img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/mainmenu-popup-timeline.png"></div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Majast endast</h2>
					<div class="widget-text">
						<p>Valitsus on Stenbocki maja peremees alates aastast 2000.</p>
					</div>
					<ul class="widget-menu"><li><a href="#">Stenbocki maja kui valitsuse kodu</a></li>
						<li><a href="#">Arhitektuurist</a></li>
						<li><a href="/en/history" class=" icon-internal">Ajaloost</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tule meile k&uuml;lla</h2>
					<ul class="widget-menu"><li><a href="#">Virtuaaltuur</a></li>
						<li><a href="#">Ekskursioonid</a></li>
						<li><a href="#">Stenbocki maja maaligalerii</a></li>
						<li><a href="#">&Otilde;uemuusika kontserdid</a></li>
					</ul></div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
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
  'date' => '2013-06-13 13:11:20 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Eesmärgid, tegevused',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '728df1f0-7747-4614-ad7e-b15c0f1e0a96',
  'type' => 'vp_menu_dropdown_box',
  'language' => 'et',
  'created' => 1371118630,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'e9322a10-3da0-43c0-b6bf-68f8c9dfc26e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12 has-big-column-separators">
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valitsuse Töö</h2>
					<div class="widget-text">
						<p>Valitsus 2015. aastaks seitse prioriteeti, 55 valdkondlikku eesmärki 18 poliitikavaldkonnas.</p>
						<img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/mainmenu-popup-graph.png"></div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Eesmärgid</h2>
					<ul class="widget-menu">
						<li><a href="#">Eesti iive on positiivne</a></li>
						<li><a href="#">Eelarve on ülejäägis</a></li>
						<li><a href="#">Tööhõive on 72%</a></li>
						<li><a href="#">Noorte koolist väljalangemine on vähenenud</a></li>
						<li><a href="#">Inimesed elavad kauem</a></li>
						<li><a href="#">Ettevõtete tootlikkus on kasvanud</a></li>
						<li><a href="#">Kasvuhoonegaaside heitkogus on märkimisväärselt vähenenud</a></li>
						<li class="vertical-push"><a href="#">Kõik valitsuse eesmärgid »</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valdkonannad</h2>
					<ul class="widget-menu">
						<li><a href="#">Majandus ja ettevõtlus, energeetika, transport</a></li>
						<li><a href="#">Pere, töö, sotsiaalkaitse, tervis</a></li>
						<li><a href="#">Haridus, teadus, infoühiskond</a></li>
						<li><a href="#">Kultuur, sport, eesti keel, lõimumine</a></li>
						<li><a href="#">Keskkond, maaelu, põllumajandus</a></li>
						<li><a href="#">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="#">Kodanike riik, valitsemine, koostöö teiste riikidega</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tegevusprogramm</h2>
					<ul class="widget-menu">
						<li><a href="#">Valitsuse tegevusprogramm</a></li>
						<li><a href="#">Koalitsioonileping</a></li>
						<li><a href="#">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="#">Tegevusprogrammi täitmine</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12 has-big-column-separators">
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valitsuse T&ouml;&ouml;</h2>
					<div class="widget-text">
						<p>Valitsus 2015. aastaks seitse prioriteeti, 55 valdkondlikku eesm&auml;rki 18 poliitikavaldkonnas.</p>
						<img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/mainmenu-popup-graph.png"></div>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Eesm&auml;rgid</h2>
					<ul class="widget-menu"><li><a href="#">Eesti iive on positiivne</a></li>
						<li><a href="#">Eelarve on &uuml;lej&auml;&auml;gis</a></li>
						<li><a href="#">T&ouml;&ouml;h&otilde;ive on 72%</a></li>
						<li><a href="#">Noorte koolist v&auml;ljalangemine on v&auml;henenud</a></li>
						<li><a href="#">Inimesed elavad kauem</a></li>
						<li><a href="#">Ettev&otilde;tete tootlikkus on kasvanud</a></li>
						<li><a href="#">Kasvuhoonegaaside heitkogus on m&auml;rkimisv&auml;&auml;rselt v&auml;henenud</a></li>
						<li class="vertical-push"><a href="#">K&otilde;ik valitsuse eesm&auml;rgid &raquo;</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valdkonannad</h2>
					<ul class="widget-menu"><li><a href="#">Majandus ja ettev&otilde;tlus, energeetika, transport</a></li>
						<li><a href="#">Pere, t&ouml;&ouml;, sotsiaalkaitse, tervis</a></li>
						<li><a href="#">Haridus, teadus, info&uuml;hiskond</a></li>
						<li><a href="#">Kultuur, sport, eesti keel, l&otilde;imumine</a></li>
						<li><a href="#">Keskkond, maaelu, p&otilde;llumajandus</a></li>
						<li><a href="#">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="#">Kodanike riik, valitsemine, koost&ouml;&ouml; teiste riikidega</a></li>
					</ul></div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tegevusprogramm</h2>
					<ul class="widget-menu"><li><a href="#">Valitsuse tegevusprogramm</a></li>
						<li><a href="#">Koalitsioonileping</a></li>
						<li><a href="#">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="#">Tegevusprogrammi t&auml;itmine</a></li>
					</ul></div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>',
        'safe_summary' => '',
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
  'date' => '2013-06-13 13:17:10 +0300',
);
  return $nodes;
}
