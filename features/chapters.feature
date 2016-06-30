Feature: Manage content using chapters
  In order to be able to create and manage content
  As a site editor
  I need to be able to create 'chapter' content

  @api
  Scenario: Add a chapter
  # TODO: change this to the proper role
    Given I am logged in as a user with the "administrator" role
      And I visit "/node/add/chapter"
      And for "Title" I enter "Example Chapter"
      And I check the box "Provide a menu link"
      And for "Menu link title" I enter "Example Chapter"
      And I press the "Save" button
     Then I should see the link "Example Chapter" in the "Sidebar first" region
