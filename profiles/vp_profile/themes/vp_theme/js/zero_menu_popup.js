/**
 * Zero menu js popup.
 */
(function ($) {
  var
    $popups, // All popups.
    popupOpened = false,
    focusInPopup = false,
    t;      // Timeout.

  // Alter menu popups, attach events and append to body.
  // Need to change location in DOM because header has overflow: hidden set.
  var $li = $('#zone-portal-navigation-wrapper div.menu-block-wrapper > .menu > li');
  var $liNotExpanded = $li.not('.expanded');
  var $liExpanded = $li.filter('.expanded').each(function() {
    var $this = $(this);
    var $popup = $this.find('.menu')
      .addClass('portal-navigation-menupopup')
      .attr('id', $this.attr('id') + '-menu');

    $popup
      .mouseenter(function() {
        clearTimeout(t);
      })
      .mouseleave(function() {
        hideMenu($popup);
      });
  });

  $popups = $('ul.portal-navigation-menupopup');

  /*$liExpanded.bind('click', function() {
    mouseenterEvent(this);
  });
*/
  $liExpanded.find('> a')
    .bind('focus', function(e) {
      mouseenterEvent(this, e);
    });
  $liNotExpanded.find('> a').bind('blur', function() {
    hideAllMenus();
  });
  $liExpanded.mouseleave(function() {
    mouseleaveEvent(this);
  });

  if ('ontouchstart' in document.documentElement) {
    $liExpanded.find('> a').on('touchstart', function(e) { mouseenterEvent(this, e); });
    $('body').on('touchstart', function() { hideAllMenus() });
    $liExpanded.find('ul.portal-navigation-menupopup').on('touchstart', function(e) { e.stopPropagation(); });
  } else {
    $liExpanded.find('> a').bind('click', function(e) { mouseenterEvent(this, e); });
    $('body').click(function() { hideAllMenus(); });
    $liExpanded.find('ul.portal-navigation-menupopup').click(function(e) { e.stopPropagation(); });
  }

  $popups
    .mouseenter(function() {
      clearTimeout(t);
    });

  // Close the menus if escape is used.
  $('body').keydown(function(e) {
    if (popupOpened && e.keyCode === 27) {
      var nextItem = $popups.filter(':visible').parent().next().find('> a');
      if (nextItem.length === 0) {
        var nextItem = $popups.filter(':visible').parent().parent().find('> :first-child').find('> a');
      }
      nextItem.focus()
      hideAllMenus();
    }
  });

  $('ul.portal-navigation-menupopup .last a').bind('blur', function(e) {
    hideMenu($(this).parent().parent());
  });

  var mouseenterEvent = function(that, e) {
    hideAllMenus();
    if (that.tagName == 'A') {
      var $this = $(that).parent();
    }
    else {
      var $this = $(that);
    }

    var openDelay = 0;

    t = window.setTimeout(function() {
      showMenu($('#' + $this.attr('id') + '-menu'), $this);
    }, openDelay);

    e.stopPropagation();
    e.preventDefault();
  }

  var mouseleaveEvent = function(that) {
    var $this = $(that);
    clearTimeout(t);
    t = window.setTimeout(function() {
      hideMenu($('#' + $this.attr('id') + '-menu'), $this);
    }, 400);
  }

  var hideAllMenus = function() {
    $popups.hide();
  }

  var showMenu = function($popup, $liExpanded) {
    popupOpened = true;
    hideAllMenus();
    var offset = $liExpanded.offset();
    $popup.show();
  }

  var hideMenu = function($popup) {
    popupOpened = false;
    $popup.hide();
  }

})(jQuery);
