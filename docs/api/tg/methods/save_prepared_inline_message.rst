.. _banana-api-tg-methods-save_prepared_inline_message:

save_prepared_inline_message
============================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<prepared_inline_message_t, Agent&&> save_prepared_inline_message(Agent&& agent, save_prepared_inline_message_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void save_prepared_inline_message(Agent&& agent, save_prepared_inline_message_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<prepared_inline_message_t>``.

   Stores a message that can be sent by a user of a Mini App. Returns a PreparedInlineMessage object.

.. cpp:struct:: save_prepared_inline_message_args_t

   Arguments that should be passed to :cpp:func:`save_prepared_inline_message`.


   .. cpp:member:: integer_t user_id

   Unique identifier of the target user that can use the prepared message

   .. cpp:member:: inline_query_result_t result

   A JSON-serialized object describing the message to be sent

   .. cpp:member:: optional_t<boolean_t> allow_user_chats

   Pass True if the message can be sent to private chats with users

   .. cpp:member:: optional_t<boolean_t> allow_bot_chats

   Pass True if the message can be sent to private chats with bots

   .. cpp:member:: optional_t<boolean_t> allow_group_chats

   Pass True if the message can be sent to group and supergroup chats

   .. cpp:member:: optional_t<boolean_t> allow_channel_chats

   Pass True if the message can be sent to channel chats
