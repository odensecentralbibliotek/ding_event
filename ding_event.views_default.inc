<?php
/**
 * @file
 * ding_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_event';
  $view->description = '';
  $view->tag = 'ding_event';
  $view->base_table = 'node';
  $view->human_name = 'Ding event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more..';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Event category (excluded) */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['ui_name'] = 'Event category (excluded)';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_category']['element_label_colon'] = FALSE;
  /* Field: Date (excluded) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date (excluded)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'long_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Library (excluded) */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library (excluded)';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Location (excluded) */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location (excluded)';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Price (excluded) */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price (excluded)';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Category, date, location and price */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Category, date, location and price';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="label label-info">[field_ding_event_category]</span> <span class="date">[field_ding_event_date]</span> <span class="location">[field_ding_event_library]</span><span class="location">[field_ding_event_location]</span><span class="price">[field_ding_event_price]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'subheading';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Title image */
  $handler->display->display_options['fields']['field_ding_event_title_image']['id'] = 'field_ding_event_title_image';
  $handler->display->display_options['fields']['field_ding_event_title_image']['table'] = 'field_data_field_ding_event_title_image';
  $handler->display->display_options['fields']['field_ding_event_title_image']['field'] = 'field_ding_event_title_image';
  $handler->display->display_options['fields']['field_ding_event_title_image']['ui_name'] = 'Title image';
  $handler->display->display_options['fields']['field_ding_event_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_title_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_title_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_title_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_event_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_title_image']['settings'] = array(
    'image_style' => 'ding_content_main_image',
    'image_link' => 'content',
  );
  /* Field: Lead (content) */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['ui_name'] = 'Lead (content)';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  /* Field: Link (read more) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (read more)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Content: Date -  start date (field_ding_event_date) */
  $handler->display->display_options['sorts']['field_ding_event_date_value']['id'] = 'field_ding_event_date_value';
  $handler->display->display_options['sorts']['field_ding_event_date_value']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['sorts']['field_ding_event_date_value']['field'] = 'field_ding_event_date_value';
  /* Contextual filter: Content: Library (field_ding_event_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid_1']['id'] = 'ding_library_nid_1';
  $handler->display->display_options['arguments']['ding_library_nid_1']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['arguments']['ding_library_nid_1']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'hour';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Default event list */
  $handler = $view->new_display('panel_pane', 'Default event list', 'ding_event_default_list');

  /* Display: Floated event list */
  $handler = $view->new_display('panel_pane', 'Floated event list', 'ding_event_floated_list');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more..';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list floated';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Event category */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['ui_name'] = 'Event category';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_category']['element_class'] = 'label label-info';
  $handler->display->display_options['fields']['field_ding_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_category']['element_default_classes'] = FALSE;
  /* Field: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_location']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_library']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_price']['element_class'] = 'price';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: List image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['ui_name'] = 'List image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_style' => 'ding_vert_small',
    'image_link' => '',
  );
  /* Field: Lead (content) */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['ui_name'] = 'Lead (content)';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  /* Field: Link (read more) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (read more)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Lead, link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Lead, link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p>[field_ding_event_lead]</p>
[view_node]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'content';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'hour';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'terms.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '%tid',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Floated event list (library) */
  $handler = $view->new_display('panel_pane', 'Floated event list (library)', 'ding_event_floated_list_library');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list floated';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Event category */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['ui_name'] = 'Event category';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_category']['element_class'] = 'label label-info';
  $handler->display->display_options['fields']['field_ding_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_category']['element_default_classes'] = FALSE;
  /* Field: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'long_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_location']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_library']['element_class'] = 'location';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_price']['element_class'] = 'price';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: List image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['ui_name'] = 'List image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_style' => 'ding_vert_small',
    'image_link' => '',
  );
  /* Field: Lead (content) */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['ui_name'] = 'Lead (content)';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_lead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  /* Field: Link (read more) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (read more)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Lead, link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Lead, link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p>[field_ding_event_lead]</p>
[view_node]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'content';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Library (field_ding_event_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid_1']['id'] = 'ding_library_nid_1';
  $handler->display->display_options['arguments']['ding_library_nid_1']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['arguments']['ding_library_nid_1']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'ding_library_nid_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Library (field_ding_event_library:nid)',
    ),
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Event date-list */
  $handler = $view->new_display('panel_pane', 'Event date-list', 'ding_event_date_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list date-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Date (calendar leaf) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date (calendar leaf)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['type'] = 'calendar_page';
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_short_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = 'Place';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = 'Place';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (from - to) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Time (from - to)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['text'] = '[field_ding_event_date_1-value] - [field_ding_event_date_1-value2]';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Event date-list (library) */
  $handler = $view->new_display('panel_pane', 'Event date-list (library)', 'ding_event_date_list_library');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'node/%1/event-category';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list date-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Date (calendar leaf) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date (calendar leaf)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['type'] = 'calendar_page';
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_short_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (from - to) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Time (from - to)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['text'] = '[field_ding_event_date_1-value] - [field_ding_event_date_1-value2]';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Library (field_ding_event_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid_1']['id'] = 'ding_library_nid_1';
  $handler->display->display_options['arguments']['ding_library_nid_1']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['arguments']['ding_library_nid_1']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'ding_library_nid_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Library (field_ding_event_library:nid)',
    ),
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Event date-list icons */
  $handler = $view->new_display('panel_pane', 'Event date-list icons', 'ding_event_date_list_icons');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['link_url'] = 'page/arrangementer-kurser';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list date-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Date (calendar leaf) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date (calendar leaf)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['type'] = 'calendar_page';
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_short_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (from - to) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Time (from - to)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['text'] = '[field_ding_event_date_1-value] - [field_ding_event_date_1-value2]';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'hour';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Event date-list icons (library) */
  $handler = $view->new_display('panel_pane', 'Event date-list icons (library)', 'ding_event_date_list_icons_library');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list date-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Date (calendar leaf) */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date (calendar leaf)';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['type'] = 'calendar_page';
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_short_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['ui_name'] = 'Library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'name_line';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Time (from - to) */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['ui_name'] = 'Time (from - to)';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['text'] = '[field_ding_event_date_1-value] - [field_ding_event_date_1-value2]';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['ui_name'] = 'Price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_event_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Library (field_ding_event_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid_1']['id'] = 'ding_library_nid_1';
  $handler->display->display_options['arguments']['ding_library_nid_1']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['arguments']['ding_library_nid_1']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'ding_library_nid_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Library (field_ding_event_library:nid)',
    ),
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Simple event list */
  $handler = $view->new_display('panel_pane', 'Simple event list', 'ding_event_simple_list');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more..';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list simple';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['ui_name'] = 'Date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ding_event_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'date_slahes_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'event_category' => 'event_category',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'terms.tids',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: RSS event list */
  $handler = $view->new_display('feed', 'RSS event list', 'ding_event_rss_event_list');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'event/feed';
  $handler->display->display_options['displays'] = array(
    'ctools_context_master' => 'ctools_context_master',
    'ctools_context_teaser_list' => 'ctools_context_teaser_list',
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'ctools_context_library_teaser' => 0,
    'ctools_context_library_master' => 0,
  );
  $handler->display->display_options['sitename_title'] = 1;

  /* Display: RSS library event list */
  $handler = $view->new_display('feed', 'RSS library event list', 'ding_event_rss_library_event_list');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Library (field_ding_event_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid_1']['id'] = 'ding_library_nid_1';
  $handler->display->display_options['arguments']['ding_library_nid_1']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['arguments']['ding_library_nid_1']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['ding_library_nid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ding_library_nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/events/feed';
  $handler->display->display_options['displays'] = array(
    'ctools_context_library_teaser' => 'ctools_context_library_teaser',
    'ctools_context_library_master' => 'ctools_context_library_master',
    'default' => 0,
    'ctools_context_master' => 0,
    'ctools_context_teaser_list' => 0,
  );
  $handler->display->display_options['sitename_title'] = 1;
  $translatables['ding_event'] = array(
    t('Master'),
    t('more..'),
    t('Apply'),
    t('Gendan'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span class="label label-info">[field_ding_event_category]</span> <span class="date">[field_ding_event_date]</span> <span class="location">[field_ding_event_library]</span><span class="location">[field_ding_event_location]</span><span class="price">[field_ding_event_price]</span>'),
    t('Read more'),
    t('All'),
    t('Default event list'),
    t('more'),
    t('View panes'),
    t('Floated event list'),
    t('<p>[field_ding_event_lead]</p>
[view_node]'),
    t('Floated event list (library)'),
    t('Event date-list'),
    t('Place'),
    t('Time'),
    t('[field_ding_event_date_1-value] - [field_ding_event_date_1-value2]'),
    t('Price'),
    t('Event date-list (library)'),
    t('Events'),
    t('Event date-list icons'),
    t('Event date-list icons (library)'),
    t('Simple event list'),
    t('RSS event list'),
    t('RSS library event list'),
  );
  $export['ding_event'] = $view;

  return $export;
}
