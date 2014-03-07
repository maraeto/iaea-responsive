<?php
/**
 * @file
 * iaea_configuration_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function iaea_configuration_workbench_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'needs_qa' => array(
      'name' => 'needs_qa',
      'label' => 'Needs QA',
      'description' => 'The content needs tech QA review.',
      'weight' => -8,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Ready for moderation',
      'weight' => -9,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => -7,
    ),
  );
  return $items;
}
