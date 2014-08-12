#!/bin/bash

su -c "createdb --encoding=UTF8  tk" postgres
cp ../site/default.settings.php ..site/settings.php
mkdir ../site/files
chown apache.apache ../site/files

echo "
\$databases['default']['default'] = array(
  'driver' => 'pgsql',
  'database' => 'tk',
  'username' => 'postgres',
  'password' => 'vagrant4life',
  'host' => 'localhost',
  'prefix' => '',
);

" >> ../site/settings.php
