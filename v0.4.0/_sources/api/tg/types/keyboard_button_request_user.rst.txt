.. _banana-api-tg-types-keyboard_button_request_user:

keyboard_button_request_user_t
==============================

.. cpp:struct:: banana::api::keyboard_button_request_user_t

   This object defines the criteria used to request a suitable user. The identifier of the selected user will be shared with the bot when the corresponding button is pressed. More about requesting users »

   .. cpp:member:: integer_t request_id

   Signed 32-bit identifier of the request, which will be received back in the UserShared object. Must be unique within the message

   .. cpp:member:: optional_t<boolean_t> user_is_bot

   Optional. Pass True to request a bot, pass False to request a regular user. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> user_is_premium

   Optional. Pass True to request a premium user, pass False to request a non-premium user. If not specified, no additional restrictions are applied.
