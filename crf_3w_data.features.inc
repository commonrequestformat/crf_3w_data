<?php
/**
 * @file
 * crf_3w_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_3w_data_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_3w_data_node_info() {
  $items = array(
    '3w_data' => array(
      'name' => t('3W Data'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
