.. _banana-api-tg-methods-delete_messages:

delete_messages
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_messages(Agent&& agent, delete_messages_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void delete_messages(Agent&& agent, delete_messages_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete multiple messages simultaneously. If some of the specified messages can't be found, they are skipped. Returns True on success.

.. cpp:struct:: delete_messages_args_t

   Arguments that should be passed to :cpp:func:`delete_messages`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: array_t<integer_t> message_ids

   A JSON-serialized list of 1-100 identifiers of messages to delete. See deleteMessage for limitations on which messages can be deleted
