.. _banana-api-tg-methods-unpin_all_chat_messages:

unpin_all_chat_messages
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> unpin_all_chat_messages(Connector&& connector, unpin_all_chat_messages_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to clear the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.

.. cpp:struct:: unpin_all_chat_messages_args_t

   Arguments that should be passed to :cpp:func:`unpin_all_chat_messages`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)
