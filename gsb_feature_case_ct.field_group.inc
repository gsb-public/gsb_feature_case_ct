<?php
/**
 * @file
 * gsb_feature_case_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_case_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_paper_copy|node|case|default';
  $field_group->group_name = 'group_wrapper_paper_copy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Available for purchase',
    'weight' => '12',
    'children' => array(
      0 => 'field_link_single',
      1 => 'field_link_center_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Available for purchase',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_paper_copy|node|case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|case|default';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '15',
    'children' => array(
      0 => 'gsb_feature_base_fields_faculty_authors',
      1 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_related|node|case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_taxonomy|node|case|default';
  $field_group->group_name = 'group_wrapper_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '7',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'show_label' => 1,
        'label_element' => 'h3',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_taxonomy|node|case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|case|compact';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_item_id',
      1 => 'case_product_type',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|case|compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|case|default';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'case_product_type',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|case|expanded';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'expanded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_item_id',
      1 => 'case_product_type',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|case|expanded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|case|views_content_pane';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'views_content_pane';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'case_product_type',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|case|views_content_pane'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_topics|node|case|teaser_listing';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topic',
    'weight' => '6',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Topic',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_topics|node|case|teaser_listing'] = $field_group;

  return $export;
}
