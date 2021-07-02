.. _banana-api-tg-types-keyboard_button:

keyboard_button_t
=================

.. cpp:struct:: banana::api::keyboard_button_t

   This object represents one button of the reply keyboard. For simple text buttons String can be used instead of this object to specify text of the button. Optional fields request_contact, request_location, and request_poll are mutually exclusive.

   .. cpp:member:: string_t text

   Text of the button. If none of the optional fields are used, it will be sent as a message when the button is pressed

   .. cpp:member:: optional_t<boolean_t> request_contact

   Optional. If True, the user's phone number will be sent as a contact when the button is pressed. Available in private chats only

   .. cpp:member:: optional_t<boolean_t> request_location

   Optional. If True, the user's current location will be sent when the button is pressed. Available in private chats only

   .. cpp:member:: optional_t<keyboard_button_poll_type_t> request_poll

   Optional. If specified, the user will be asked to create a poll and send it to the bot when the button is pressed. Available in private chats only
