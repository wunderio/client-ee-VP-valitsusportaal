(function ($) {

Drupal.behaviors.initColorbox = {
  attach: function (context, settings) {
    if (!$.isFunction($.colorbox)) {
      return;
    }
    settings.colorbox = $.extend(settings.colorbox, {
      onComplete: function() {
        if (this.rel !== '') {

          var wrapper = $(this).closest('.views-row');

          var title = $.trim(wrapper.find('.views-field-field-title').text());
          var author = $.trim(wrapper.find('.views-field-field-author').text());
          var gallery_author = $.trim(wrapper.find('.views-field-field-author-1').text());
          var gallery_date = $.trim(wrapper.find('.views-field-field-date-1').text());
          var image_url = $.trim(wrapper.find('.views-field-field-picture-1 > div > a').attr("href"));
		  var img_date = $.trim(wrapper.find('.views-field-field-date').text());

          var image_height = $('#cboxLoadedContent .cboxPhoto').height();

          $('#cboxTitle').html(''+
            '<div class="description2">' + (img_date.length ? img_date : gallery_date) + ' | ' + (author.length ? author : gallery_author)+ '</div>' +
            '<div class="caption_description">' + (title.length ? title: ' ') + '</div>' +
            (image_url.length ? '<div class="download"><a href="' + image_url + '">' + Drupal.t('Download original') + '</a></div>' : '')
          );

        } else {
          $('#cboxTitle').hide();
        }
      }
    });
    $('a, area, input', context)
      .filter('.colorbox')
      .once('init-colorbox-processed')
      .colorbox(settings.colorbox);
  }
};



{
  $(document).bind('cbox_complete', function () {
    Drupal.attachBehaviors('#cboxLoadedContent');
  });
}

})(jQuery);
