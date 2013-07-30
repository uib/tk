#!/bin/bash

cd ../drupal
drush site-install standard --account-pass=admin --site-name='Tjenestekatalogen' --db-url=sqlite:sites/default/files/.ht.sqlite -y
drush en tk diff -y
