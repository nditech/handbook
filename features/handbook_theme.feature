Feature: Use our custom theme by default
  In order to experience the intended look and feel of the site
  As a site user
  I need to see the "Handbook" theme

  Scenario: Check the default theme with Drush
    Given I run drush "vget theme_default --exact --format=string"
     Then drush output should contain "handbook"
