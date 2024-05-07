.. _banana-api-tg-types-keyboard_button_request_chat:

keyboard_button_request_chat_t
==============================

.. cpp:struct:: banana::api::keyboard_button_request_chat_t

   This object defines the criteria used to request a suitable chat. Information about the selected chat will be shared with the bot when the corresponding button is pressed. The bot will be granted requested rights in the chat if appropriate. More about requesting chats ».

   .. cpp:member:: integer_t request_id

   Signed 32-bit identifier of the request, which will be received back in the ChatShared object. Must be unique within the message

   .. cpp:member:: boolean_t chat_is_channel

   Pass True to request a channel chat, pass False to request a group or a supergroup chat.

   .. cpp:member:: optional_t<boolean_t> chat_is_forum

   Optional. Pass True to request a forum supergroup, pass False to request a non-forum chat. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> chat_has_username

   Optional. Pass True to request a supergroup or a channel with a username, pass False to request a chat without a username. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> chat_is_created

   Optional. Pass True to request a chat owned by the user. Otherwise, no additional restrictions are applied.

   .. cpp:member:: optional_t<chat_administrator_rights_t> user_administrator_rights

   Optional. A JSON-serialized object listing the required administrator rights of the user in the chat. The rights must be a superset of bot_administrator_rights. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<chat_administrator_rights_t> bot_administrator_rights

   Optional. A JSON-serialized object listing the required administrator rights of the bot in the chat. The rights must be a subset of user_administrator_rights. If not specified, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> bot_is_member

   Optional. Pass True to request a chat with the bot as a member. Otherwise, no additional restrictions are applied.

   .. cpp:member:: optional_t<boolean_t> request_title

   Optional. Pass True to request the chat's title

   .. cpp:member:: optional_t<boolean_t> request_username

   Optional. Pass True to request the chat's username

   .. cpp:member:: optional_t<boolean_t> request_photo

   Optional. Pass True to request the chat's photo
