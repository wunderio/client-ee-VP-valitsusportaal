<div class="bottom-download-bar<?php print (isset($_COOKIE['vp_logo_files_download_bar_opened']) && $_COOKIE['vp_logo_files_download_bar_opened'] === 'true') ? ' opened' : ''; ?>">
  <div class="inner-wrapper">
    <div class="bar-trigger clearfix">
      <a class="bar-title" href="#"><b class="icon-dl-list"></b><?php print t('Download list (!count)', array('!count' => $count)); ?><span class="bottom-download-bar-loader element-hidden"></span></a>
      <?php if (count($file_groups)): ?>
        <div class="bar-actions">
          <?php print $clear_download_list_link; ?>
          <?php print l('<span class="icon"></span>' . t('Download'), 'zipcart/get', array('html' => TRUE, /*'query' => _zipcart_get_destination_alias(),*/ 'attributes' => array('class' => array('btn', 'download')))); ?>
        </div>
      <?php endif; ?>
    </div><!-- /bar-trigger -->
    <?php if (count($file_groups)): ?>
      <div class="files-container clearfix">
        <?php foreach ($file_groups as $nid => $group): ?>
          <div class="files-group<?php $files_group_cookie_name = 'vp_logo_files_download_bar_files_group_' . $nid . '_opened'; print (isset($_COOKIE[$files_group_cookie_name]) && $_COOKIE[$files_group_cookie_name] === 'true') ? ' opened' : ''; ?>" id="files-group-<?php print $nid; ?>">
            <div class="item-trigger">
              <a href="#"><b class="icon-arrow"></b> <?php print $group['title']; ?></a>
            </div> <!-- /item-trigger -->
            <div class="files-list">
              <?php foreach ($group['files'] as $file): ?>
                <div class="file-item clearfix">
                  <p class="file-thumb"><?php print $file['thumbnail']; ?></p>
                  <p class="file-name"><?php print $file['lang']; ?> / <?php print $file['color_type']; ?>: <strong><?php print $file['ext']; ?></strong> <em>(<?php print $file['filename']; ?>)</em></p>
                  <a href="<?php print $file['remove_url']; ?>" class="remove-file"><?php print t('Remove !file from download list', array('!file' => $file['filename'])); ?></a>
                </div> <!-- /file-item -->
              <?php endforeach; ?>
            </div> <!-- /files-list -->
          </div> <!-- /files-group -->
        <?php endforeach; ?>
      </div><!-- /bar-trigger -->
    <?php endif; ?>
  </div><!-- /inner-wrapper -->
</div>
