(function($) {
  var _data = {};
  // TODO: this should come either as a module parameter or
  // module admin option.
  var _lang = 'est';
  var _timeout = null;

  Drupal.behaviors.mobiil_id = {
    attach: function(context, settings) {
      var ajax = settings.ajax;
      if (ajax && ajax['edit-mobiil-id-sign']) {
        Drupal.behaviors.mobiil_id.sign(context, settings);
      }
      else {
        Drupal.behaviors.mobiil_id.auth(context, settings);
      }
    },

    auth: function(context, settings) {
      // Click event for the Mobiil-ID login method selection.
      $('#mobiil-id-link', context).unbind('click').bind('click', function(e) {
        e.preventDefault();
        $('#digidoc-auth-service-wrapper').addClass('element-hidden');
        $('#mobiil-id-auth-wrapper').removeClass('element-hidden');
        $('#digidoc-auth-service-mobiil_id').removeClass('element-hidden');
        $('#user-login div.form-item-name').addClass('element-hidden');
        $('#user-login div.form-item-pass').addClass('element-hidden');
        $('#user-login div.form-actions').addClass('element-hidden');
      });
      if ($("input[name^='mobiil_id_phone_number']").attr('type') == 'hidden') {
        $("#edit-mobiil-id-auth").css("display", "none");
      } else {
        $("#edit-mobiil-id-auth").css("display", "block");
      }

      // Click event for Mobiil-ID login cancel.
      $('#mobiil-id-cancel', context).unbind('click').bind('click', function(e) {
        e.preventDefault();
        $('#digidoc-auth-service-wrapper').removeClass('element-hidden');
        $('#mobiil-id-auth-wrapper').addClass('element-hidden');
        $('#digidoc-auth-service-mobiil_id').addClass('element-hidden');
        $('#user-login div.form-item-name').removeClass('element-hidden');
        $('#user-login div.form-item-pass').removeClass('element-hidden');
        $('#user-login div.form-actions').removeClass('element-hidden');
      });

      // Click event for the "Authenticate" button.
      $('#edit-mobiil-id-auth', context).unbind('click').bind('click', function(e) {
        e.preventDefault();
        $('#digidoc-auth-service-mobiil_id', context).trigger("mobiil_id_auth_start");
      });

      // Keypress event for the phone number field.
      $('.form-item-mobiil-id-phone-number input').unbind('keypress').bind('keypress', function(e) {
        if (e.which == 13) {
          e.preventDefault();
          $('#digidoc-auth-service-mobiil_id').trigger('mobiil_id_auth_start');
        }
      });

      // Attach event for Mobiil-ID authentication process start.
      var t = 'mobiil_id_auth_start';
      $('#digidoc-auth-service-mobiil_id').unbind(t).bind(t, function(e) {
        var phone = $('#modal-content input[name="phone"]', context).val();
        _data = $.extend({}, {'state': 'initialize'}, {'phone_num': phone});

        // Update form post data.
        var ajax = Drupal.ajax['edit-mobiil-id-phone-number'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });

      // Attach event for Mobiil-ID sign process finalize.
      var t = 'mobiil_id_auth_finalize';
      $('#digidoc-auth-service-mobiil_id', context).unbind(t).bind(t, function(e) {
        _data = $.extend({}, {'state': 'finalize'});

        // Update form post data.
        var ajax = Drupal.ajax['edit-mobiil-id-phone-number'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });
    },

    sign: function(context, settings) {
      // Click event for the "Sign" button.
      $('#edit-mobiil-id-sign', context).unbind('click').bind('click', function(e) {
        e.preventDefault();
        $('#digidoc-sign-status', context).trigger("mobiil_id_sign_start");
      });

      // Attach event for Mobiil-ID sign process start.
      var t = 'mobiil_id_sign_start';
      $('#digidoc-sign-status', context).unbind(t).bind(t, function(e) {
        _data = $.extend({}, {'state': 'initialize'});

        // Update form post data.
        var ajax = Drupal.ajax['edit-mobiil-id-sign'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });

      // Attach event for Mobiil-ID sign process finalize.
      var t = 'mobiil_id_sign_finalize';
      $('#digidoc-sign-status', context).unbind(t).bind(t, function(e) {
        _data = $.extend({}, {'state': 'finalize'});

        // Update form post data.
        var ajax = Drupal.ajax['edit-mobiil-id-sign'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });
    }
  };
})(jQuery);
