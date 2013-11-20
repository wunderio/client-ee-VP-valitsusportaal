
(function ($) {
  $module5 = $('#static-module-5');

  if ($module5.length) {
    var $tabs,
        slides = new Array(),
        $slides,
        $h3;

    var enableEvents = function() {
      $tabs = $module5.find('li.tab');
      $tabs.click(function() {
        $tabs.removeClass('active');
        $(this).addClass('active');
        var tabs_re = /tab-([0-9]*)/;
        var results = tabs_re.exec(this.className);
        showSlide(results[1]);
      });
    };

    var uiCreateSidebar = function() {
      var $mainTitle = $module5.find('h2');
      var aside = '<div class="aside"><h2>' + $mainTitle.text() + '</h2><ul class="tabs">';
      //$mainTitle.remove();
      $h3 = $module5.find('h3');
      $h3.each(function(i) {
        $this = $(this);
        aside += '<li class="tab tab-' + i  + (i===0 ? ' active' : '') + '"><div>' + $this.text() + '</div></li>';
      });
      aside += '</ul></div>';
      $(aside).prependTo($module5);
    }

    var uiCreateSlides = function() {
      $h3.each(function(i) {
        $this = $(this);
        slides.push(new Array());
        var $row = $(this).next('.row');
        slides[slides.length-1].push($this);
        slides[slides.length-1].push($row);

        do {
          $row = $row.next('.row');
          if ($row.length) {
            slides[slides.length-1].push($row);
          }
        } while ($row.length);
      });

      $.each(slides, function(index, value) {
        var $slide = $('<div class="slide"></div>')
        $.each(value, function(index2, value2) {
          value2.appendTo($slide);
        });
        $slide.appendTo($module5.find('div.main-inner'));
        if (index === 0) {
          $slide.show();
        }
      });

      $slides = $module5.find('div.slide');
    }

    var ui = function() {
      uiCreateSidebar();
      uiCreateSlides();
    }

    var showSlide = function(index) {
      $slides.hide();
      $slides.eq(index).show();
    }

    ui();
    enableEvents();
  }

})(jQuery);
