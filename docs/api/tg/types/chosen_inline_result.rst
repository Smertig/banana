.. _banana-api-tg-types-chosen_inline_result:

chosen_inline_result_t
======================

.. cpp:struct:: banana::api::chosen_inline_result_t

   Represents a result of an inline query that was chosen by the user and sent to their chat partner.

   .. cpp:member:: string_t result_id

   The unique identifier for the result that was chosen

   .. cpp:member:: user_t from

   The user that chose the result

   .. cpp:member:: string_t query

   The query that was used to obtain the result

   .. cpp:member:: optional_t<location_t> location

   Optional. Sender location, only for bots that require user location

   .. cpp:member:: optional_t<string_t> inline_message_id

   Optional. Identifier of the sent inline message. Available only if there is an inline keyboard attached to the message. Will be also received in callback queries and can be used to edit the message.
