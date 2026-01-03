.. _banana-api-tg-types-business_messages_deleted:

business_messages_deleted_t
===========================

.. cpp:struct:: banana::api::business_messages_deleted_t

   This object is received when messages are deleted from a connected business account.

   .. cpp:member:: string_t business_connection_id

   Unique identifier of the business connection

   .. cpp:member:: chat_t chat

   Information about a chat in the business account. The bot may not have access to the chat or the corresponding user.

   .. cpp:member:: array_t<integer_t> message_ids

   The list of identifiers of deleted messages in the chat of the business account
