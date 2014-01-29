(function($){
	$(document).ready(function () {
		$('.bootstrap-tabs a').click(function (e) {
      e.preventDefault();
      $(this).tab('show');
    });
    $('.bootstrap-tabs a:first').tab('show');
  });
})(jQuery);