(function($){

  $(document).ready(function(){
    $('ul.nav li.dropdown, ul.nav li.dropdown-submenu').hover(function() {
      $(this).find('.dropdown-menu').stop(true, true).delay(200).fadeIn(200);
    }, function() {
      $(this).find('.dropdown-menu').stop(true, true).delay(200).fadeOut(200);
    });
    /* follow the link on */
    $('ul.nav li.dropdown, ul.nav li.dropdown-submenu').click( function(e) {
      e.stopPropagation();
    });

    $('.bootstrap-tabs a').click(function (e) {
        e.preventDefault();
        $(this).tab('show');
    });

    $('.bootstrap-tabs a:first').tab('show');
    // trigger tooltip
    $('.social').tooltip();



  /* Go To Top */
      $(window).scroll(function() {
          if ($(this).scrollTop() > 200 ) {
              $('.go-top').fadeIn(500);
          } else {
              $('.go-top').fadeOut(200);
          }
      });
  // Animate the scroll to top
      $('.go-top').click(function(event) {
          event.preventDefault();
          $('html, body').animate({scrollTop: 0}, 500);
      });
  /* Go To Top end */
  });

})(jQuery);