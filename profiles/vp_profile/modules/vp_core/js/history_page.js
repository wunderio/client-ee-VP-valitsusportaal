/**
 *
 */
(function ($) {
  Drupal.behaviors.initHistoryPage = {
    attach: function() {
      var $body = $('body');
      var $masonry_container = $('.view-history div.view-content');
      //var masonry_mobile_column_width = 100 + 10;
      var masonry_tablet_column_width = 288 + 0;
      var masonry_desktop_column_width = 438 + 0;
      var $timeline = $masonry_container.find('.timeline');
      var dashes

      $masonry_container.find('span.read-more').each(function() {
        $(this).appendTo($(this).prev().find('p:last-child'));
      });

      var vpCoreCustomMasonry = function() {
        var currentColumnWidth = masonry_desktop_column_width;

        // Check column with based on layout.
        var vpCoreSetCurrentColumnWidth = function() {
          if ($body.hasClass('responsive-layout-mobile')) {
            currentColumnWidth = masonry_mobile_column_width;
          } else if ($body.hasClass('responsive-layout-tablet')) {
            currentColumnWidth = masonry_tablet_column_width;
          } else if ($body.hasClass('responsive-layout-desktop')) {
            currentColumnWidth = masonry_desktop_column_width;
          }
        }

        var vpCoreSetTimeline = function() {
          var last_pos_top = 0;
          $masonry_container.find('.views-row').each(function() {
            $row = $(this);
            var pos = $row.position();
            if(pos.left == 0) {
              $row.removeClass('left').removeClass('right').addClass('left');
            } else {
              $row.removeClass('left').removeClass('right').addClass('right');
            }
            last_pos_top = pos.top + 34;
            //$timeline.append('<div class="bullet" style="top: ' + last_pos_top + 'px"></div>');
          });
          // Set dashes afer the last bullet.
          //console.log($timeline.find('.dashed-line.end'));
          $timeline.find('.dashed-line.end').css('top', last_pos_top);
          $timeline.find('.dashed-line.middle').css('bottom', $timeline.height()-last_pos_top);
        }

        // First init or update.
        if (!$masonry_container.hasClass('vp_core_custom_masonry_processed')) {
          if ($body.hasClass('responsive-layout-mobile')) {
            return true;
          }

          $masonry_container.imagesLoaded(function () {
            vpCoreSetCurrentColumnWidth();
            $masonry_container.masonry({
              itemSelector: '.views-row',
              columnWidth: currentColumnWidth,
              isAnimated: 0,
              animationOptions: {
                duration: 500
              },
              isResizable: 1,
              isFitWidth: 0,
              gutterWidth: 54,
              isRTL: 0
            }).addClass('vp_core_custom_masonry_processed');
            vpCoreSetTimeline();
          });
        } else {
          if ($body.hasClass('responsive-layout-mobile')) {
            $masonry_container.masonry().masonry('destroy').removeClass('vp_core_custom_masonry_processed');
            return true;
          }

          vpCoreSetCurrentColumnWidth();
          $masonry_container.masonry( 'option', { columnWidth: currentColumnWidth} ).masonry('reload');
          vpCoreSetTimeline();
        }
      }

      // Let's init masonry as fast as possible so now flicker would occur.
      vpCoreCustomMasonry();

      // Now execute masonry after responsive-layout classes have been set on body tag
      // and get real width.
      var timer = setInterval(function() {
      if ($body.get(0).className.indexOf('responsive-layout-') >= 0 ? true : false) {
          vpCoreCustomMasonry();
          clearInterval(timer);
        }
      }, 200);

      $(window).resize(function() {
        vpCoreCustomMasonry();
      });
    }
  }
})(jQuery);
