.. _banana-api-tg-types-chat_boost_source_gift_code:

chat_boost_source_gift_code_t
=============================

.. cpp:struct:: banana::api::chat_boost_source_gift_code_t

   The boost was obtained by the creation of Telegram Premium gift codes to boost a chat. Each such code boosts the chat 4 times for the duration of the corresponding Telegram Premium subscription.

   .. cpp:member:: string_t source

   Source of the boost, always “gift_code”

   .. cpp:member:: user_t user

   User for which the gift code was created
