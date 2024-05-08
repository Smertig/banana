.. _banana-api-tg-types-game:

game_t
======

.. cpp:struct:: banana::api::game_t

   This object represents a game. Use BotFather to create and edit games, their short names will act as unique identifiers.

   .. cpp:member:: string_t title

   Title of the game

   .. cpp:member:: string_t description

   Description of the game

   .. cpp:member:: array_t<photo_size_t> photo

   Photo that will be displayed in the game message in chats.

   .. cpp:member:: optional_t<string_t> text

   Optional. Brief description of the game or high scores included in the game message. Can be automatically edited to include current high scores for the game when the bot calls setGameScore, or manually edited using editMessageText. 0-4096 characters.

   .. cpp:member:: optional_t<array_t<message_entity_t>> text_entities

   Optional. Special entities that appear in text, such as usernames, URLs, bot commands, etc.

   .. cpp:member:: optional_t<animation_t> animation

   Optional. Animation that will be displayed in the game message in chats. Upload via BotFather
