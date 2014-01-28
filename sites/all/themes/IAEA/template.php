<?php

/**
 * @file template.php
 */

/**
* Remove "Welcome to ... "  from the front page. This message is rendered when no content is available,
* e.g. when content is rendered via Context or Views module
*/
function IAEA_preprocess_page(&$variables) {
	if (drupal_is_front_page()) {
		$variables['title']="";
	}
  drupal_add_js(path_to_theme() . '/js/page-global.js', array( 'scope' => 'footer'));
}

/**
 * Add img-responsive class to images based on image style_name
 */
/* function IAEA_preprocess_image(&$variables) {
  if(isset($variables['style_name'])) {
    switch($variables['style_name']) {
      case 'banner_6_units_3_2_555px':
      case 'front_page_banner_12_units_1140x345':
        $variables['attributes']['class'][] = "img-responsive";
    }
  }
} */

/* applies "img-responsive" class to ever image */
function IAEA_preprocess_image(&$variables) {
  $variables['attributes']['class'][] = "img-responsive";
}

/* Add label class to tags based on field name */
function IAEA_preprocess_field(&$variables) {
    switch ($variables['element']['#field_name']) {
      case 'field_mediaadvisory_tags':
      case 'field_dgstatement_tags':
      case 'field_newsstory_tags':
      case 'field_pressrelease_tags':
        foreach ($variables['items'] as $key => $item) {
          $variables['items'][$key]['#prefix'] = '<span class="label label-default">';
          $variables['items'][$key]['#suffix'] = '</span>';
        }
        break;
      case 'field_basicpage_section':
        $variables['classes_array'][] = 'clearfix';
        break;
      }
}

/**
 * Overrides theme_menu_tree(). Classes nav-pills & nav-stacked added for styling of active list item
 */
function IAEA_menu_tree(&$variables) {
  return '<ul class="menu nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}


/* Adding option to include divider in menu (bootstrap) <li class="divider"></li>  */
function IAEA_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    else {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';

      // Check if this element is nested within another.
      if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 1)) {
        // Generate as dropdown submenu.
        $element['#attributes']['class'][] = 'dropdown-submenu';
      }
      else {
        // Generate as standard dropdown.
        $element['#attributes']['class'][] = 'dropdown';
        $element['#localized_options']['html'] = TRUE;
        $element['#title'] .= ' <span class="caret"></span>';
      }

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }

  if (strpos($element['#href'], '#divider')) {
    $return = '<li class="divider"></li>';
  }
  else if (strpos($element['#href'], '#dropdown-header')) {
    $return = '<li class="dropdown-header">' . $element['#localized_options']['attributes']['title'] . '</li>';
  }
  else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    $return = '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  }

  return $return;
}