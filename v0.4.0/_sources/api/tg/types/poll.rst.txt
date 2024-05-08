.. _banana-api-tg-types-poll:

poll_t
======

.. cpp:struct:: banana::api::poll_t

   This object contains information about a poll.

   .. cpp:member:: string_t id

   Unique poll identifier

   .. cpp:member:: string_t question

   Poll question, 1-300 characters

   .. cpp:member:: array_t<poll_option_t> options

   List of poll options

   .. cpp:member:: integer_t total_voter_count

   Total number of users that voted in the poll

   .. cpp:member:: boolean_t is_closed

   True, if the poll is closed

   .. cpp:member:: boolean_t is_anonymous

   True, if the poll is anonymous

   .. cpp:member:: string_t type

   Poll type, currently can be “regular” or “quiz”

   .. cpp:member:: boolean_t allows_multiple_answers

   True, if the poll allows multiple answers

   .. cpp:member:: optional_t<array_t<message_entity_t>> question_entities

   Optional. Special entities that appear in the question. Currently, only custom emoji entities are allowed in poll questions

   .. cpp:member:: optional_t<integer_t> correct_option_id

   Optional. 0-based identifier of the correct answer option. Available only for polls in the quiz mode, which are closed, or was sent (not forwarded) by the bot or to the private chat with the bot.

   .. cpp:member:: optional_t<string_t> explanation

   Optional. Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters

   .. cpp:member:: optional_t<array_t<message_entity_t>> explanation_entities

   Optional. Special entities like usernames, URLs, bot commands, etc. that appear in the explanation

   .. cpp:member:: optional_t<integer_t> open_period

   Optional. Amount of time in seconds the poll will be active after creation

   .. cpp:member:: optional_t<integer_t> close_date

   Optional. Point in time (Unix timestamp) when the poll will be automatically closed
