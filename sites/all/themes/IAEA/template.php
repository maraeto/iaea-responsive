<?php

/**
 * @file template.php
 */

/** 
* Remove "Welcome to ... "  from the front page. This message is rendered when no content is available,
* e.g. when content is rendered via Context or Views module
*/
function IAEA_preprocess_page(&$variables) {
	if (drupal_is_front_page()) { $variables['title']=""; }
}
