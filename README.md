NDI Handbook [![Build status](https://travis-ci.org/nditech/handbook.svg)](https://travis-ci.org/nditech/handbook)
============

The NDI Handbook is a framework for building documentation websites.


Developing the Handbook
-----------------------

The NDI Handbook is built on Drupal 7, and consists mostly of contrib modules and configuration exported using Features. It has a custom theme (forked from Footheme), and a custom install profile (forked from Drupal core's "Standard" profile).


Behaviour-Driven Development
----------------------------

The NDI Handbook is tooled up for [BDD](https://en.wikipedia.org/wiki/Behavior-driven_development), using [Drumkit](http://drumk.it) and [Behat](http://behat.org).

Basically, the workflow for adding a new feature should involve:

1. Create new issue here in the main (distro) project (we can then dispatch it to a separate module, if req'd.)
2. Label it as a "Feature request".
3. Flesh out one or more user stories.
4. (Optional) Depending on scope and such, split out multiple stories into separate issues.
5. (Optional) Fork this repo, if the developer doesn't have commit access.
6. Create one or more new feature branches.
7. Begin writing tests that capture the components and workflows.
8. Run the new tests to ensure they fail.
9. Begin building Features to satisfy the tests.
10. Begin documenting the new feature, within the UI, here in the docs, and perhaps using the Tour module to introduce more complex workflows.
10. Once reasonably complete, with passing tests and good documentation, create a merge request.
11. Once we're satisfied with the state of the implementation and tests, merge the feature branch.
12. Update draft of release notes for next version.


Development Environment
-----------------------

To get started, clone this repo locally, and check out the feature branch you want to work on:

    $ git clone --recursive https://github.com/nditech/handbook.git
    $ cd handbook
    $ git checkout -b nifty-new-feature

Bootstrap Drumkit, and install a local development site:

    $ . d    # Note the *space*, as we're **sourcing** this file, in order to load some environment variable, etc.
    $ make drupal

This should be all that's required to download Drush, build a local Drupal code-base (from our makefiles), install a development site and launch a local web server. It should even open a browser window for you, logged into the new site.


Running Tests
-------------

With a dev site in place, we can install Behat and run test like so:

    $ make behat
    $ make drupal-tests


Developing Features
-------------------

Development should follow the suggested BDD practices descirbed above. This ensures full test coverage and reasonable documentation.

Drumkit provides a number of other commands to simplify the development process. The easiest way to get started is simply to run `make` at the root of the project.


    $ make
    make drupal
      Build a Drupal codebase, install a site and start a web server.
    make drupal-reinstall
      Re-install the current Drupal site.
    make drupal-rebuild
      Destroy the current Drupal site and rebuild it from scratch.
    make drupal-tests
      Run Behat tests against dev Drupal site. (Optional) Specify a test file using the CURRENT_TEST option.
    make drupal-tests-wip
      Run work-in-progress Behat tests against dev Drupal site.
    make clean-drupal
      Delete the Drupal codebase and database, and stop the PHP server.
    make drupal-user-login
      Open a browser and login to the dev site.
    make drush-alias
      Generate a Drush alias for the dev site.
    make help-drupal-all
      Display help for additional Drupal targets.


Drumkit is under heavy develoment, so the list above may be incomplete. In addition, it encourages the addition of project-specific targets to automate other tasks.
