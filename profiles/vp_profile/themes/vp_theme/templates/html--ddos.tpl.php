<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
  <!-- link href='//fonts.googleapis.com/css?family=Roboto+Condensed:400,300,700&amp;subset=latin,cyrillic' rel='stylesheet' type='text/css' -->
  <?php // print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php // print $styles; ?>

<style type="text/css" media="all">
  @import url("/profiles/vp_profile/themes/vp_theme/css/global.css");
  @import url("/sites/all/modules/custom/rk_abi/css/rk_abi.css");

  img {display: block;margin: 1em;}
  #zone-footer {background-color: rgb(107, 107, 102);text-align: center;color: #fff;min-height: 20px;padding: 2em;}
</style>

  <?php // print $scripts; ?>

</head>
<body class="ddos">
  <?php // print $page_top; ?>
  <?php print $page; ?>
  <?php // print $page_bottom; ?>
</body>
</html>
