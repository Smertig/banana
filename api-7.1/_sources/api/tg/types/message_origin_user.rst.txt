.. _banana-api-tg-types-message_origin_user:

message_origin_user_t
=====================

.. cpp:struct:: banana::api::message_origin_user_t

   The message was originally sent by a known user.

   .. cpp:member:: string_t type

   Type of the message origin, always “user”

   .. cpp:member:: integer_t date

   Date the message was sent originally in Unix time

   .. cpp:member:: user_t sender_user

   User that sent the message originally
