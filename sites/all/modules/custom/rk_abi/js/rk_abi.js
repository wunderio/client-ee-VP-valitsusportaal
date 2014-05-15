/**
 * JS abifail.
 * MM. Riigikantselei.
 */
(function ($) {

  // Kui teadaanne ei ole avalehel, siis tuleb jube palju tühjust.
  Drupal.behaviors.rk_abi_avalehtWhitespace = {
    attach: function (context, settings) {

      // Eesti ning ingliskeelsetel avalehtedel plokk selle ID'ga.
      if (!$('#block-views-32b717fa40c1fc37f8cb2ace7b065d6b').length) {
        $('.view-id-top_news_tabs').css('padding-bottom', '0');
      }
    }
  };

})(jQuery);
