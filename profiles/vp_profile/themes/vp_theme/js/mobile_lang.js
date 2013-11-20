(function ($) {
  $langBlock = $('#block-language-switcher-fallback-language-switcher-fallback');
  $langBlockTitle = $langBlock.find('.block-title');
  $langBlockContent = $langBlock.find('.content');

  $langBlockTitle.html($langBlock.find('a.active').text());

  // Make the text visible for default language.
  $langBlockTitle.css({
    'min-width': 27,
    'text-indent': 0,
    'width': 'auto'
  });

  var titleClickEvent = function($this, e) {
    // Remove blue overlay when touching the button on Android.
    // Also much faster slide on Android.
    e.stopPropagation();
    e.preventDefault();

    if ($langBlockContent.is(':visible')) {
      $langBlockContent.slideUp();
      $langBlockTitle.removeClass('active');
    } else {
      $langBlockContent.css('z-index', Drupal.mobileZonePortalNavigationZIndex++);
      $langBlockContent.slideDown();
      $langBlockTitle.addClass('active');

      // Hide search if it's open.
      if ($('#block-search-form .block-title').hasClass('active')) {
        $('#block-search-form .content').slideUp();
        $('#block-search-form .block-title').removeClass('active');
      }

      // Hide main menu if it's open.
      if ($('#collapsed-menu-button').hasClass('active')) {
        $("#mobile-menu-inner").slideUp();
        $('#collapsed-menu-button').removeClass('active');
      }
    }
  }


  if ('ontouchstart' in document.documentElement) {
    $langBlockTitle.on('touchstart', function(e) {
      titleClickEvent($(this), e);
    });
  } else {
    $langBlockTitle.click(function(e) {
      titleClickEvent($(this), e);
    });
  }




})(jQuery);
