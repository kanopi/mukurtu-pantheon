<?php

/**
 * @file
 * ma_culturalprotocol.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_culturalprotocol_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ma_culturalprotocol_node_info() {
  $items = array(
    'cultural_protocol_group' => array(
      'name' => t('Cultural Protocol'),
      'base' => 'node_content',
      'description' => t('Cultural Protocols can be assigned to groups and to individual items. Using these protocols allows you to determine how content can be made available to members of the group. Examples of protocols are: "Gender: Male", or "Age: Elder". Read more about this on our <a href:="https://mukurtu.zendesk.com/entries/22105572-Adding-Cultural-Protocols";>wiki</a>.'),
      'has_title' => '1',
      'title_label' => t('Cultural Protocol Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
