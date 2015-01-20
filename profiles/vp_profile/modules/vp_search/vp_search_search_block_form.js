(function($){

  Drupal.behaviors.gssAutocomplete = {
    attach: function(context, settings) {
      if (typeof settings.gss == undefined) {
        return;
      }

      // Check if we can do over ssl. mm 20jan15.
      if (typeof Drupal.settings.rk_abi.rk_abi_gss_ssl != 'undefined' && Drupal.settings.rk_abi.rk_abi_gss_ssl == 1) {
        var protocol = 'https';
      }
      else {
        var protocol = 'http';
      }

      $('.gss .form-item-keys input.form-text')
        .focus(function () {
          this.select();
        })
        .mouseup(function (e) {
          e.preventDefault();
        })
        .autocomplete({
          position: {
            my: "left top",
            at: "left bottom",
            offset: "0, 5",
            collision: "none"
          },
          source: function (request, response) {
            $.ajax({
              url: protocol + "://clients1.google.com/complete/search?q=" + request.term + "&hl=en&client=partner&source=gcsc&partnerid=" + settings.gss.key + "&ds=cse&nocache=" + Math.random().toString(),
              dataType: "jsonp",
              success: function (data) {
                response($.map(data[1], function (item) {
                  return {
                    label: item[0],
                    value: item[0]
                  };
                }));
              }
            });
          },
          autoFill: true,
          minChars: 0,
          select: function (event, ui) {
            $(this).closest('input').val(ui.item.value);
            $(this).closest('form').trigger('submit');
          }
        });

      var $vpAutocompletePopup = $('<div id="vp-autocomplete"></div>');



      $(".block-search .form-item-search-block-form input.form-text")
        .focus(function () {
          this.select();
        })
        .mouseup(function (e) {
          e.preventDefault();
        })
        .bind('keyup', function(e) {
          if (e.which === 27) {
            $vpAutocompletePopup.hide();
            return true;
          }

          var input = $(this);
          if (input.val().length > 2) {
            $.ajax({
              url: protocol + "://clients1.google.com/complete/search?q=" + encodeURIComponent(input.val()) + "&hl=en&client=partner&source=gcsc&partnerid=" + settings.gss.key + "&ds=cse&nocache=" + Math.random().toString(),
              dataType: "jsonp",
              success: function (data) {
                $vpAutocompletePopup.hide();
                var lis = '';
                $.each(data[1], function(i, value) {
                  lis += '<li' + (i == 0 ? ' class="first"' : '') + '><a href="' + Drupal.settings.basePath + Drupal.settings.pathPrefix + 'search/gss/' + encodeURIComponent(value) + '">' + value + '</a></li>';
                });
                $vpAutocompletePopup.empty().append(
                  '<h2>' + Drupal.t('Contacts') + '</h2><ul id="contact-autocomplete"></ul>' +
                  '<h2>' + Drupal.t('Other') + '</h2><ul>' + lis + '</ul>').show();
                input.parent().after($vpAutocompletePopup);
                $.ajax({
                  url: Drupal.settings.basePath + Drupal.settings.pathPrefix + "contact-autocomplete/" + encodeURIComponent(input.val()),
                  dataType: "json",
                  success: function (ca_data) {
                    cs = $('#contact-autocomplete');
                    cs.html('');
                    $.each(ca_data, function(i, v) {
                      cs.append('<li' + (i == 0 ? ' class="first"' : '') + '><a href="' + Drupal.settings.basePath + Drupal.settings.pathPrefix + 'contact-search?filter=' + encodeURIComponent(v['title']) + '">' + v['title'] + '</a></li>');
                    });
                  }
                });
              }
            });
          }
        });

      $vpAutocompletePopup.click(function(e) {
        e.stopPropagation();
      });

      $('body').click(function() {
        $vpAutocompletePopup.hide();
      });
    }
  };
})(jQuery);
