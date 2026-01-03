.. _banana-api-tg-types-prepared_inline_message:

prepared_inline_message_t
=========================

.. cpp:struct:: banana::api::prepared_inline_message_t

   Describes an inline message to be sent by a user of a Mini App.

   .. cpp:member:: string_t id

   Unique identifier of the prepared message

   .. cpp:member:: integer_t expiration_date

   Expiration date of the prepared message, in Unix time. Expired prepared messages can no longer be used
