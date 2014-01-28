(function($){

/* drop down menu on hover */
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
	});

})(jQuery);