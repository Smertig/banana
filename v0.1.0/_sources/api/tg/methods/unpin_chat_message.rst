.. _banana-api-tg-methods-unpin_chat_message:

unpin_chat_message
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> unpin_chat_message(Connector&& connector, unpin_chat_message_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, unpin_chat_message_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to remove a message from the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.

.. cpp:struct:: unpin_chat_message_args_t

   Arguments that should be passed to :cpp:func:`unpin_chat_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_id

   Identifier of a message to unpin. If not specified, the most recent pinned message (by sending date) will be unpinned.
