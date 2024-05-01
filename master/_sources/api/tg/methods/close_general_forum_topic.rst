.. _banana-api-tg-methods-close_general_forum_topic:

close_general_forum_topic
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> close_general_forum_topic(Agent&& agent, close_general_forum_topic_args_t args)
.. cpp:function:: template <class Agent> \
                  void close_general_forum_topic(Agent&& agent, close_general_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to close an open 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.

.. cpp:struct:: close_general_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`close_general_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
