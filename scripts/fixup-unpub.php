<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'service')
  ->propertyCondition('status', 0)
  ->execute();

if (isset($result['node'])) {
  $nids = array_keys($result['node']);
  $nodes = node_load_multiple($nids);

  foreach ($nodes as $node) {
      print "/node/$node->nid $node->title\n";
      $node->status = 1;
      node_save($node);
  }
}
