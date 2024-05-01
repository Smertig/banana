.. _banana-api-tg-methods-edit_general_forum_topic:

edit_general_forum_topic
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> edit_general_forum_topic(Agent&& agent, edit_general_forum_topic_args_t args)
.. cpp:function:: template <class Agent> \
                  void edit_general_forum_topic(Agent&& agent, edit_general_forum_topic_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to edit the name of the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have can_manage_topics administrator rights. Returns True on success.

.. cpp:struct:: edit_general_forum_topic_args_t

   Arguments that should be passed to :cpp:func:`edit_general_forum_topic`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: string_t name

   New topic name, 1-128 characters
