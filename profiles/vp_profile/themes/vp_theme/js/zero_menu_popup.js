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
  var $li = $('#zone-portal-navigation-wrapper div.menu-block-wrapper > .menu > li.expanded').each(function() {
    var $this = $(this);
    var $popup = $this.find('.menu')
      .addClass('portal-navigation-menupopup')
      .attr('id', $this.attr('id') + '-menu')
      //.appendTo('body');

    $popup
      .mouseenter(function() {
        clearTimeout(t);
      })
      .mouseleave(function() {
        hideMenu($popup);
      });
  });

  $popups = $('body > ul.portal-navigation-menupopup');

  $li.bind('mouseenter', function() {
    mouseenterEvent(this);
  });
  $li.find('> a').bind('focus', function() {
    mouseenterEvent(this);
  });
  $li.mouseleave(function() {
    mouseleaveEvent(this);
  });

  $popups
    .mouseenter(function() {
      clearTimeout(t);
    });

  $('ul.portal-navigation-menupopup .last a').bind('blur', function(e) {
    hideMenu($(this).parent().parent());
  });

  var mouseenterEvent = function(that) {
    hideAllMenus();
    if (that.tagName == 'A') {
      var $this = $(that).parent();
    }
    else {
      var $this = $(that);
    }

    var openDelay;

    if (popupOpened) {
      openDelay = 0;
    } else {
      openDelay = 150;
    }
    t = window.setTimeout(function() {
      showMenu($('#' + $this.attr('id') + '-menu'), $this);
    }, openDelay);
  }

  var mouseleaveEvent = function(that) {
    var $this = $(that);
    clearTimeout(t);
    t = window.setTimeout(function() {
      hideMenu($('#' + $this.attr('id') + '-menu'), $this);
    }, 250);
  }

  var hideAllMenus = function() {
    $popups.hide();
  }

  var showMenu = function($popup, $li) {
    popupOpened = true;
    hideAllMenus();
    var offset = $li.offset();
    $popup.show();
  }

  var hideMenu = function($popup) {
    popupOpened = false;
    $popup.hide();
  }

})(jQuery);
