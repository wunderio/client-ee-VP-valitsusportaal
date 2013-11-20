<li class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <h3 class="gss-title"<?php print $title_attributes; ?>>
    <a href="<?php print $url; ?>"><?php print $title; ?></a>
  </h3>
  <?php print render($title_suffix); ?>
  <div class="gss-search-snippet-info">
    <?php if ($snippet) : ?>
      <p class="gss-search-snippet"<?php print $content_attributes; ?>><?php print $snippet; ?></p>
    <?php endif; ?>
    <?php if ($url) : ?>
      <p class="gss-search-url"><a href="<?php print $url; ?>"><?php print $url; ?></a></p>
    <?php endif; ?>
    <?php if ($info): ?>
      <p class="gss-info">
        <?php print $info; ?>
      </p>
    <?php endif; ?>
  </div>

</li>
