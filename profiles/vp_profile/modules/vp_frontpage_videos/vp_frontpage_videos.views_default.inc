<?php
/**
 * @file
 * vp_frontpage_videos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_frontpage_videos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Youtube javascript';
  $handler->display->display_options['header']['area']['content'] = '<script type="text/javascript">
<!--//--><![CDATA[//><!--
(function($){$().ready(function(){
      $("div.view-frontpage-videos div.views-row a").click(function(e){
        e.preventDefault();
        $link = $(this);
        $views_row = $(this).parent().parent();
        $.colorbox({
          html:\'<iframe width="850" height="470" src="\'+$(this).attr("href")+\'" frameborder="0" allowfullscreen></iframe><div class="date">\'+$views_row.find("div.views-field-created").text()+\'</div><div class="title">\'+$views_row.find("div.views-field-title a").text()+\'</div><div class="description">\'+$views_row.find("div.views-field-field-description").text()+\'</div>\',
          onClosed: function() {
            $link.focus();
          }
        });
      });
    });})(jQuery);
//--><!]]>
</script>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Footer links';
  $handler->display->display_options['footer']['area']['content'] = '<div class="tabs"><ul class="tabs-inner">
<?php global $language; if ($language->language == \'et\') : ?><li><?php echo l(t(\'Video gallery\'), \'videos\'); ?></li><?php endif; ?>
<li><?php echo l(t(\'Photo gallery\'), \'galleries\'); ?></li>
</ul></div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  /* Field: Content: Embbed Source */
  $handler->display->display_options['fields']['field_embbed_source']['id'] = 'field_embbed_source';
  $handler->display->display_options['fields']['field_embbed_source']['table'] = 'field_data_field_embbed_source';
  $handler->display->display_options['fields']['field_embbed_source']['field'] = 'field_embbed_source';
  $handler->display->display_options['fields']['field_embbed_source']['label'] = '';
  $handler->display->display_options['fields']['field_embbed_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embbed_source']['element_label_colon'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['path'] = 'https://www.youtube.com/embed/[field_embbed_source]';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'image_style' => 'gallery_thumbnail_200x140_cropped',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'https://www.youtube.com/embed/[field_embbed_source]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'youtube_video' => 'youtube_video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'frontpage_videos_block');
  $export['frontpage_videos'] = $view;

  return $export;
}
