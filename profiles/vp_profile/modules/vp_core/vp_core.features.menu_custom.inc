<?php
/**
 * @file
 * vp_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vp_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-web-portal.
  $menus['menu-web-portal'] = array(
    'menu_name' => 'menu-web-portal',
    'title' => 'Web portal',
    'description' => 'Web portal header strip menu.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Web portal');
  t('Web portal header strip menu.');


  return $menus;
}
