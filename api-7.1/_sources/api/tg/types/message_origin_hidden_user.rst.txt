.. _banana-api-tg-types-message_origin_hidden_user:

message_origin_hidden_user_t
============================

.. cpp:struct:: banana::api::message_origin_hidden_user_t

   The message was originally sent by an unknown user.

   .. cpp:member:: string_t type

   Type of the message origin, always “hidden_user”

   .. cpp:member:: integer_t date

   Date the message was sent originally in Unix time

   .. cpp:member:: string_t sender_user_name

   Name of the user that sent the message originally
