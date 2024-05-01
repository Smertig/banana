.. _banana-api-tg-methods-forward_message:

forward_message
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> forward_message(Agent&& agent, forward_message_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to forward messages of any kind. Service messages can't be forwarded. On success, the sent Message is returned.

.. cpp:struct:: forward_message_args_t

   Arguments that should be passed to :cpp:func:`forward_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: variant_t<integer_t, string_t> from_chat_id

   Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: integer_t message_id

   Message identifier in the chat specified in from_chat_id
