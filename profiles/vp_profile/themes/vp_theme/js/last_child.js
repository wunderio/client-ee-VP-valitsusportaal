// IE7 and IE8.
(function($) {
  if ($.support.leadingWhitespace == false) {
    $('.container-12 > :last-child, ul.widget-menu > :last-child, .views-row:last-child, .field-group-format:last-child, th:last-child, td:last-child').addClass('last-child')
  }
})(jQuery);
