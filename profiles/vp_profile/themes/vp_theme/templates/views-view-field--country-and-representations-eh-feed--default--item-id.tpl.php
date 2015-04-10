<?php
global $base_url;
$consul = field_collection_item_load($row->item_id);
$lat = $consul->field_latitude[LANGUAGE_NONE][0]['value'];
$long = $consul->field_longitude[LANGUAGE_NONE][0]['value'];
$lat_long = $lat.','.$long;
$url = 'http://maps.google.com/maps?f=q&source=s_q&hl=en&geocode=&q='.$lat_long.'&ie=UTF8&z=17';

//echo print_r($consul, true);
?>
<h2 class="alampealkiri1"><?php echo $consul->field_embassy_name[LANGUAGE_NONE][0]['value']; ?></h2>

<h3 class="esindaja-nimi"><?php echo $consul->field_hon_con_or_ambass_name[LANGUAGE_NONE][0]['value']; ?></h3>
<?php /*
<span><strong>Konsulaarpiirkond:</strong> Oulu l??n<br></span><span><font class="lead">NB! Aukonsul on puhkusel 01.-31.07.2014, sel ajal dokumente ei v?ljastata!</font></span><br>
*/ ?>
<ul class="nobullet nogap read-koos">

<li><?php echo $consul->field_address[LANGUAGE_NONE][0]['thoroughfare']; ?><a class="esindus-kaart-link" href="<?php echo $url; ?>"><img src="<?php echo $base_url; ?>/sites/default/files/content-editors/old-theme/gmap20x20.png" alt="Esinduse asukoht Google kaardil" title="Esinduse asukoht Google kaardil"></a></li>

<li><?php echo $consul->field_address[LANGUAGE_NONE][0]['locality']; ?></li>

<li><?php echo $consul->field_address[LANGUAGE_NONE][0]['postal_code']; ?></li>

<li class="li-tel"><?php echo $consul->field_telephone[LANGUAGE_NONE][0]['value']; ?></li>

<li class="li-email"><a href="mailto:<?php echo $consul->field_e_mail[LANGUAGE_NONE][0]['email']; ?>"><?php echo $consul->field_e_mail[LANGUAGE_NONE][0]['email']; ?></a></li>

</ul>

