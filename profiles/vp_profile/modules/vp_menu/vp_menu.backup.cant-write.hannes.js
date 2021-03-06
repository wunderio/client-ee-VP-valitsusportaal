(function($) {
  var
    $l2menus = $('#block-vp-menu-second-level-menu-content-content > div'),
    $l1menu = $('#zone-header div.block-main-menu ul.menu'),
    $l1menulinks = $l1menu.find('a'),
    // For sliding down active menu in _vPMenuToggleActiveMenu().
    $sectionContent = $('#section-content'),
    $originaPaddingOfSectionContent = $sectionContent.css('padding-top'),
    hoveringOnL1MenuWrapper = false,
    noneActiveMenuPopupVisible = false,
    activeMenuPopupVisible = false,
    animateSpeedSlide = 0;

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
    var activeMenuPopup = $l2menus.filter('.' + id).addClass('active');

    // Set arrow for active menu item.
    var _vpMenuSetMenuPosition = function() {
      var $menuL1ItemActive = $l1menulinks.filter('.active-trail');
      var l1menuLeft = $menuL1ItemActive.position().left + parseInt($menuL1ItemActive.css('padding-left')) /* If has-separator class is set, there's also padding-left bigger than 0. */ + $menuL1ItemActive.width()/2 - 15/* half of arrow */ + 10/* left menu side overflow relative to content */;
      activeMenuPopup.find('.arrow').css('left', l1menuLeft);
    }

    _vpMenuSetMenuPosition();

    // Custom fonts loaded.
    $(window).load(function() {
      _vpMenuSetMenuPosition();
    });
  });

  // Add equal columns to menu that is previewed in content area.
  if ($('body').hasClass('logged-in')) {
    $('#zone-content div.static-mainmenu-popup').each(function() {
      $(this).find('div.container-12 > div').vpMenuEqualHeight();
    });
  }

  /**
   * Set events.
   *
   * Capsulate variables by menu items.
   */
  $l1menulinks
    .click(function(e) {
      e.stopPropagation();
      var $this = $(this);
      var id = $(this).parent().attr('id');
      var $menu = $('#menu-l2-popup-' + id);

      closeAll();

      //if (!activeMenuPopupVisible) {
        if ($this.hasClass('active-trail')) {
          _vPMenuToggleActiveMenu($menu, 'open');
        } else {
          _vPMenuToggleMenu($menu, $this, 'open');
        }
      //}

      return false;
    });

  $l2menus.click(function(e) {
    e.stopPropagation();
  });

  $('body').click(function() {
    closeAll();
  });

  var closeAll = function() {
    _vPMenuToggleMenu($l2menus.not('.active'), false, 'close');
    _vPMenuToggleActiveMenu($l2menus.find('.active'), 'close');
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
        $this.find('div.container-12 > div').vpMenuEqualHeight();
        if ($menuL1Item !== false) {
          console.log($menuL1Item.position().left);
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
    } else if (action === 'open') {
      activeMenuPopupVisible = true;
      var newPaddingTop = $menu.height() - 29 - 25;
    }

    // Wrong event trigger. Quit.
    if (typeof newPaddingTop === 'undefined') {
      return false
    }

    $sectionContent.animate({
      paddingTop: newPaddingTop
    }, animateSpeedSlide, function() {
      if (action === 'open') {
        $menu.find('div.container-12 > div').vpMenuEqualHeight();
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
    var top = $('#section-header').offset().top + $('#section-header').height() + 1;
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

})(jQuery);
