<?php
/**
 * @file
 * vp_core.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function vp_core_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'access_site_configuration';
  $config_perms->status = TRUE;
  $config_perms->name = 'access site configuration';
  $config_perms->path = array(
    0 => 'admin/config/*',
  );
  $export['access_site_configuration'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_account_settings';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer account settings';
  $config_perms->path = array(
    0 => 'admin/config/people/accounts',
  );
  $export['administer_account_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_clean_urls';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer clean-urls';
  $config_perms->path = array(
    0 => 'admin/config/search/clean-urls',
  );
  $export['administer_clean_urls'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_date_popup';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer date popup';
  $config_perms->path = array(
    0 => 'admin/config/content/date_popup',
  );
  $export['administer_date_popup'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_date_time';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer date-time';
  $config_perms->path = array(
    0 => 'admin/config/regional/date-time',
    1 => 'admin/config/regional/date-time/*',
  );
  $export['administer_date_time'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_devel_settings';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer devel settings';
  $config_perms->path = array(
    0 => 'admin/config/development/devel',
  );
  $export['administer_devel_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_error_reporting';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer error reporting';
  $config_perms->path = array(
    0 => 'admin/config/error-reporting',
  );
  $export['administer_error_reporting'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_file_system';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer file system';
  $config_perms->path = array(
    0 => 'admin/config/file-system',
  );
  $export['administer_file_system'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_flowplayer';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer flowplayer';
  $config_perms->path = array(
    0 => 'admin/config/media/flowplayer',
  );
  $export['administer_flowplayer'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_i18n_settings';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer i18n settings';
  $config_perms->path = array(
    0 => 'admin/config/regional/i18n',
  );
  $export['administer_i18n_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_log_and_error_msg';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer log and error msg';
  $config_perms->path = array(
    0 => 'admin/config/development/logging',
  );
  $export['administer_log_and_error_msg'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media';
  $config_perms->path = array(
    0 => 'admin/config/media',
  );
  $export['administer_media'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media_elfinder';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media elfinder';
  $config_perms->path = array(
    0 => 'admin/config/media/elfinder',
  );
  $export['administer_media_elfinder'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media_filesystem';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media filesystem';
  $config_perms->path = array(
    0 => 'admin/config/media/file-system',
  );
  $export['administer_media_filesystem'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media_filetypes';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media filetypes';
  $config_perms->path = array(
    0 => 'admin/config/media/file-types',
  );
  $export['administer_media_filetypes'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media_flickr';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media flickr';
  $config_perms->path = array(
    0 => 'admin/config/media/media_flickr',
  );
  $export['administer_media_flickr'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_media_image_toolkit';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer media image toolkit';
  $config_perms->path = array(
    0 => 'admin/config/media/image-toolkit',
  );
  $export['administer_media_image_toolkit'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_mime_types';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer mime types';
  $config_perms->path = array(
    0 => 'admin/config/media/filemime',
  );
  $export['administer_mime_types'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_performance';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer performance';
  $config_perms->path = array(
    0 => 'admin/config/development/performance',
  );
  $export['administer_performance'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_print_buttons';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer print buttons';
  $config_perms->path = array(
    0 => 'admin/config/user-interface/print',
  );
  $export['administer_print_buttons'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_regional_settings';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer regional settings';
  $config_perms->path = array(
    0 => 'admin/config/regional/settings',
  );
  $export['administer_regional_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_information';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer site information';
  $config_perms->path = array(
    0 => 'admin/config/system/site-information',
  );
  $export['administer_site_information'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_maintenance';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer site maintenance';
  $config_perms->path = array(
    0 => 'admin/config/development/maintenance',
  );
  $export['administer_site_maintenance'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_sql_convert';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer SQL convert';
  $config_perms->path = array(
    0 => 'admin/custom-content/sql-to-eck',
  );
  $export['administer_sql_convert'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_translation_sets';
  $config_perms->status = FALSE;
  $config_perms->name = 'administer translation sets';
  $config_perms->path = array(
    0 => 'admin/config/regional/i18n_translation',
  );
  $export['administer_translation_sets'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'adminsiter_i18n_logo';
  $config_perms->status = FALSE;
  $config_perms->name = 'adminsiter i18n logo';
  $config_perms->path = array(
    0 => 'admin/custom-content/i18n-logo',
  );
  $export['adminsiter_i18n_logo'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'auto_generate_content';
  $config_perms->status = FALSE;
  $config_perms->name = 'auto-generate content';
  $config_perms->path = array(
    0 => 'admin/config/development/generate/*',
  );
  $export['auto_generate_content'] = $config_perms;

  return $export;
}
