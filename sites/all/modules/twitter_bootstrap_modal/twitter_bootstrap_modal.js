/**
* @file
* Javascript support files.
*
*/

jQuery(document).ready(function() {
  // Actions to make link Twitter Bootstrap Modal
  var TBtrigger = Drupal.settings.jquery_ajax_load.TBtrigger;
  var i = 0;
  // Puede ser más de un valor, hay que usar foreach()
  jQuery(TBtrigger).each(function() {
    var html_string = jQuery(this).attr( 'href' );
    // Hay que validar si la ruta trae la URL del sitio
    jQuery(this).attr( 'href' , '/jquery_ajax_load/get' + html_string );
    jQuery(this).attr( 'data-target' , '#jquery_ajax_load' + i );
    jQuery(this).attr( 'data-toggle' , 'modal' );
    twitter_bootstrap_modal_create_modal(i++);
  });
  jQuery('.bs_modal').each(function() {
    var html_string = jQuery(this).attr( 'href' );
    // Hay que validar si la ruta trae la URL del sitio
    jQuery(this).attr( 'href' , '/bs_modal' + html_string );
  });
});

function twitter_bootstrap_modal_create_modal(i) {
  var modal_name = Drupal.settings.jquery_ajax_load.TBname;
  var modal_module = Drupal.settings.jquery_ajax_load.TBmodule;
  jQuery('body').append('<div id="jquery_ajax_load' + i + '" class="modal fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">');
  jQuery('#jquery_ajax_load' + i).append('<div class="modal-dialog" />');
  jQuery('#jquery_ajax_load' + i + ' .modal-dialog').append('<div class="modal-content" />');
  jQuery('#jquery_ajax_load' + i + ' .modal-content').append('<div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button><h3 class="modal_title">' + modal_name + '</h3></div>');
  jQuery('#jquery_ajax_load' + i + ' .modal-content').append('<div class="modal-body"><span class="text-warning">' + Drupal.t('Loading') + '... </span><img src="' + modal_module + '/twitter_bootstrap_modal_loading.gif"></div>');
  jQuery('#jquery_ajax_load' + i + ' .modal-content').append('<div class="modal-footer"><button class="btn" data-dismiss="modal" aria-hidden="true">' + Drupal.t('Close') + '</button></div>');
}
