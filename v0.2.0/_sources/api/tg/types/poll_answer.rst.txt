.. _banana-api-tg-types-poll_answer:

poll_answer_t
=============

.. cpp:struct:: banana::api::poll_answer_t

   This object represents an answer of a user in a non-anonymous poll.

   .. cpp:member:: string_t poll_id

   Unique poll identifier

   .. cpp:member:: user_t user

   The user, who changed the answer to the poll

   .. cpp:member:: array_t<integer_t> option_ids

   0-based identifiers of answer options, chosen by the user. May be empty if the user retracted their vote.
