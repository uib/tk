<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'service')
  ->execute();
$nids = array_keys($result['node']);
$nodes = node_load_multiple($nids);

foreach ($nodes as $node) {
    $node->status = 1;
    node_save($node);
}
