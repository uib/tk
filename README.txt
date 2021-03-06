Tjenestekatalogen
=================

This repository contains the code needed to run the Service Catalog application
implemented in Drupal.

We use git submodules here, so after the initial clone you need to run:

    git submodule update --init

to grab the rest of the code (Drupal and the modules we use).

To set up a test site, configure Apache to serve the 'drupal' directory at the
root of some virtual host.

Make sure you have drush installed before you proceed to set up the database
and initialize the application by invoking:

    (cd scripts && ./install-sqlite.sh)

Alternatively manually configure postgres access and restore from the latest
production dump by running:

    $ ssh real6
    $ cd /var/www/app/tk
    $ egrep ^\ +\'password site/settings.php
    $ bin/site-drush cc all; bin/site-drush sql-dump >~/tk.sql
    Password:
    ^D
    $ scp real6:tk.sql .

    $ ./scripts/pg-restore.sh
    $ bin/site-drush en --yes uib_devel

This is a way to install drush if you have composer:

    $ composer global require drush/drush:^6
    $ PATH=$(composer config --global home)/vendor/bin:$PATH
