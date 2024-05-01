.. _banana-api-tg-methods-close_forum_topic:

close_forum_topic
=================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> close_forum_topic(Agent&& agent, close_forum_topic_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void close_forum_topic(Agent&& agent, close_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to close an open topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.

.. cpp:struct:: close_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`close_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t message_thread_id

   Unique identifier for the target message thread of the forum topic
