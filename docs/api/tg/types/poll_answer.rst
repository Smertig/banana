.. _banana-api-tg-types-poll_answer:

poll_answer_t
=============

.. cpp:struct:: banana::api::poll_answer_t

   This object represents an answer of a user in a non-anonymous poll.

   .. cpp:member:: string_t poll_id

   Unique poll identifier

   .. cpp:member:: array_t<integer_t> option_ids

   0-based identifiers of chosen answer options. May be empty if the vote was retracted.

   .. cpp:member:: optional_t<chat_t> voter_chat

   Optional. The chat that changed the answer to the poll, if the voter is anonymous

   .. cpp:member:: optional_t<user_t> user

   Optional. The user that changed the answer to the poll, if the voter isn't anonymous
