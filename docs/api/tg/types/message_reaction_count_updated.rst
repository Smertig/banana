.. _banana-api-tg-types-message_reaction_count_updated:

message_reaction_count_updated_t
================================

.. cpp:struct:: banana::api::message_reaction_count_updated_t

   This object represents reaction changes on a message with anonymous reactions.

   .. cpp:member:: chat_t chat

   The chat containing the message

   .. cpp:member:: integer_t message_id

   Unique message identifier inside the chat

   .. cpp:member:: integer_t date

   Date of the change in Unix time

   .. cpp:member:: array_t<reaction_count_t> reactions

   List of reactions that are present on the message
