<?php
/**
 * @file
 * gsb_feature_case_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_case_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_case';
  $strongarm->value = '';
  $export['auto_entitylabel_node_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_case';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_case';
  $strongarm->value = '';
  $export['auto_entitylabel_php_node_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__case';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => TRUE,
      ),
      'views_content_pane' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_related' => array(
        'custom_settings' => TRUE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => TRUE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => TRUE,
      ),
      'expanded' => array(
        'custom_settings' => TRUE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '31',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '29',
        ),
        'workbench_access' => array(
          'weight' => '17',
        ),
      ),
      'display' => array(
        'gsb_feature_base_fields_faculty_authors' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'views_content_pane' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser_listing' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'insight_featured_card' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'gsb_cmis_download_button' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'teaser_listing' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'insight_featured_card' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'views_content_pane' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'gsb_feature_case_ct_pdf_statement' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser_listing' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'insight_featured_card' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'views_content_pane' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_case';
  $strongarm->value = array();
  $export['menu_options_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_case';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_case';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_case';
  $strongarm->value = '0';
  $export['node_preview_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_case';
  $strongarm->value = 0;
  $export['node_submitted_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_case_pattern';
  $strongarm->value = 'faculty-research/case-studies/[node:title]';
  $export['pathauto_node_case_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_case';
  $strongarm->value = 0;
  $export['workbench_access_node_type_case'] = $strongarm;

  return $export;
}
