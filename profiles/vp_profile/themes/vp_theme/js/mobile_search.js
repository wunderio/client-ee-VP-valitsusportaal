(function ($) {
  Drupal.mobileZonePortalNavigationZIndex = 11;

  var $blockSearch = $('#block-search-form');
  var $blockSearchContent = $('.content', $blockSearch);
  var $blockTitle = $('.block-title', $blockSearch);

  var titleClickEvent = function($this, e) {
    // Remove blue overlay when touching the button on Android.
    // Also much faster slide on Android.
    e.stopPropagation();
    e.preventDefault();

    if ($blockSearchContent.is(':visible')) {
      $blockSearchContent.slideUp();
      $blockTitle.removeClass('active');
    } else {
      $blockSearchContent.css('z-index', Drupal.mobileZonePortalNavigationZIndex++);
      $blockSearchContent.slideDown();
      $blockTitle.addClass('active');

      // Hide main menu if it's open.
      if ($('#collapsed-menu-button').hasClass('active')) {
        $("#mobile-menu-inner").slideUp();
        $('#collapsed-menu-button').removeClass('active');
      }

      // Hide language popup if it's open.
      if ($('#block-language-switcher-fallback-language-switcher-fallback .block-title').hasClass('active')) {
        $('#block-language-switcher-fallback-language-switcher-fallback .content').slideUp();
        $('#block-language-switcher-fallback-language-switcher-fallback .block-title').removeClass('active');
      }
    }
  }

  if ('ontouchstart' in document.documentElement) {
    $blockTitle.on('touchstart', function(e) {
      titleClickEvent($(this), e);
    });
  } else {
    $blockTitle.click(function(e) {
      titleClickEvent($(this), e);
    });
  }
})(jQuery);
