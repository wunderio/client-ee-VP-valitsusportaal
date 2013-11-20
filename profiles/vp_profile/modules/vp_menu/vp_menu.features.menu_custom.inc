<?php
/**
 * @file
 * vp_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vp_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'See on saidi avaliku osa menüüstruktuur.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('See on saidi avaliku osa menüüstruktuur.');


  return $menus;
}
