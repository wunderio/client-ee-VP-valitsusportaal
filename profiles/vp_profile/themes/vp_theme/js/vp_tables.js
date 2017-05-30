/**
 * VP Tables.
 */
(function($) {

    $('.slide-row').each(function() {
        $(this).find('td::first').prepend('<img src="/profiles/vp_profile/themes/vp_theme/img/10-global/chevron-down.png" class="toggle-icon down" title="chevron-down">')
        $(this).find('td::first').prepend('<img src="/profiles/vp_profile/themes/vp_theme/img/10-global/chevron-up.png" class="toggle-icon up hidden" title="chevron-up">')
        $(this).nextUntil('.slide-content-last-row + *').hide();
    });

    $('.slide-row').on('click', function() {
        $(this).nextUntil('.slide-content-last-row + *').toggle();
        $(this).find('.toggle-icon.down').toggleClass('hidden');
        $(this).find('.toggle-icon.up').toggleClass('hidden');
    })

    $("table.vp-table").on("scroll", function() {
        $(this).find('*').width($(this).width() + $(this).scrollLeft());
    });

    $("table.vp-table").wrap('<div class="vp-table-wrapper"></div>');

    $.each(document.getElementsByClassName("vp-table-wrapper"), function() {
        this.addEventListener("scroll", function() {
            var translate = "translate(0," + this.scrollTop + "px)";
            this.querySelector("thead").style.transform = translate;
        });
    });

})(jQuery);
