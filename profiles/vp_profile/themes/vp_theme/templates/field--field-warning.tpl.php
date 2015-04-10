<div id="country-representations-warning"><?php
$colors = array(
  'green' => array(
    'title' => 'Olge tavapäraselt ettevaatlik',
    'active_values' => array(
      'roheline',
      'roh-kol',
      'roh-ora',
      'roh-pun',
      'roh-mus',
    ),
  ),
  'yellow' => array(
    'title' => 'Vältige võimalusel teatud piirkondi',
    'active_values' => array(
      'roh-kol',
      'roh-ora',
      'roh-pun',
      'roh-mus',
      'kollane',
      'kol-ora',
      'kol-pun',
      'kol-mus',
    ),
  ),
  'orange' => array(
    'title' => 'Vältige võimalusel reisimist, eriti teatud piirkondi',
    'active_values' => array(
      'roh-ora',
      'roh-pun',
      'roh-mus',
      'kol-ora',
      'kol-pun',
      'kol-mus',
      'oraanz',
      'ora-pun',
      'ora-mus',
    ),
  ),
  'red' => array(
    'title' => 'Tungiva vajaduseta vältige reisimist',
    'active_values' => array(
      'roh-pun',
      'roh-mus',
      'kol-pun',
      'kol-mus',
      'ora-pun',
      'ora-mus',
      'punane',
      'pun-mus',
    ),
  ),
  'black' => array(
    'title' => 'Vältige reisimist täielikult, lahkuge riigist',
    'active_values' => array(
      'roh-mus',
      'kol-mus',
      'ora-mus',
      'pun-mus',
      'must',
    ),
  ),
);
foreach ($colors as $en_col => $color) {
  echo '<div class="'.$en_col.(in_array($element['#items'][0]['value'], $color['active_values'], TRUE) ? ' active' : '').'">'.$color['title'].'</div>';
}
?></div>
