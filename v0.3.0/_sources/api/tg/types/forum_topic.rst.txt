.. _banana-api-tg-types-forum_topic:

forum_topic_t
=============

.. cpp:struct:: banana::api::forum_topic_t

   This object represents a forum topic.

   .. cpp:member:: integer_t message_thread_id

   Unique identifier of the forum topic

   .. cpp:member:: string_t name

   Name of the topic

   .. cpp:member:: integer_t icon_color

   Color of the topic icon in RGB format

   .. cpp:member:: optional_t<string_t> icon_custom_emoji_id

   Optional. Unique identifier of the custom emoji shown as the topic icon
