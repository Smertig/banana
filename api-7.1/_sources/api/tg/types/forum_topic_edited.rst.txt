.. _banana-api-tg-types-forum_topic_edited:

forum_topic_edited_t
====================

.. cpp:struct:: banana::api::forum_topic_edited_t

   This object represents a service message about an edited forum topic.

   .. cpp:member:: optional_t<string_t> name

   Optional. New name of the topic, if it was edited

   .. cpp:member:: optional_t<string_t> icon_custom_emoji_id

   Optional. New identifier of the custom emoji shown as the topic icon, if it was edited; an empty string if the icon was removed
