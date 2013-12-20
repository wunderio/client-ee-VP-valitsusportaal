(function($) {
  var
    $l2menus = $('#block-vp-menu-second-level-menu-content-content > div'),
    $l1menu = $('#zone-header div.block-main-menu .menu-block-wrapper > ul.menu'),
    $l1menulinks = $l1menu.find('> li > a'),
    // For sliding down active menu in _vPMenuToggleActiveMenu().
    $sectionContent = $('#section-content'),
    $originaPaddingOfSectionContent = $sectionContent.css('padding-top'),
    hoveringOnL1MenuWrapper = false,
    noneActiveMenuPopupVisible = false,
    activeMenuPopupVisible = false,
    animateSpeedSlide = 0,
    $lastActiveL1MenuItem,
    $breadCrumbLinks = $('#block-delta-blocks-breadcrumb a');

  jQuery.fn.vpMenuEqualHeight = function() {
    var $el = $(this);

    var equalize = function() {
      var colsHighest = 0;

      $el.attr('style', '').each(function() {
        var height = $(this).height();
        if (height > colsHighest) {
          colsHighest = height;
        }
      });

      $el.css('min-height', colsHighest);
    }

    equalize();

    imagesLoaded($el, function() {
      equalize();
    });
  };

  // Move menu popups out of the module and move to correct position in DOM.
  $l2menus.prependTo('#section-content');

  // Remove empty paragraph that the editor includes into every document.
  $l2menus.find('> p').remove();

  // Temporary solution (should be done with PHP): add active class to submenu.
  $('#zone-header ul.menu li.active-trail').each(function() {
    var id = $(this).attr('id');
    var $activeMenuPopup = $l2menus.filter('.' + id).addClass('active');

    // Set arrow for active menu item.
    var _vpMenuSetMenuPosition = function() {
      var $menuL1ItemActive = $l1menulinks.filter('.active-trail');
      var l1menuLeft = $menuL1ItemActive.position().left + parseInt($menuL1ItemActive.css('padding-left')) /* If has-separator class is set, there's also padding-left bigger than 0. */ + $menuL1ItemActive.width()/2 - 15/* half of arrow */ + 10/* left menu side overflow relative to content */;
      $activeMenuPopup.find('.arrow').css('left', l1menuLeft);
    }

    // Disable tabindex for hidden active menu.
    $activeMenuPopup.find('a').attr('tabindex', '-1');

    _vpMenuSetMenuPosition();

    // Custom fonts loaded.
    $(window).load(function() {
      _vpMenuSetMenuPosition();
    });
  });

  // Add equal columns to menu that is previewed in content area.
  if ($('body').hasClass('logged-in')) {
    $('#zone-content div.static-mainmenu-popup').each(function() {
      $(this).find('div.container-12').eq(0).find(' > div').vpMenuEqualHeight();
    });
  }

  /**
   * Set events.
   *
   * Capsulate variables by menu items.
   */
  if ('ontouchstart' in document.documentElement) {
    $l1menulinks.on('touchstart', function(e) { l1menulinksEvent(this, e); });
    $('body').on('touchstart', function() { closeAll(); });
    $l2menus.on('touchstart', function(e) { e.stopPropagation(); });
  } else {
    $l1menulinks.bind('keydown click', function(e) { l1menulinksEvent(this, e); });
    $('body').click(function() { closeAll(); });
    $l2menus.click(function(e) { e.stopPropagation(); });
  }

  $breadCrumbLinks.click(function(e) {
    var $breadCrumbsLink = $(this);

    $l1menulinks.each(function() {
      if (!$(this).hasClass('hide-for-desktop') && $(this).attr('href') === $breadCrumbsLink.attr('href')) {
        l1menulinksEvent(this, e);
        e.preventDefault();
      }
    });
  });

  var l1menulinksEvent = function(that, e) {
    if (e.type === 'keydown' && e.keyCode !== 13) {
      return true;
    }

    var $this = $(that);
    var id = $this.parent().attr('id');
    var $menu = $('#menu-l2-popup-' + id);

    closeAll();

    if ($this.hasClass('active-trail')) {
      _vPMenuToggleActiveMenu($menu, 'open');
    } else {
      _vPMenuToggleMenu($menu, $this, 'open');
    }

    if (e.type === 'keydown' && e.keyCode === 13) {
      $lastActiveL1MenuItem = $this;
      _vPMenuApplyAccessibiliy($menu);
    }

    var $widget_slider = $menu.find('.widget-slider');
    if ($widget_slider.is(':visible')) {
      $widget_slider.once().flexslider({
        controlNav: true,
        directionNav: false,
        animation: 'slide',
        direction: 'horizontal'
      });
    }

    e.stopPropagation();
    e.preventDefault();
  }

  // Close the menus if escape is used.
  $('body').keydown(function(e) {
    if ((activeMenuPopupVisible || noneActiveMenuPopupVisible) && e.keyCode === 27) {
      closeAll();
      $lastActiveL1MenuItem.focus();
    }
  });

  var closeAll = function() {
    if (noneActiveMenuPopupVisible === false && activeMenuPopupVisible === false) {
      return false;
    }
    _vPMenuToggleMenu($l2menus.not('.active'), false, 'close');
    _vPMenuToggleActiveMenu($l2menus.filter('.active'), 'close');
  }

  /**
   * Set timeouts for setTimeout() function.
   *
   * forceLongDelay parameter forces 300ms.
   */
  var timeoutBeforeAct = function(forceLongDelay) {
    var shortDelay = 80;
    var longDelay = 300;

    if (typeof forceLongDelay === 'undefined') {
      forceLongDelay = false;
    }

    if (noneActiveMenuPopupVisible && forceLongDelay === false) {
      // Little delay seems better than 0.
      return shortDelay;
    } else {
      return longDelay;
    }
  }

  /**
   * Hide/show unactive menu according to action parameter.
   */
  var _vPMenuToggleMenu = function($menu, $menuL1Item, action) {
    if (action === 'close') {
      noneActiveMenuPopupVisible = false;
      hideOverlay();
      // @todo remove callback and time if 0 will be set.
      $menu.not('.active').hide(0, function() {
        $menu.not('.active').find('.arrow').hide();
      });
    } else if (action === 'open') {
      noneActiveMenuPopupVisible = true;
      showOverlay();
      // @todo remove callback and time if 0 will be set.
      $menu.show(0, function() {
        var $this = $(this);
        $this.find('div.container-12').eq(0).find(' > div').vpMenuEqualHeight();
        if ($menuL1Item !== false) {
          var arrowLeft = $menuL1Item.position().left + parseInt($menuL1Item.css('padding-left')) /* If has-separator class is set, there's also padding-left bigger than 0. */ + $menuL1Item.width()/2 - 15/* half of arrow */ + 10/* left menu side overflow relative to content */;
          $menu.find('.arrow').css('left', arrowLeft).show();
        }
      });

    }
  }

  /**
   * Hide/show active menu according to action parameter.
   *
   * @todo: I'll disable close for now on active menu as there is too much sliding going on.
   */
  var _vPMenuToggleActiveMenu = function($menu, action) {
    if (action === 'close') {
      var newPaddingTop = $originaPaddingOfSectionContent;
      // Disable tabindex for hidden active menu.
      $menu.find('a').attr('tabindex', '-1');
    } else if (action === 'open') {
      activeMenuPopupVisible = true;
      var newPaddingTop = $menu.height() - 29 - 25;
      // Enable tabindex for shown active menu.
      $menu.find('a').attr('tabindex', '');
    }



    // Wrong event trigger. Quit.
    if (typeof newPaddingTop === 'undefined') {
      return false
    }

    $sectionContent.animate({
      paddingTop: newPaddingTop
    }, animateSpeedSlide, function() {
      if (action === 'open') {
        $menu.find('div.container-12').eq(0).find(' > div').vpMenuEqualHeight();
      }
    });

  }

  /**
   * Show overlay for unactive menus.
   */
  var showOverlay = function() {
    var $overlay = $('#menu-l2-popup-overlay');
    if ($overlay.length === 0) {
      $overlay = $('<div id="menu-l2-popup-overlay"></div>').appendTo('body');
    }
    var top = $('#section-header').offset().top + $('#section-header').height() - 9;
    $overlay.css({
      top: top,
      height: $(document).height() - top
    })
    .show();
  }

  /**
   * Hide overlay for unactive menus.
   */
  var hideOverlay = function() {
    $('#menu-l2-popup-overlay').hide();
  }

  /**
   * Create skip link and loop inside the menu popup.
   */
  var _vPMenuApplyAccessibiliy = function($menu) {
    var $skipLinkWrapper = $menu.find('.vp-menu-skip-link');
    if ($skipLinkWrapper.length === 0) {
      $skipLinkWrapper = $('<div class="vp-menu-skip-link"><a href="#" class="element-invisible element-focusable">' + Drupal.t('Exit submenu') + '</a></div>');
      $skipLinkWrapper.prependTo($menu.find('.mainmenu-popup-content'));
      // Add dummy link so that we can create loop with tab index inside the menu popup.
      $('<a href="#" class="element-invisible element-focusable"></a>').appendTo($menu.find('.mainmenu-popup-content'));
    }

    $skipLinkWrapper.find('a').click(function(e) {
      $lastActiveL1MenuItem.focus();
      closeAll();
      e.preventDefault();
    });

    // Create loop inside the menu popup.
    $aElements = $menu.find('a');
    $aElements.eq(0).focus()
    $aElements.eq($aElements.length-1).unbind('focus').bind('focus', function() {
      $aElements.eq(0).focus();
    });
  }

})(jQuery);
