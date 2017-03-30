<?php
/**
 * @file
 * vp_apache_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function vp_apache_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:6000/solr/riigikantselei';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '10:2000.0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'vp_menu_dropdown_box' => '0',
      'announcements' => '0',
      'article' => '0',
      'background_image' => '0',
      'contact' => '0',
      'gallery' => '0',
      'history' => '0',
      'important_announcements' => '0',
      'news' => '0',
      'seadusloome_karussell' => '0',
      'newsletter_news' => '0',
      'webform' => '0',
      'weekly_schedule_day' => '0',
      'youtube_video' => '0',
    ),
    'apachesolr_soft_commit' => 0,
    'field_bias' => array(
      '_version_' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'dm_field_date' => '0',
      'dm_field_optional_date_period' => '0',
      'dm_field_optional_date_period_end' => '0',
      'dm_field_weekly_schedule_date' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_news_subject' => '0',
      'im_field_news_type' => '0',
      'im_field_realm' => '0',
      'im_field_simplenews_term' => '0',
      'im_field_source' => '0',
      'im_field_subject' => '0',
      'im_field_weekly_schedule_source' => '0',
      'im_vid_1' => '0',
      'im_vid_2' => '0',
      'im_vid_3' => '0',
      'im_vid_8' => '0',
      'im_vid_9' => '0',
      'index_id' => '0',
      'is_author' => '0',
      'is_source' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'item_id' => '0',
      'label' => '3.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_author' => '0',
      'sm_field_division' => '0',
      'sm_field_embbed_source' => '0',
      'sm_field_gallery' => '0',
      'sm_field_label' => '0',
      'sm_field_name' => '0',
      'sm_field_occupaction' => '0',
      'sm_field_phone' => '0',
      'sm_field_term' => '0',
      'sm_vid_News_type' => '0',
      'sm_vid_Newsletter' => '0',
      'sm_vid_Realm' => '0',
      'sm_vid_Source' => '0',
      'sm_vid_Subject' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'sort_search_api_id' => '0',
      'sort_search_api_language' => '0',
      'sort_type' => '0',
      'sort_url' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'ss_search_api_language' => '0',
      'ss_type' => '0',
      'ss_url' => '0',
      'tags_a' => '0',
      'tags_h1' => '3.0',
      'tags_h2_h3' => '2.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '1.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_field_description' => '0',
      'tm_title' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_2_names' => '0',
      'tm_vid_3_names' => '0',
      'tm_vid_8_names' => '0',
      'tm_vid_9_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'gallery',
      2 => 'news',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
