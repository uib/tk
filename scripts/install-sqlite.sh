#!/bin/bash

set -x

cd ../drupal || exit 1

SETTINGS=sites/default/settings.php
chmod u+w $SETTINGS
cp sites/default/default.settings.php $SETTINGS
chmod u+w $SETTINGS

mkdir sites/default/files
chmod 777 sites/default/files

drush site-install standard --account-pass=admin --site-name='Tjenestekatalogen' --db-url=sqlite:sites/default/files/.ht.sqlite -y
chmod 444 $SETTINGS

drush en tk diff -y
