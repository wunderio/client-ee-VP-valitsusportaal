<?php
/**
 * @file
 * rk_seadusloome_karussell.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rk_seadusloome_karussell_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-seadusloome_karussell-body'
  $field_instances['node-seadusloome_karussell-body'] = array(
    'bundle' => 'seadusloome_karussell',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'view_mode_facebook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-seadusloome_karussell-field_strat_thumbnail'
  $field_instances['node-seadusloome_karussell-field_strat_thumbnail'] = array(
    'bundle' => 'seadusloome_karussell',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_facebook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_strat_thumbnail',
    'label' => 'Strat Thumbnail',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'fc_plupload' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__94x57' => 0,
          'colorbox__100x80' => 0,
          'colorbox__240x' => 0,
          'colorbox__1024x' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__frontpage_first_news_thumbnail' => 0,
          'colorbox__gallery_thumbnail_200x140_cropped' => 0,
          'colorbox__important_topics_wallpaper' => 0,
          'colorbox__large' => 0,
          'colorbox__media_gallery_large' => 0,
          'colorbox__media_gallery_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__modal_contact_thumbnail' => 0,
          'colorbox__news_detail_cover_image' => 0,
          'colorbox__news_list_thumbnail' => 0,
          'colorbox__newsletter_thumbnail' => 0,
          'colorbox__rk_valitsused_minister' => 0,
          'colorbox__rk_valitsused_valitsus' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__subject_related_news_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__vp_logo_files_download_bar_thumbnail' => 0,
          'colorbox__wysiwyg_template_thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_94x57' => 0,
          'image_100x80' => 0,
          'image_240x' => 0,
          'image_1024x' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_frontpage_first_news_thumbnail' => 0,
          'image_gallery_thumbnail_200x140_cropped' => 0,
          'image_important_topics_wallpaper' => 0,
          'image_large' => 0,
          'image_media_gallery_large' => 0,
          'image_media_gallery_thumbnail' => 0,
          'image_medium' => 0,
          'image_modal_contact_thumbnail' => 0,
          'image_news_detail_cover_image' => 0,
          'image_news_list_thumbnail' => 0,
          'image_newsletter_thumbnail' => 0,
          'image_rk_valitsused_minister' => 0,
          'image_rk_valitsused_valitsus' => 0,
          'image_square_thumbnail' => 0,
          'image_subject_related_news_thumbnail' => 0,
          'image_thumbnail' => 0,
          'image_vp_logo_files_download_bar_thumbnail' => 0,
          'image_wysiwyg_template_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Strat Thumbnail');

  return $field_instances;
}
