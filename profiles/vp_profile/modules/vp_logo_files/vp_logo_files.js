(function($){
  var $body = $('body');
  var $logo_file_view = $("#block-system-main div.view-id-logo_file");
  var $views_row = $logo_file_view.find('div.views-row');

  // Language switcher and show logo.
  (function() {
    $logo_file_view.find("div.views-row > div.item-content").each(function(vr_i){
      var options = "";
      $(this).find("div.field-collection-view").each(function(fc_i){
        if (fc_i !== 0)
          $(this).hide();
        $(this).addClass("logo-files-" + vr_i + "-" + fc_i);
        var option = $(this).find("div.field-name-field-logo-files-lang").text();
        $(this).find("div.field-name-field-logo-files-lang").hide();
        options += '<option value="logo-files-' + vr_i + "-" + fc_i + '">' + option + "</option>";

        var img_src = $(this).find("div.group-logo-files-web a.sml-btn").attr("href");
        $(this).prepend('<div class="logo-wrapper"><div><div><img src="'+img_src+'" /></div></div></div>');
      });
      $(this).prepend("<select>" + options + "</select>");
    });

    $logo_file_view.find("select").on("change", function(){
      $("div." + $(this).val()).parent().children().each(function(){
        $(this).hide();
      });
      $("div." + $(this).val()).show();
    });
  })();

  // Toggle views-row.
  $(window).load(function() {
    setTimeout(function() {
      // Open first row.
      $views_row.each(function(i) {
        var $el = $(this);
        if (i !== 0) {
          $el.addClass('closed');
          fix_vertical_logo_alignment($(this));
        }
        else {
          $el.addClass('opened');
        }
      });

      $views_row.find('.item-trigger-title').click(function(e) {
        e.preventDefault();
        $this_views_row = $(this).parent().parent();
        $this_views_row.toggleClass('closed');
        $this_views_row.toggleClass('opened');
        fix_vertical_logo_alignment($this_views_row);
      });
    }, 50);
  });

  var fix_vertical_logo_alignment = function($row) {
    var is_mobile = $body.filter('.responsive-layout-mobile').length ? true : false;
    var $td = $row.find('.logo-wrapper > div > div');
    if (!is_mobile) {
      var is_closed = $row.filter('.closed').length ? true : false;
      if (is_closed) {
        $td.css('height', $row.height());
      }
      else {
        $td.attr('style', '');
      }
    }
    else {
      $td.attr('style', '');
    }
  }

/*
  $(window).load(function() {
    $views_row.each(function(i) {
      if (i !== 0) {
        fix_vertical_logo_alignment($(this));
      }
    });
  });
  */

})(jQuery);
