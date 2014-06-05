/**
 * Override Drupal.Views.parseViewArgs to deal with language prefix glossary issue.
 */
(function ($) {


  /**
   * From Views, base.js. Overriding to include lang path. https://drupal.org/node/1803758
   * Helper function to return a view's arguments based on a path.
   */

  Drupal.Views = Drupal.Views || {};
  Drupal.Views.parseViewArgs = function (href, viewPath) {

    // Check for and add language prefix.
     if (Drupal.settings.pathPrefix) {
       var viewPath = Drupal.settings.pathPrefix + viewPath;
     }

    var returnObj = {};
    var path = Drupal.Views.getPath(href);
    // Ensure we have a correct path.
    if (viewPath && path.substring(0, viewPath.length + 1) == viewPath + '/') {
      var args = decodeURIComponent(path.substring(viewPath.length + 1, path.length));
      returnObj.view_args = args;
      returnObj.view_path = path;
    }
    return returnObj;
  };


  /**
   * Doing a bunch of stuff to increase size of
   * chosen letter in ajaxified glossary.
   */

  // Default to A on initial page load.
  if (window.location.hash.length == 0) {
    $(document).ready(function() {
      $('.attachment .view-ministrid a').each(function() {
        _activate_letter('A');
      });
    });
  }


  // Attach click behaviour to glossary letters.
  Drupal.behaviors.varasemadGlossaryActiveLetter = {
    attach: function (context, settings) {
      $('.attachment .view-ministrid a', context).click(function () {
        window.location.hash = $(this).text();
        _activate_letter($(this).text());
      });
    }
  };


  // Since attachment is re-loaded, after ajax call we re-style chosen letter.
  $(document).ajaxSuccess(function() {
    if ($('.attachment .view-ministrid a').length > 1) {
      _activate_letter(window.location.hash.substring(1,2));
    }
  });


  // Make these "table" header non-links into something clickable.
  /* var links = new Array('order_minister', 'order_gov_number', 'order_period', 'order_duration', 'order_role');
  for (x in links) {
    // console.log(links[x]);
  } */


  /**
   * Helper function to determine filtered letter.
   */
  function _activate_letter(letter) {
    $('.attachment .view-ministrid a').each(function() {
      $(this).css('font-size', '12px');
      if ($(this).text() == letter) {
        $(this).css('font-size', '22px');
      }
    });  
  }


  // console.log($('.tase-3').length);
  // if ($('.tase-3').length() > 0) {
/*
    $('.tase-3').hide(); // , .tase-2, .tase-4

    $('.struktuur ul li a').click(function(e) {
	  e.preventDefault();
	  $(this).parent().children('ul').toggle('fast');
    });
*/
  // }



})(jQuery);
