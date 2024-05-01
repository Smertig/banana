.. _banana-api-tg-methods-forward_messages:

forward_messages
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<message_id_t>, Agent&&> forward_messages(Agent&& agent, forward_messages_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void forward_messages(Agent&& agent, forward_messages_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<message_id_t>>``.

   Use this method to forward multiple messages of any kind. If some of the specified messages can't be found or forwarded, they are skipped. Service messages and messages with protected content can't be forwarded. Album grouping is kept for forwarded messages. On success, an array of MessageId of the sent messages is returned.

.. cpp:struct:: forward_messages_args_t

   Arguments that should be passed to :cpp:func:`forward_messages`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: variant_t<integer_t, string_t> from_chat_id

   Unique identifier for the chat where the original messages were sent (or channel username in the format @channelusername)

   .. cpp:member:: array_t<integer_t> message_ids

   A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to forward. The identifiers must be specified in a strictly increasing order.

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the messages silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the forwarded messages from forwarding and saving
