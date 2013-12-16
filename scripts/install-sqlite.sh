#!/bin/bash

set -x

cd ../drupal || exit 1

SITE=sites/default
SETTINGS=$SITE/settings.php
FILES=$SITE/files
DB=$FILES/.ht.sqlite

chmod u+w $SETTINGS
cp $SITE/default.settings.php $SETTINGS
chmod u+w $SETTINGS

mkdir $FILES
chmod 777 $FILES

mv -f $DB $DB.old
drush site-install minimal --account-pass=admin --site-name='Tjenestekatalogen' --db-url=sqlite:sites/default/files/.ht.sqlite -y
chmod 444 $SETTINGS
chmod 777 $DB

drush en tk diff -y
