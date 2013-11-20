/**
 * Change default UI Dialog and Colorbox settings.
 *
 * Also manage width between mobile, tablet and desktop screens.
 */



// UI Dialog settings.
(function($) {
  var $loadedContentIframe = false;
  var resizeTimer;
  var $zoneContent = $('#zone-content');



  /**
   * Width calculation.
   * Width is 67% of the content zone.
   */
  var calcUIDialogWidth = function(widthRatioOfContentWidth) {
    if (typeof widthRatioOfContentWidth === 'undefined') {
      widthRatioOfContentWidth = 0.67;
    }
    return $zoneContent.width() * widthRatioOfContentWidth;
  }



  var calcColorboxWidth = function(widthRatioOfContentWidth) {
    if (typeof widthRatioOfContentWidth === 'undefined') {
      widthRatioOfContentWidth = 0.67;
    }
    return calcUIDialogWidth(widthRatioOfContentWidth) - 40;
  }



  // @todo: should be included globally and set on all iframes.
  var resizeIframe = function(iframe) {
    var origWidth = iframe.attr('width');
    var origHeight = iframe.attr('height');
    var realWidth = iframe.width();
    iframe.css('height', realWidth * (origHeight/origWidth));
  }



  var resizeColorBox = function (timerLength) {
    if (resizeTimer) clearTimeout(resizeTimer);
    resizeTimer = setTimeout(function() {
      if ($('#cboxOverlay').is(':visible')) {
        $.colorbox.resize({
          innerWidth: calcColorboxWidth(0.84)
        });

        if($loadedContentIframe !== false && $loadedContentIframe.length) {
          resizeIframe($loadedContentIframe);
        }

        // Check if the image is not out of screen vertically and fix if needed.
        if ($('#colorbox').height() > $(window).height()) {
          if ($('#cboxLoadedContent').height() >= 600) {
            var difference = 600 / $('#cboxLoadedContent').height();
            var innerWidth = calcColorboxWidth(0.84) * difference;
          } else {
            var difference = $(window).height() / $('#cboxLoadedContent').height();
            var innerWidth = calcColorboxWidth(0.84) * difference;
          }
          $.colorbox.resize({
            innerWidth: innerWidth
          });
        } else if ($('#cboxLoadedContent').height() >= 600) {
          var difference = 600 / $('#cboxLoadedContent').height();
          var innerWidth = calcColorboxWidth(0.84) * difference;
          $.colorbox.resize({
            innerWidth: calcColorboxWidth(0.84) * difference
          });
        }

        $.colorbox.resize();
      }
    }, timerLength)
  }



  Drupal.behaviors.vpOverwriteDrupalColorboxSettings = {
    attach: function (context, settings) {
      settings.colorbox.initialHeight = '100px';
      settings.colorbox.initialWidth = calcColorboxWidth(0.84);
      settings.colorbox.innerWidth = calcColorboxWidth(0.84);
      settings.colorbox.reposition = false;
      settings.colorbox.speed = 0;
      settings.colorbox.transition = 'none';
    }
  };



  // Default UI Dialog settings.
  var setUIDialogDefaultSettings = function() {
    $.extend($.ui.dialog.prototype.options, {
      modal: true,
      open: function(event, ui) {
        $loadedContentIframe = $(event.target).find('iframe');
        if($loadedContentIframe !== false && $loadedContentIframe.length) {
          resizeIframe($loadedContentIframe);
        }

        // Fix centering after iframe resize.
        $dialog = $(".ui-dialog-content");
        $dialog.dialog("option", "position", "center");
      },
      position: "center",
      resizable: false,
      width: calcUIDialogWidth()
    });
  }



  // Default Colorbox settings.
  var setColorboxDefaultSettings = function() {
    $.extend($.colorbox.settings, {
      initialHeight: calcColorboxWidth(0.84) * 0.5,
      initialWidth: calcColorboxWidth(0.84) + 40,
      innerWidth: calcColorboxWidth(0.84),
      reposition: false, // We'll use reposition() method instead.
      speed: 0,
      transition: 'none'
    });
  }



  // Correcly calculate iframe content on first load.
  $(document).bind('cbox_complete', function(e) {
    $loadedContentIframe = $('#cboxLoadedContent iframe');
    resizeColorBox(0);
  });



  // Set UI Dialog settings.
  $(function() {

    if (typeof $.ui.dialog === 'undefined') {
      return;
    }

    setUIDialogDefaultSettings();
    $('.ui-widget-overlay').live('click', function() {
      $(".ui-dialog-content").dialog('close');
    });

    // On resize center and set width.
    $(window).resize(function () {
      setUIDialogDefaultSettings();
      $dialog = $(".ui-dialog-content");
      $dialog.dialog("option", "position", "center");
      if (!$dialog.hasClass('noresize')) {
        $dialog.dialog("option", "width", calcUIDialogWidth());
      }

      if($loadedContentIframe !== false && $loadedContentIframe.length) {
        resizeIframe($loadedContentIframe);
      }
    });
  });



  // Set Colorbox settings.
  $(function() {

    if (typeof $.colorbox === 'undefined') {
      return;
    }

    setColorboxDefaultSettings();

    $(window).resize(function () {
      setColorboxDefaultSettings();

      //resizeColorBox(300); // Latency makes orentation change look laggy.
      resizeColorBox(0);
    });
  });

})(jQuery);
