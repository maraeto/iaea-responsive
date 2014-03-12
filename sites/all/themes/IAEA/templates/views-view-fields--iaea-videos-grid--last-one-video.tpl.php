<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

/**
 * @TODO
 * check why the paragraph font in this template renders differently (font style is heavier)
 * than in static templates e.g. here
 * /sites/all/themes/IAEA/static-html/template-newscenter.html
 *
 */
$img_url = file_create_url($row->field_field_iaeavideo_poster[0]['raw']['uri']);
?>
<div class="container">
	<div class="row clearfix">
		<div class="media col-md-4">
			<a href="<?php print url('node/'.$row->nid); ?>"><img src="<?php print $img_url; ?>" alt="<?php print $fields['title']->content; ?>" class="img-responsive" width="360" /></a>
		</div>
		<div class="media-body col-md-8">
			<h1 class="media-heading"><?php print $fields['title']->content; ?></h1>
			<span><?php print $fields['field_iaeavideo_date']->content; ?></span><?php print $fields['field_iaeavideo_body']->content; ?>
	    <?php print $fields['view_node']->content; ?>
		</div>
	</div>
</div>