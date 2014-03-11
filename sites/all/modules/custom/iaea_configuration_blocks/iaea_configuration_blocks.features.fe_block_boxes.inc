<?php
/**
 * @file
 * iaea_configuration_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function iaea_configuration_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Add This sharing options';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'add_this_sharing_buttons';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN --><div class="addthis_toolbox addthis_default_style "><a class="addthis_button_facebook_like" fb:like:layout="button_count"></a><a class="addthis_button_tweet"></a><a class="addthis_counter addthis_pill_style"></a></div><script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script><script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=iaeaorg"></script><!-- AddThis Button END -->';

  $export['add_this_sharing_buttons'] = $fe_block_boxes;

  return $export;
}
