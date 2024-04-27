.. _banana-api-tg-types-write_access_allowed:

write_access_allowed_t
======================

.. cpp:struct:: banana::api::write_access_allowed_t

   This object represents a service message about a user allowing a bot to write messages after adding it to the attachment menu, launching a Web App from a link, or accepting an explicit request from a Web App sent by the method requestWriteAccess.

   .. cpp:member:: optional_t<boolean_t> from_request

   Optional. True, if the access was granted after the user accepted an explicit request from a Web App sent by the method requestWriteAccess

   .. cpp:member:: optional_t<string_t> web_app_name

   Optional. Name of the Web App, if the access was granted when the Web App was launched from a link

   .. cpp:member:: optional_t<boolean_t> from_attachment_menu

   Optional. True, if the access was granted when the bot was added to the attachment or side menu
