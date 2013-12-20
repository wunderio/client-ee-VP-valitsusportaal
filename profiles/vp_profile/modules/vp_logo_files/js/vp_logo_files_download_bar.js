(function ($) {

  Drupal.behaviors.zipcart = {
    attach: function (context, settings) {
      /**
       * Turn true and false strings to boolean.
       *
       * $.cookie returns always strings.
       */
      parseBoolean = function (str) {
        switch (str.toLowerCase()) {
          case 'true':
            return true;

          case 'false':
            return false;

          default:
            throw new Error ("parseBoolean: cannot convert string to boolean.");
        }
      };

      $('a.zipcart').click(function(e) {
        vpLogoFilesShowLoader();

        if (e.target.tagName.toLowerCase() == 'a') {
          a = e.target;
        }
        else {
          if (a = $(e.target).parents('a[href]')) {
            // found parent a
          }
          else {
            return;
          }
        }
        e.preventDefault();
        // handle subdir Drupal installation
        filePath = $(a).attr('href').replace(Drupal.settings.basePath, '');
        // add AJAX parameter
        filePath = filePath.replace(Drupal.settings.zipcart.path_add, Drupal.settings.zipcart.path_add_ajax) ;
        // add Drupal basePath
        filePath = Drupal.settings.basePath + filePath;
        // remove multiple slashes at start
        filePath = filePath.replace(/^\/+/, '/');

        $.ajax({
          'url': filePath,
          'dataType': 'json',

          success: function(data, textStatus, req) {
            $.get(Drupal.settings.vpLogoFiles.downloadBarPath, function(data) {
              $('.bottom-download-bar').html(data);
            });
          },

          error: function(req, textStatus, errorThrown) {
            alert(Drupal.t('Unable to add the file to your ZipCart.'));

            if (console) {
              console.log(req);
              console.log(textStatus);
              console.log(errorThrown);
            }

            switch (textStatus) {
              case 'timeout' :
              case 'null' :
              case 'error' :
              case 'parsererror' :
              case 'notmodified' :
                break;
              default :
                break;
            }
            // probably not permitted - handle file access restriction here
          }
        });
      });

      // Open/close download bar.
      $('div.bottom-download-bar .bar-title').live('click', function(e) {
        e.preventDefault();
        var $downloadBar = $('div.bottom-download-bar');
        $downloadBar.toggleClass('opened');
        if ($downloadBar.hasClass('opened')) {
          $.cookie('vp_logo_files_download_bar_opened', true, {path: Drupal.settings.basePath});
        }
        else {
          $.cookie('vp_logo_files_download_bar_opened', false, {path: Drupal.settings.basePath});
        }
      });

      // Clear-list ajax call.
      $('div.bottom-download-bar .reset-list').live('click', function(e) {
        e.preventDefault();
        ajaxSubmit($(this).attr('href'));
      });

      // Open/close file groups.
      $('div.bottom-download-bar .files-group > .item-trigger').live('click', function(e) {
        e.preventDefault();
        var $this = $(this).parent();
        $this.toggleClass('opened');
        var vpLogoFilesFilesGroupCookieNameOpened = 'vp_logo_files_download_bar_' + $this.attr('id').replace(/-/g, '_') + '_opened';
        if ($this.hasClass('opened')) {
          $.cookie(vpLogoFilesFilesGroupCookieNameOpened, true, {path: Drupal.settings.basePath});
        }
        else {
          $.cookie(vpLogoFilesFilesGroupCookieNameOpened, false, {path: Drupal.settings.basePath});
        }
      });

      // Single file remove ajax call.
      $('div.bottom-download-bar a.remove-file').live('click', function(e) {
        e.preventDefault();
        ajaxSubmit($(this).attr('href'));
      });

       // Single file remove ajax call.
      $('div.bottom-download-bar a.download').live('click', function(e) {
        $('div.bottom-download-bar div.bar-actions').remove();
        $('div.bottom-download-bar div.files-container').remove();
        var $barTitle = $('div.bottom-download-bar .bar-title');
        barTitleHtml = $barTitle.html();
        $barTitle.html(barTitleHtml.replace(/\((?:[0-9])\)/, '(0)'));
      });

      /**
       * Show loader, fetch url and reload download bar.
       * @param  {string} href Url to fetch
       * @return void
       */
      var ajaxSubmit = function(href) {
        vpLogoFilesShowLoader();

        $.ajax({
          'url': href,
          'dataType': 'html',

          success: function(data, textStatus, req) {
            $.get(Drupal.settings.vpLogoFiles.downloadBarPath, function(data) {
              $('div.bottom-download-bar').html(data);
            });
          },
        });
      }

      /**
       * Show ajax loader.
       * @return void
       */
      var vpLogoFilesShowLoader = function() {
        $('span.bottom-download-bar-loader').removeClass('element-hidden');
      }
    }
  };
})(jQuery);
