<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <link href='//fonts.googleapis.com/css?family=Roboto+Condensed:400,300,700&amp;subset=latin,cyrillic' rel='stylesheet' type='text/css'>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="<?php global $base_url; print $base_url; ?>/profiles/vp_profile/themes/vp_theme/js/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
<noscript>
  <strong class="noscript"><?php print t('Please Enable JavaScript');?></strong><p class="noscript"><?php print t('This site requires JavaScript support to function properly. It appears that your web browser does not support JavaScript,
      or you have disabled scripting.');?></p>
</noscript>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php print l(t('Accessibility Help'), drupal_get_normal_path('accessibility', 'en'), array('attributes' => array('class' => array('element-invisible', 'element-focusable')))); ?>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
