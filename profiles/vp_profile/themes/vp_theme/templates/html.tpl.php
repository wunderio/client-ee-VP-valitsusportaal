<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <!--<a href="" class=""><?php print t('Toggle high contrast'); ?></a>-->
    <?php print l(t('Toggle high contrast'), 'high_contrast_toggle', array('query' => array('destination' => (isset($current_url) ? $current_url : '')), 'attributes' => array('class' => array('element-invisible', 'element-focusable')))); ?>
    <?php print l(t('Accessibility Help'), 'accessibility', array('attributes' => array('class' => array('element-invisible', 'element-focusable')))); ?>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
