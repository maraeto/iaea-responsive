<?php
/**
 * @file
 * iaea_configuration_workbench.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function iaea_configuration_workbench_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_qa' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_qa',
    ),
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
    ),
    'needs_qa:draft' => array(
      'from_name' => 'needs_qa',
      'to_name' => 'draft',
    ),
    'needs_qa:published' => array(
      'from_name' => 'needs_qa',
      'to_name' => 'published',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
    ),
    'needs_review:needs_qa' => array(
      'from_name' => 'needs_review',
      'to_name' => 'needs_qa',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
    ),
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
    ),
  );
  return $items;
}
