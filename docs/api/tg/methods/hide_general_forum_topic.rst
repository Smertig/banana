.. _banana-api-tg-methods-hide_general_forum_topic:

hide_general_forum_topic
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> hide_general_forum_topic(Agent&& agent, hide_general_forum_topic_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void hide_general_forum_topic(Agent&& agent, hide_general_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to hide the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. The topic will be automatically closed if it was open. Returns True on success.

.. cpp:struct:: hide_general_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`hide_general_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
