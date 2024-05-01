.. _banana-api-tg-types-forum_topic_created:

forum_topic_created_t
=====================

.. cpp:struct:: banana::api::forum_topic_created_t

   This object represents a service message about a new forum topic created in the chat.

   .. cpp:member:: string_t name

   Name of the topic

   .. cpp:member:: integer_t icon_color

   Color of the topic icon in RGB format

   .. cpp:member:: optional_t<string_t> icon_custom_emoji_id

   Optional. Unique identifier of the custom emoji shown as the topic icon
