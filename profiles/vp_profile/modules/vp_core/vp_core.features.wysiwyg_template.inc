<?php
/**
 * @file
 * vp_core.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function vp_core_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['_read_more_block'] = array(
    'title' => '"Read more" block',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-read-more">
  <div class="container-12">
    <div class="grid-12"><h2>Loe ja vaata lisaks</h2></div>
  </div>
  <div class="container-12">
    <div class="grid-4">
      <div class="grid-inner">
        <h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>Alusdokumendid</span></h3>
        <ul>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
        </ul>
      </div>
    </div>
    <div class="grid-4">
      <div class="grid-inner">
        <h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>Ministeeriumid</span></h3>
        <ul>
          <li><a href="#">Haridus- ja Teadusministeerium</a></li>
          <li><a href="#">Sotsiaalministeerium</a></li>
        </ul>

        <h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>Eelnõud</span></h3>
        <ul>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
        </ul>
      </div>
    </div>
    <div class="grid-4">
      <div class="grid-inner">
        <h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>Ministeeriumid</span></h3>
        <ul>
          <li><a href="#">Haridus- ja Teadusministeerium</a></li>
          <li><a href="#">Sotsiaalministeerium</a></li>
        </ul>

        <h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>Eelnõud</span></h3>
        <ul>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
          <li><a href="#">Alusharidusest lähemalt</a></li>
          <li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
        </ul>
      </div>
    </div>
  </div>
</div>',
    'name' => '_read_more_block',
  );
  $templates['footer'] = array(
    'title' => 'Footer',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-footer">
	<ul>
		<li>(cc) Riigikantselei</li>
		<li>
			<ul>
				<li><a href="">Intranet</a></li>
				<li><a href="">Sisukaart</a></li>
			</ul>
		</li>
		<li><a class="rss" href="#">RSS Uudisvood</a></li>
		<li><a class="twitter" href="#">Twitter</a></li>
		<li><a class="fb" href="#">Facebook</a></li>
		<li><a class="video" href="#">Videod</a></li>
		<li><a class="newsletter" href="#">Telli uudiskiri</a></li>
	</ul>
</div>
',
    'name' => 'footer',
  );
  $templates['horizontal_spacer'] = array(
    'title' => 'Horizontal spacer',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="hr"></div>',
    'name' => 'horizontal_spacer',
  );
  $templates['important_topics_links'] = array(
    'title' => 'Important topics: links block',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-important-topics-links">
	<h2>Kiirelt kätte</h2>
	<ul>
		<li><a href="#">Valitsuse tegevusprogramm</a></li>
		<li><a href="#">Vabariigi Valitsuse seadus</a></li>
		<li><a href="#">Peaministrid ja ministrid</a></li>
	</ul>
	<div class="hr">&nbsp;</div>
	<ul>
		<li><a href="#">Valitsuse tegevusprogramm</a></li>
		<li><a href="#">Vabariigi Valitsuse seadus</a></li>
		<li><a href="#">Peaministrid ja ministrid</a></li>
	</ul>
</div>
',
    'name' => 'important_topics_links',
  );
  $templates['join_in'] = array(
    'title' => '"Join the discussion" block',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-join-in"><img alt="" class="bg" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-social-bg.png">
	<div class="static-inner">
		<h2 class="title1">Räägi kaasa Haridus-<br>
			valdkonna arendamises</h2>
		<div class="title2">
			<p>Sinu arvamus on meile väga oluline!<br>
				Kasuta ära oma võimalusi rääkida kaasa riigi asjades!</p>
		</div>
		<div class="box box-1">
			<h2 class="blue">Eelnõude infosüsteem</h2>
			<p>Sul on võimalik jälgida, millised eelnõud on praegu töös ning soovi korral saad ka oma kommentaari esitada või osaleda avalikel konsultatsioonidel.</p>
		</div>
		<div class="box box-2">
			<h2 class="green">Osalusveeb</h2>
			<div class="spacer">&nbsp;</div>
			<p>Osalusveebis osale.ee saad esitada valitsusele ideid ja ettepanekuid ning koguda allkirju oma idee toetuseks. Iga esitatud idee saab ka valitsuse poolse vastuse.</p>
		</div>
		<div class="box box-3">
			<h2>Püsi kursis</h2>
			<ul class="social-links">
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-fb.png"><a href="#">Jälgi valitsust Facebookis, jagame operatiivset infot</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-tw.png"><a href="#">Jälgi valitsust Twitteris, jagame operatiivset infot</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-yt.png"><a href="#">Värskeimad videod meie YouTube kanalis</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-fl.png"><a href="#">Uusimad fotod Flickr\'ist</a></li>
			</ul>
		</div>
	</div>
</div>
',
    'name' => 'join_in',
  );
  $templates['menu_2_type_1'] = array(
    'title' => 'Level 2 menu type 1',
    'description' => '4 columns: 1 description with image column, 3 link columns',
    'fid' => 0,
    'body' => '<div class="static static-mainmenu-popup">
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
						<li><a href="/test/test-sisu">Eesti iive on positiivne</a></li>
						<li><a href="/test/test-sisu">Eelarve on ülejäägis</a></li>
						<li><a href="/test/test-sisu">Tööhõive on 72%</a></li>
						<li><a href="/test/test-sisu">Noorte koolist väljalangemine on vähenenud</a></li>
						<li><a href="/test/test-sisu">Inimesed elavad kauem</a></li>
						<li><a href="/test/test-sisu">Ettevõtete tootlikkus on kasvanud</a></li>
						<li><a href="/test/test-sisu">Kasvuhoonegaaside heitkogus on märkimisväärselt vähenenud</a></li>
						<li class="vertical-push"><a href="/test/test-sisu">Kõik valitsuse eesmärgid »</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valdkonannad</h2>
					<ul class="widget-menu">
						<li><a href="/test/test-sisu">Majandus ja ettevõtlus, energeetika, transport</a></li>
						<li><a href="/test/test-sisu">Pere, töö, sotsiaalkaitse, tervis</a></li>
						<li><a href="/test/test-sisu">Haridus, teadus, infoühiskond</a></li>
						<li><a href="/test/test-sisu">Kultuur, sport, eesti keel, lõimumine</a></li>
						<li><a href="/test/test-sisu">Keskkond, maaelu, põllumajandus</a></li>
						<li><a href="/test/test-sisu">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="/test/test-sisu">Kodanike riik, valitsemine, koostöö teiste riikidega</a></li>
					</ul>
				</div>
			</div>
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tegevusprogramm</h2>
					<ul class="widget-menu">
						<li><a href="/test/test-sisu">Valitsuse tegevusprogramm</a></li>
						<li><a href="/test/test-sisu">Koalitsioonileping</a></li>
						<li><a href="/test/test-sisu">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="/test/test-sisu">Tegevusprogrammi täitmine</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
    'name' => 'menu_2_type_1',
  );
  $templates['static_frontpage_block_minister'] = array(
    'title' => 'Action block: "prime minister"',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-fp-block-minister">
	<div class="image"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/10-global/static-fp-block-minister-ansip.jpg"></div>
	<h2><a href="#">Peaminister Andrus Ansip: koostöö Kasahstaniga on ajaga arenenud transiidist kaugemale</a></h2>
	<p>Peaminister Andrus Ansip kohtus ametlikul töövisiidil Kasahstanis presidendi Nursultan Nazarbajevi ja peaministri Karim Massimoviga, arutades mılemaga riikidevahelist kahepoolset koostööd.</p>
	<div class="tabs">
		<ul class="tabs-inner">
			<li><a href="#">peaminister</a></li>
			<li><a href="#">eelinfo</a></li>
		</ul>
	</div>
</div>
',
    'name' => 'static_frontpage_block_minister',
  );
  $templates['static_frontpage_tab_block'] = array(
    'title' => 'Action block: tabs',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-fp-tab-block">
	<div class="static-fp-tab-contents">
		<div class="tab-content">
			<h2>Allasutused</h2>
			<p>Kiire majandusv on kaaas toonud tööjõunõudluse märgatava suurenemise.</p>
			<ul>
				<li><a href="#">Riiklik statistika</a></li>
				<li><a href="#">Rahvusvahelised finantsinstitutsioonid</a></li>
				<li><a href="#">Tugiteenuste projekt</a></li>
				<li><a href="#">Riiklik statistika</a></li>
				<li><a href="#">Rahvusvahelised finantsinstitutsioonid</a></li>
			</ul>
		</div>
		<div class="tab-content">
			<h2>Registrid</h2>
			<ul>
				<li><a href="#">Lorem ipsum</a></li>
			</ul>
		</div>
		<div class="tab-content">
			<h2>Lorem</h2>
			<ul>
				<li><a href="#">Ipsum lorem</a></li>
			</ul>
		</div>
	</div>
</div>
',
    'name' => 'static_frontpage_tab_block',
  );
  $templates['static_module_2'] = array(
    'title' => '2 columns',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
			<p>Kõik kodutarbijad ning enamik Eesti firmasid ostab hetkel elektrit selle võrguettevõtja käest, kelle võrguga tarbija ühendatud on (näiteks Eesti Energia Jaotusvõrk või Imatra Elekter). Elektri müügihind suletud turuosa tarbijatele ning kõik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega sõltu otseselt elektribörsil kujunevast hinnast.</p>
		</div>
		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>
			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
',
    'name' => 'static_module_2',
  );
  $templates['static_module_3_1'] = array(
    'title' => 'Bulleted list with sidebar',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/10-global/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesmärgid</h2>
		<p>Valitsusliidu eesmärk on viia Eesti hariduse Põhjamaade tipptasemele – meie eesmärk on haritud rahvas ja edukas Eesti. Hea haridus tähendab inimese jaoks suuremat palka, paremat kaitset töötuse vastu ja suuremat pensioni tulevikus.</p>
	</div>
	<div class="main">
		<ul>
			<li class="has-bullet">Haridustee katkestajate osakaalu vähenemine 11%ni vanusegrupis 18–24 (põhihariduse või madalama haridustasemega õpinguid mittejätkavad noored)</li>
			<li class="has-bullet">Noorte õpetajate (kuni 30-aaastaste) osakaalu kasv üldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30–34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>Täiskasvanute (25–64-aastaste) elukestvas õppes osalemise määra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul>
	</div>
</div>
',
    'name' => 'static_module_3_1',
  );
  $templates['static_module_3_2'] = array(
    'title' => '3 columns',
    'description' => '',
    'fid' => 0,
    'body' => '<div class="static-module-3-2 clearfix">
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
',
    'name' => 'static_module_3_2',
  );
  $templates['static_module_5'] = array(
    'title' => 'Content with tabs',
    'description' => '',
    'fid' => 0,
    'body' => '<div id="static-module-5">
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
		</div>
	</div>
</div>
<p>&nbsp;</p>
',
    'name' => 'static_module_5',
  );
  return $templates;
}
