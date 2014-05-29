/**
 * Remove 'href', add 'role' and 'tabindex' for screenreaders.
 * TODO. This should actually be part of zero_menu_popup.js
 */

(function($) {
  $("#menu-mlid-4383 > a").removeAttr("href").attr({ tabindex: "0", role: "button"});
})(jQuery);



