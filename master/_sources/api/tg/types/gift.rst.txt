.. _banana-api-tg-types-gift:

gift_t
======

.. cpp:struct:: banana::api::gift_t

   This object represents a gift that can be sent by the bot.

   .. cpp:member:: string_t id

   Unique identifier of the gift

   .. cpp:member:: sticker_t sticker

   The sticker that represents the gift

   .. cpp:member:: integer_t star_count

   The number of Telegram Stars that must be paid to send the sticker

   .. cpp:member:: optional_t<integer_t> upgrade_star_count

   Optional. The number of Telegram Stars that must be paid to upgrade the gift to a unique one

   .. cpp:member:: optional_t<integer_t> total_count

   Optional. The total number of the gifts of this type that can be sent; for limited gifts only

   .. cpp:member:: optional_t<integer_t> remaining_count

   Optional. The number of remaining gifts of this type that can be sent; for limited gifts only
