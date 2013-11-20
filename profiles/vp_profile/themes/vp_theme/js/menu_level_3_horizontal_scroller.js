/**
 * Zero menu js popup.
 */
(function ($) {
  var
    $menu,
    $menuItems,
    $menuItemsParent,
    $prev,
    $next,
    steps = new Array(),
    stepIndex = 0,
    menuWidth,
    menuHeight,
    menuItemsParentWidth = 0,
    menuItemsParentWidthInitial = 0,
    animateSpeed = 300;

  $menu = $('#block-menu-block-5');

  // From http://stackoverflow.com/questions/4383226/using-jquery-to-know-when-font-face-fonts-are-loaded
  var waitForWebfonts = function(fonts, callback) {
    var loadedFonts = 0;
    for(var i = 0, l = fonts.length; i < l; ++i) {
        (function(font) {
            var node = document.createElement('span');
            // Characters that vary significantly among different fonts
            node.innerHTML = 'giItT1WQy@!-/#';
            // Visible - so we can measure it - but not on the screen
            node.style.position      = 'absolute';
            node.style.left          = '-10000px';
            node.style.top           = '-10000px';
            // Large font size makes even subtle changes obvious
            node.style.fontSize      = '300px';
            // Reset any font properties
            node.style.fontFamily    = 'sans-serif';
            node.style.fontVariant   = 'normal';
            node.style.fontStyle     = 'normal';
            node.style.fontWeight    = 'normal';
            node.style.letterSpacing = '0';
            document.body.appendChild(node);

            // Remember width with no applied web font
            var width = node.offsetWidth;

            node.style.fontFamily = font;

            var interval;
            function checkFont() {
                // Compare current width with original width
                if(node && node.offsetWidth != width) {
                    ++loadedFonts;
                    node.parentNode.removeChild(node);
                    node = null;
                }

                // If all fonts have been loaded
                if(loadedFonts >= fonts.length) {
                    if(interval) {
                        clearInterval(interval);
                    }
                    if(loadedFonts == fonts.length) {
                        callback();
                        return true;
                    }
                }
            };

            if(!checkFont()) {
                interval = setInterval(checkFont, 50);
            }
        })(fonts[i]);
    }
  };

  if ($menu.length !== 0) {
    waitForWebfonts(['Museo500'], function() {
      var setMenuDimensions = function() {
        $menu.attr('style', '');

        menuWidth = $menu.outerWidth();
        menuHeight = $menu.height();

        $menu.css({
          // Can't use menuWidth here as negative horizontal margins are set.
          'width': $menu.width(),
          'height': menuHeight
        });
      }

      var getElementsWidth = function($elements) {
        var width = 0;
        $elements.each(function() {
          width += $(this).outerWidth();
        });
        return width;
      }

      var setMenuItemsParentDimensions = function() {
        $menuItemsParent = $menu.find('.menu').attr('style', '');
        $menuItems = $menuItemsParent.find('> li');
        menuItemsParentWidthInitial = $menuItemsParent.width();
        menuItemsParentWidth = getElementsWidth($menuItems);
        $menuItemsParent.css({
          'width': menuItemsParentWidth
        });
      }

      // Calculate left value of element by summing up the widths of elements to the left.
      var integerLeftForItem = function($element) {
        var $prevElement = $element;
        var left = 0;
        var doAnotherCycle;
        do {
          $prevElement = $prevElement.prev();
          doAnotherCycle = $prevElement.length !== 0 ? true : false;
          if (doAnotherCycle) {
            left += $prevElement.outerWidth();
          }

        } while (doAnotherCycle)
        return left;
      }

      var toggleArrowButtons = function() {
        $prev = $('#menu-level-3-prev');
        if ($prev.length === 0) {
          $prev = $('<div class="prev" id="menu-level-3-prev"></div>').appendTo($menu);
          $next = $('<div class="next" id="menu-level-3-next"></div>').appendTo($menu);
        }

        if (typeof steps[stepIndex-1] === 'undefined') {
          $prev.hide();
        }
        else {
          $prev.show();
        }

        if (typeof steps[stepIndex+1] === 'undefined') {
          $next.hide();
        }
        else {
          $next.show();
        }
      }

      var calculateSteps = function() {
        var currentStepWidth = 0;
        if (steps.length > 0) {
          steps = new Array();
        }
        steps.push(0);
        $menuItems.each(function(i) {
          $this = $(this);
          if (integerLeftForItem($this) + $this.outerWidth() - currentStepWidth > menuItemsParentWidthInitial) {
            currentStepWidth = integerLeftForItem($this);
            steps.push(currentStepWidth * (-1));
          }
        });
      }

      var prevStepIndex = function() {
        if (typeof steps[stepIndex-1] !== 'undefined') {
          return --stepIndex;
        }
        else {
          return false;
        }
      }

      var nextStepIndex = function() {
        if (typeof steps[stepIndex+1] !== 'undefined') {
          return ++stepIndex;
        }
        else {
          return false;
        }
      }

      var showPrev = function() {
        if (prevStepIndex() !== false) {
          $menuItemsParent.animate({
            left: steps[stepIndex]
          }, animateSpeed);
          toggleArrowButtons();
        }
      }

      var showNext = function() {
        if (nextStepIndex() !== false) {
          $menuItemsParent.animate({
            left: steps[stepIndex]
          }, animateSpeed);
          toggleArrowButtons();
        }
      }

      var showFirst = function() {
        stepIndex = 0;
        $menuItemsParent.animate({
          left: steps[stepIndex]
        }, animateSpeed);
        toggleArrowButtons();
      }

      setMenuDimensions();
      setMenuItemsParentDimensions();
      calculateSteps();
      toggleArrowButtons();

      $menuItems = $menu.find('.menu > li');

      $prev.click(function() {
        showPrev();
      });

      $next.click(function() {
        showNext();
      });

      $(window).resize(function() {
        setMenuDimensions();
        setMenuItemsParentDimensions();
        calculateSteps();
        showFirst();
      });
    });
  }
})(jQuery);
