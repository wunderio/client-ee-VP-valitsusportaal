(function($) {

Drupal.behaviors.geo_filter = Drupal.behaviors.geo_filter || {
  attach: function(context, settings) {
    // update a tags containing mailto addresses
    $('a[href]').each(function(i) {
      var href = $(this).attr('href');
      // Hack alert! I put "esto" into "contact" = conestotact.
      // Original "contact" in regexp screws with VP /contact view links.
      // It makes them all into mailto links in Views UI. mm.
      var address = href.replace(/.*conestotact\/([a-z0-9._%-]+)\/([a-z0-9._%-]+)\/([a-z.]+)/i,'$1' + '@' + '$2' + '.' + '$3');
      if (href != address) {
        $(this).attr('processed', 'processed');
        $(this).attr('href', 'mailto:' + address);
        $(this).html(
          $(this).html().replace(/([a-z0-9._%-]+)\[at\]([a-z0-9._%-]+)\[dot\]([a-z.]+)/i,'$1' + '@' + '$2' + '.' + '$3')
        );
      }
    });
    // update any other elements containing obfuscated emails
    $("*:contains('[at]')").filter(function(){
        // filter to only select the immediate element
        return $(this).find("*:contains('[at]')").length == 0
    })
    .each(function() {
      $this = $(this);
      $this.html(
        $this.html().replace(/([a-z0-9._%-]+)\[at\]([a-z0-9._%-]+)\[dot\]([a-z.]+)/ig,'$1' + '@' + '$2' + '.' + '$3')
      );
    });
  }
}

})(jQuery);

