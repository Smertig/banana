.. _banana-api-tg-types-user:

user_t
======

.. cpp:struct:: banana::api::user_t

   This object represents a Telegram user or bot.

   .. cpp:member:: integer_t id

   Unique identifier for this user or bot

   .. cpp:member:: boolean_t is_bot

   True, if this user is a bot

   .. cpp:member:: string_t first_name

   User's or bot's first name

   .. cpp:member:: optional_t<string_t> last_name

   User's or bot's last name

   .. cpp:member:: optional_t<string_t> username

   User's or bot's username

   .. cpp:member:: optional_t<string_t> language_code

   IETF language tag of the user's language

   .. cpp:member:: optional_t<boolean_t> can_join_groups

   True, if the bot can be invited to groups. Returned only in getMe.

   .. cpp:member:: optional_t<boolean_t> can_read_all_group_messages

   True, if privacy mode is disabled for the bot. Returned only in getMe.

   .. cpp:member:: optional_t<boolean_t> supports_inline_queries

   True, if the bot supports inline queries. Returned only in getMe.
