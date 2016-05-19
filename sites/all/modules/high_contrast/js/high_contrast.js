/**
 * @file
 * High Contrast js file.
 *
 * http://jscompress.com/ was used to create the high_contrast.min.js file.
 */

(function() {
  // Create fast 'hook' into DOM where to attach the css.
  document.write('<script type="text/javascript" id="high-contrast-css-placeholder"></script>');
  var placeholder = document.getElementById('high-contrast-css-placeholder');

  /*!
   * JavaScript Cookie v2.0.4
   * https://github.com/js-cookie/js-cookie
   *
   * Copyright 2006, 2015 Klaus Hartl & Fagner Brack
   * Released under the MIT license
   */
  !function(e){if("function"==typeof define&&define.amd)define(e);else if("object"==typeof exports)module.exports=e();else{var n=window.Cookies,t=window.Cookies=e();t.noConflict=function(){return window.Cookies=n,t}}}(function(){function e(){for(var e=0,n={};e<arguments.length;e++){var t=arguments[e];for(var o in t)n[o]=t[o]}return n}function n(t){function o(n,r,i){var c;if(arguments.length>1){if(i=e({path:"/"},o.defaults,i),"number"==typeof i.expires){var s=new Date;s.setMilliseconds(s.getMilliseconds()+864e5*i.expires),i.expires=s}try{c=JSON.stringify(r),/^[\{\[]/.test(c)&&(r=c)}catch(a){}return r=encodeURIComponent(String(r)),r=r.replace(/%(23|24|26|2B|3A|3C|3E|3D|2F|3F|40|5B|5D|5E|60|7B|7D|7C)/g,decodeURIComponent),n=encodeURIComponent(String(n)),n=n.replace(/%(23|24|26|2B|5E|60|7C)/g,decodeURIComponent),n=n.replace(/[\(\)]/g,escape),document.cookie=[n,"=",r,i.expires&&"; expires="+i.expires.toUTCString(),i.path&&"; path="+i.path,i.domain&&"; domain="+i.domain,i.secure?"; secure":""].join("")}n||(c={});for(var p=document.cookie?document.cookie.split("; "):[],u=/(%[0-9A-Z]{2})+/g,d=0;d<p.length;d++){var f=p[d].split("="),l=f[0].replace(u,decodeURIComponent),m=f.slice(1).join("=");'"'===m.charAt(0)&&(m=m.slice(1,-1));try{if(m=t&&t(m,l)||m.replace(u,decodeURIComponent),this.json)try{m=JSON.parse(m)}catch(a){}if(n===l){c=m;break}n||(c[l]=m)}catch(a){}}return c}return o.get=o.set=o,o.getJSON=function(){return o.apply({json:!0},[].slice.call(arguments))},o.defaults={},o.remove=function(n,t){o(n,"",e(t,{expires:-1}))},o.withConverter=n,o}return n()});

  // HTMl string to DOM.
  // http://krasimirtsonev.com/blog/article/Revealing-the-magic-how-to-properly-convert-HTML-string-to-a-DOM-element
  var str2DOMElement=function(t){var e={option:[1,"<select multiple='multiple'>","</select>"],legend:[1,"<fieldset>","</fieldset>"],area:[1,"<map>","</map>"],param:[1,"<object>","</object>"],thead:[1,"<table>","</table>"],tr:[2,"<table><tbody>","</tbody></table>"],col:[2,"<table><tbody></tbody><colgroup>","</colgroup></table>"],td:[3,"<table><tbody><tr>","</tr></tbody></table>"],_default:[1,"<div>","</div>"]};e.optgroup=e.option,e.tbody=e.tfoot=e.colgroup=e.caption=e.thead,e.th=e.td;var l=document.createElement("div"),a=/<\s*\w.*?>/g.exec(t);if(null!=a){var l,o=a[0].replace(/</g,"").replace(/>/g,""),r=e[o]||e._default;t=r[1]+t+r[2],l.innerHTML=t;for(var d=r[0]+1;d--;)l=l.lastChild}else l.innerHTML=t,l=l.lastChild;return l};

  // DOM ready.
  // http://stackoverflow.com/questions/3430455/document-ready-source
  (function(){var e=function(i,j){},c=window.jQuery,h=window.$,d,g=false,f=[],b;e.fn={ready:function(i){e.bindReady();if(e.isReady){i.call(document,e)}else{if(f){f.push(i)}}return this}};e.isReady=false;e.ready=function(){if(!e.isReady){if(!document.body){return setTimeout(e.ready,13)}e.isReady=true;if(f){var k,j=0;while((k=f[j++])){k.call(document,e)}f=null}if(e.fn.triggerHandler){e(document).triggerHandler("ready")}}};e.bindReady=function(){if(g){return}g=true;if(document.readyState==="complete"){return e.ready()}if(document.addEventListener){document.addEventListener("DOMContentLoaded",b,false);window.addEventListener("load",e.ready,false)}else{if(document.attachEvent){document.attachEvent("onreadystatechange",b);window.attachEvent("onload",e.ready);var i=false;try{i=window.frameElement==null}catch(j){}if(document.documentElement.doScroll&&i){a()}}}};d=e(document);if(document.addEventListener){b=function(){document.removeEventListener("DOMContentLoaded",b,false);e.ready()}}else{if(document.attachEvent){b=function(){if(document.readyState==="complete"){document.detachEvent("onreadystatechange",b);e.ready()}}}}function a(){if(e.isReady){return}try{document.documentElement.doScroll("left")}catch(i){setTimeout(a,1);return}e.ready()}window.jQuery=window.$=e})();

  /**
   * Enable high contrast logo.
   *
   * This is in different function as we need to run it on init and when
   * DOM is ready.
   */
  var enableHighContrastLogo = function() {
    var logoBlock = document.getElementById('block-delta-blocks-logo');
    var logoPath = highContrast.logoPath;
    if (document.querySelectorAll && typeof logoPath !== 'undefined' && logoBlock !== null) {
      var logo = logoBlock.querySelectorAll('img');
      if (typeof logo[0].logoPathOriginal === 'undefined') {
        logo[0].logoPathOriginal = logo[0].src;
      }
      logo[0].src = logoPath;
    }
  };

  /**
   * Disable high contrast logo.
   */
  var disableHighContrastLogo = function() {
    var logoBlock = document.getElementById('block-delta-blocks-logo');
    var logoPath = highContrast.logoPath;
    if (document.querySelectorAll && typeof logoPath !== 'undefined' && logoBlock !== null) {
      var logo = logoBlock.querySelectorAll('img');
      if (typeof logo[0].logoPathOriginal !== 'undefined') {
        logo[0].src = logo[0].logoPathOriginal;
      }
    }
  };

  /**
   * Enable the high contrast styles.
   */
  var enableStyles = function() {
    disableStyles();
    var cssFilePath = highContrast.cssFilePath;
    if (typeof cssFilePath !== 'undefined') {
      var link = str2DOMElement('<link type="text/css" id="high-contrast-css" rel="stylesheet" href="' + cssFilePath + '" media="screen" />');
      // Add link after placeholder.
      // http://stackoverflow.com/questions/7258185/javascript-append-child-after-element
      placeholder.parentNode.insertBefore(link, placeholder.nextSibling);
    }
    enableHighContrastLogo();
  };

  /**
   * Disable the high contrast styles.
   */
  var disableStyles = function() {
    var link = document.getElementById('high-contrast-css');
    if (link !== null) {
      link.parentNode.removeChild(link);
    }
    disableHighContrastLogo();
  };

  /**
   * Check if high contrast is set or not using highContrastActivated cookie.
   *
   * @returns {boolean}
   */
  var isHighContrastEnabled = function() {
    var highContrastEnabled = Cookies.get('highContrastActivated');
    if (typeof highContrastEnabled === 'undefined') {
      return false;
    }
    else if (highContrastEnabled === 'false') {
      return false;
    }
    else {
      return true;
    }
  };

  /**
   * Toggle between high contrast and normal mode.
   */
  var toggleHighContrast = function() {
    if (isHighContrastEnabled()) {
      disableStyles();
      Cookies.set('highContrastActivated', 'false', '/');
    }
    else {
      enableStyles();
      Cookies.set('highContrastActivated', 'true', '/');
    }
  };

  /**
   * Append the high contrast toggle link after skip-link.
   */
  var includeHighContrastLink = function() {
    var highContrastLink = highContrast.link;
    highContrastLink = str2DOMElement(highContrastLink);
    highContrastLink.onclick = function() {
      toggleHighContrast();
      this.blur();
      return false;
    };
    document.getElementById('skip-link').appendChild(highContrastLink);
  };

  // Init on page load.
  if (isHighContrastEnabled()) {
    enableStyles();
  }
  $.fn.ready(function() {
    if (isHighContrastEnabled()) {
      enableHighContrastLogo();
    }

    includeHighContrastLink();
  })
})();
