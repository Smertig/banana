.. _banana-api-tg-types-inline_query_result_game:

inline_query_result_game_t
==========================

.. cpp:struct:: banana::api::inline_query_result_game_t

   Represents a Game.

   .. cpp:member:: string_t type

   Type of the result, must be game

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t game_short_name

   Short name of the game

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message
