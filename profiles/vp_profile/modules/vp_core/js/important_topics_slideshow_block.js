/**
 * Clone 1 slideshow and restructure it to have only 1 box per slide. That's
 * for tablet. Then switch them based on the screen size from css.
 *
 * This solusion is very fast from the front-end perspective, because we do
 * not use behaviours and the script is included from footer of HTML.
 */
(function($) {

  var idOriginal = 'flexslider-important-topics-slideshow';
  var $fsDesktop = $('#' + idOriginal).attr('id', idOriginal + '-desktop');
  var $fsTablet = $fsDesktop.clone().attr('id', idOriginal + '-tablet');
  $fsDesktop.after($fsTablet);



  // Create new structure for tablet slider.
  $fsTabletSlidesContainer = $fsTablet.find('div.slides');
  var $cols = $fsTablet.find('div.col');
  $cols.each(function(i) {
    $row = $('<div class="row row-dynamic row-' + (i + 1) + (i === 0 ? ' row-first' : '') + (i + 1 === $cols.length ? ' row-last' : '') +'"></div>');
    $row.appendTo($fsTabletSlidesContainer).append(this);
    $fsTablet.find('div.row').not('.row-dynamic').remove();
  });



  $(window).load(function() {
    $fsDesktop.flexslider({
      selector: '.slides > .row',
      controlNav: true,
      directionNav: false,
      animation: 'slide',
      direction: 'horizontal'
    });

    $fsTablet.flexslider({
      selector: '.slides > .row',
      controlNav: true,
      directionNav: false,
      animation: 'slide',
      direction: 'horizontal'
    });
  });

})(jQuery);
