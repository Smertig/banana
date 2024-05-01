.. _banana-api-tg-methods-edit_forum_topic:

edit_forum_topic
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> edit_forum_topic(Agent&& agent, edit_forum_topic_args_t args)
.. cpp:function:: template <class Agent> \
                  void edit_forum_topic(Agent&& agent, edit_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to edit name and icon of a topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.

.. cpp:struct:: edit_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`edit_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t message_thread_id

   Unique identifier for the target message thread of the forum topic

   .. cpp:member:: optional_t<string_t> name

   New topic name, 0-128 characters. If not specified or empty, the current name of the topic will be kept

   .. cpp:member:: optional_t<string_t> icon_custom_emoji_id

   New unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers. Pass an empty string to remove the icon. If not specified, the current icon will be kept
