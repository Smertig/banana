.. _banana-api-tg-types-keyboard_button_poll_type:

keyboard_button_poll_type_t
===========================

.. cpp:struct:: banana::api::keyboard_button_poll_type_t

   This object represents type of a poll, which is allowed to be created and sent when the corresponding button is pressed.

   .. cpp:member:: optional_t<string_t> type

   If quiz is passed, the user will be allowed to create only polls in the quiz mode. If regular is passed, only regular polls will be allowed. Otherwise, the user will be allowed to create a poll of any type.
