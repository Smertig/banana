.. _banana-api-tg-types-keyboard_button_request_users:

keyboard_button_request_users_t
===============================

.. cpp:struct:: banana::api::keyboard_button_request_users_t

   This object defines the criteria used to request suitable users. Information about the selected users will be shared with the bot when the corresponding button is pressed. More about requesting users »

   .. cpp:member:: integer_t request_id

   Signed 32-bit identifier of the request that will be received back in the UsersShared object. Must be unique within the message

   .. cpp:member:: optional_t<boolean_t> user_is_bot

   Optional. Pass True to request bots, pass False to request regular users. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> user_is_premium

   Optional. Pass True to request premium users, pass False to request non-premium users. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<integer_t> max_quantity

   Optional. The maximum number of users to be selected; 1-10. Defaults to 1.

   .. cpp:member:: optional_t<boolean_t> request_name

   Optional. Pass True to request the users' first and last names

   .. cpp:member:: optional_t<boolean_t> request_username

   Optional. Pass True to request the users' usernames

   .. cpp:member:: optional_t<boolean_t> request_photo

   Optional. Pass True to request the users' photos
