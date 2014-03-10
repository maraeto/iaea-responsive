(function($) {

  $(document).ready(function() {
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


    /* Manipulate DOM, take the .hero-banner out of the .container and place it in front of it */
    $( ".hero" ).insertBefore( $( ".main-content" ) );

    // add classes to the front page resources lists
    // assign class .navigation-sidebar-frontpage-wrapper to the parent container in panels using semantic panels
    $('.navigation-sidebar-frontpage-wrapper ul').addClass("nav nav-stacked nav-stacked navigation-sidebar-frontpage");


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
  /* make the image caption is the same size as parent image */
      $('.basicpage-image').each(function() {
        $(this).parent().width( $(this).width() );
      });

// FOCUS page
      (function(){
        var selection = $('.focus-page-related-news');
        selection.each(function(){
          $('li', selection).slice(5).toggleClass('hide');
          var buttonHTML = '<button type="button" class="btn btn-default pull-right"><span class="glyphicon glyphicon-chevron-down" style="font-size:10px"></span> Display more</span>';
        });



        $(buttonHTML).appendTo(selection).click(function(){
          $('li', selection).slice(5).toggleClass('hide');
        });

      })();
// end FOCUS

  });

})(jQuery);