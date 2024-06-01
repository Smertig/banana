.. _banana-api-tg-types-message_reaction_updated:

message_reaction_updated_t
==========================

.. cpp:struct:: banana::api::message_reaction_updated_t

   This object represents a change of a reaction on a message performed by a user.

   .. cpp:member:: chat_t chat

   The chat containing the message the user reacted to

   .. cpp:member:: integer_t message_id

   Unique identifier of the message inside the chat

   .. cpp:member:: integer_t date

   Date of the change in Unix time

   .. cpp:member:: array_t<reaction_type_t> old_reaction

   Previous list of reaction types that were set by the user

   .. cpp:member:: array_t<reaction_type_t> new_reaction

   New list of reaction types that have been set by the user

   .. cpp:member:: optional_t<user_t> user

   Optional. The user that changed the reaction, if the user isn't anonymous

   .. cpp:member:: optional_t<chat_t> actor_chat

   Optional. The chat on behalf of which the reaction was changed, if the user is anonymous
