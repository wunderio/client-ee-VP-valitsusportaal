/**
 * @file
 * Provides JavaScript for Inline Entity Form.
 * Custom js behavior
 */

(function($) {

    /**
     * Updates title value on date and source change.
     */
    $(document).ready(function() {
        $(document).ajaxComplete(function(event, xhr, settings) {
            var dateInput = $('[id^=edit-field-weekly-schedule-und-][id$=-value-datepicker-popup-0]');
            var source = $('[id^=edit-field-weekly-schedule-und-][id$=-weekly-schedule-source-und]');
            var sourceValue = $('[id^=edit-field-weekly-schedule-und-][id$=-weekly-schedule-source-und] option:selected').text();
            var title = '[id^=edit-field-weekly-schedule-und-][id$=-form-title]';
            $(title).val(dateInput.val() + ' ' + sourceValue);

            dateInput.change(function() {
                $(this).parents('.form-wrapper').find(title).val($(this).val() + ' ' + sourceValue)
            });

            source.change(function() {
                sourceValue = $('option:selected', this).text();
                $(this).parents('.form-wrapper').find(title).val(dateInput.val() + ' ' + sourceValue)
            })
        });
    });

})(jQuery);
