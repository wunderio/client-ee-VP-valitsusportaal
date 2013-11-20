(function($) {
  var _data = {};
  // TODO: this should come either as a module parameter or
  // module admin option.
  var _lang = 'est';

  Drupal.behaviors.id_card = {
    attach: function(context, settings) {
      // Click event to start process.
      $('#edit-id-card-sign', context).unbind('click').bind('click', function(e) {
        e.preventDefault();
        $('#digidoc-sign-status', context).trigger('id_card_sign_start');
      });

      // Attach custom event to start sign process.
      var t = 'id_card_sign_start';
      $('#digidoc-sign-status', context).unbind(t).bind(t, function(e) {
        // Get initial certificate data.
        var certificate = Drupal.behaviors.id_card.initialize();
        if (certificate['error'] && certificate['error'] === true) {
          Drupal.behaviors.id_card.error(certificate['message']);
          return;
        }
        _data = $.extend({}, {'state': 'initialize'}, certificate);

        // Update form post data.
        var ajax = Drupal.ajax['edit-id-card-sign'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });

      // Attach custom event to finalize sign process.
      var t = 'id_card_sign_finalize';
      $('#digidoc-sign-status', context).unbind(t).bind(t, function(e, hash, signature_id) {
        // Get signature data.
        var signature = Drupal.behaviors.id_card.finalize(hash, signature_id);
        if (signature['error'] && signature['error'] === true) {
          Drupal.behaviors.id_card.error(signature['message']);
          return;
        }
        _data = $.extend(_data, {'state': 'finalize'}, signature);

        // Update form post data.
        var ajax = Drupal.ajax['edit-id-card-sign'];
        ajax.options.data = $.extend(ajax.options.data, _data);

        // Re-submit form.
        ajax.form.ajaxSubmit(ajax.options);
      });
    },

    /**
     * Initialize signing process.
     *
     * @return {Object}
     */
    initialize: function() {
      try {
        loadSigningPlugin(_lang);
        var selectedCertificate = new IdCardPluginHandler(_lang).getCertificate();
      }
      catch (ex) {
        return {
          'error': true,
          'message': ex.message,
          'code': ex.returnCode
        };
      }

      // Extract ID code, certificate and certificate ID from ID card, and
      // attach them to request going to backend to initialize sign process.
      return {
        'idcode': selectedCertificate.CN.split(",")[2],
        'cert': selectedCertificate.cert,
        'cert_id': selectedCertificate.id
      };
    },

    /**
     * Finalize digital signature.
     *
     * @param {String} hash
     * @param {String} signature_id
     * @return {Object}
     */
    finalize: function(hash, signature_id) {
      var cert_id = _data['cert_id'];

      // Try to sign returned hash.
      try {
        var signature = new IdCardPluginHandler(_lang).sign(cert_id, hash);
      }
      catch(ex) {
        return {
          'error': true,
          'message': ex.message,
          'code': ex.returnCode
        };
      }

      return {
        'signature_id': signature_id,
        'signature': signature
      };
    },

    /**
     * Error handling.
     *
     * @param {Object} message
     * @return void
     */
    error: function(message) {
      jQuery('#digidoc-sign-status').html(
        '<div><div class="messages error">' + message + '</div></div>'
      );
    }
  };
})(jQuery);
