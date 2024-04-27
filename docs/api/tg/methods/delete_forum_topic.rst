.. _banana-api-tg-methods-delete_forum_topic:

delete_forum_topic
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_forum_topic(Agent&& agent, delete_forum_topic_args_t args)
.. cpp:function:: template <class Agent> \
                  void delete_forum_topic(Agent&& agent, delete_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete a forum topic along with all its messages in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_delete_messages administrator rights. Returns True on success.

.. cpp:struct:: delete_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`delete_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t message_thread_id

   Unique identifier for the target message thread of the forum topic
