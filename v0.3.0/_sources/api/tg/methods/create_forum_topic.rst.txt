.. _banana-api-tg-methods-create_forum_topic:

create_forum_topic
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<forum_topic_t, Agent&&> create_forum_topic(Agent&& agent, create_forum_topic_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void create_forum_topic(Agent&& agent, create_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<forum_topic_t>``.

   Use this method to create a topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns information about the created topic as a ForumTopic object.

.. cpp:struct:: create_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`create_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: string_t name

   Topic name, 1-128 characters

   .. cpp:member:: optional_t<integer_t> icon_color

   Color of the topic icon in RGB format. Currently, must be one of 7322096 (0x6FB9F0), 16766590 (0xFFD67E), 13338331 (0xCB86DB), 9367192 (0x8EEE98), 16749490 (0xFF93B2), or 16478047 (0xFB6F5F)

   .. cpp:member:: optional_t<string_t> icon_custom_emoji_id

   Unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers.
