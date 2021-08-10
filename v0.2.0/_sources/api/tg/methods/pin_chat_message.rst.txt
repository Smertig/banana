.. _banana-api-tg-methods-pin_chat_message:

pin_chat_message
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> pin_chat_message(Agent&& agent, pin_chat_message_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to add a message to the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.

.. cpp:struct:: pin_chat_message_args_t

   Arguments that should be passed to :cpp:func:`pin_chat_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t message_id

   Identifier of a message to pin

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Pass True, if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
