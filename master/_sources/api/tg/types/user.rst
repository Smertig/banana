.. _banana-api-tg-types-user:

user_t
======

.. cpp:struct:: banana::api::user_t

   This object represents a Telegram user or bot.

   .. cpp:member:: integer_t id

   Unique identifier for this user or bot. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: boolean_t is_bot

   True, if this user is a bot

   .. cpp:member:: string_t first_name

   User's or bot's first name

   .. cpp:member:: optional_t<string_t> last_name

   Optional. User's or bot's last name

   .. cpp:member:: optional_t<string_t> username

   Optional. User's or bot's username

   .. cpp:member:: optional_t<string_t> language_code

   Optional. IETF language tag of the user's language

   .. cpp:member:: optional_t<boolean_t> is_premium

   Optional. True, if this user is a Telegram Premium user

   .. cpp:member:: optional_t<boolean_t> added_to_attachment_menu

   Optional. True, if this user added the bot to the attachment menu

   .. cpp:member:: optional_t<boolean_t> can_join_groups

   Optional. True, if the bot can be invited to groups. Returned only in getMe.

   .. cpp:member:: optional_t<boolean_t> can_read_all_group_messages

   Optional. True, if privacy mode is disabled for the bot. Returned only in getMe.

   .. cpp:member:: optional_t<boolean_t> supports_inline_queries

   Optional. True, if the bot supports inline queries. Returned only in getMe.
