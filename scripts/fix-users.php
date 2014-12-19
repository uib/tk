<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'user')
  ->propertyCondition('status', 1)
  ->execute();
$uids = array_keys($result['user']);
$users = user_load_multiple($uids);

foreach ($users as $user) {
  if (strpos($user->name, " ") === FALSE)
    continue;

  # Try to find the right user
  $alt_user = NULL;
  $q = new EntityFieldQuery();
  $result = $q
    ->entityCondition('entity_type', 'user')
    ->propertyCondition('uid', $user->uid, '!=')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_full_name', 'value', $user->name, '=')
    ->execute();
  if (isset($result['user'])) {
    $alt_users = user_load_multiple(array_keys($result['user']));
    $alt_user = array_pop($alt_users);
  }

  $nids = nodes_related_to($user->uid);
  if (!$nids) {
    print "0 $user->uid $user->name\n";
    block_user($user);
    continue;
  }
  $c = count($nids);
  if ($alt_user) {
    print "! $user->uid $user->name --> $alt_user->uid $alt_user->name ($c)\n";
    $nodes = node_load_multiple($nids);
    foreach ($nodes as $node) {
      print "  $node->nid $node->title\n";
      $edit = array();
      if ($node->uid == $user->uid) {
	$node->uid = $alt_user->uid;
	$edit[] = 'uid';
      }
      if ($node->field_operator) {
	foreach ($node->field_operator['und'] as $idx => $v) {
	  if ($v['target_id'] == $user->uid) {
	    $node->field_operator['und'][$idx]['target_id'] = $alt_user->uid;
	    $edit[] = 'operator';
	  }
	}
      }
      if ($node->field_ower_contact) {
	foreach ($node->field_ower_contact['und'] as $idx => $v) {
	  if ($v['target_id'] == $user->uid) {
	    $node->field_ower_contact['und'][$idx]['target_id'] = $alt_user->uid;
	    $edit[] = 'ower_contact';
	  }
	}
      }
      if ($edit) {
	print "    EDIT: " . implode(' ', $edit) . "\n";
	node_save($node);
      }
    }
  }
  else {
    print "? $user->uid $user->name ($c)\n";
  }
}

function nodes_related_to($uid) {
  $nids = array_merge(
    db_query('select nid, title from {node} where uid = :uid',
      array(
	':uid' => $uid,
    ))->fetchCol(),
    db_query('select entity_id from {field_data_field_operator} where field_operator_target_id = :uid',
      array(
	':uid' => $uid,
    ))->fetchCol(),
    db_query('select entity_id from {field_data_field_ower_contact} where field_ower_contact_target_id = :uid',
      array(
	':uid' => $uid,
    ))->fetchCol()
  );
  return $nids;
}

function block_user($user) {
  user_save($user, array(
    'status' => 0,
  ));
}
