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

    ./scripts/pg-restore.sh

We use the SASS preprocessor to generate the CSS files.  To convert them
install the ruby bundler and run:

    bundle install
    bundle exec compass compile themes/uib_tk
