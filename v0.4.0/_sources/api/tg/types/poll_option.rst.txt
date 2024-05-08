.. _banana-api-tg-types-poll_option:

poll_option_t
=============

.. cpp:struct:: banana::api::poll_option_t

   This object contains information about one answer option in a poll.

   .. cpp:member:: string_t text

   Option text, 1-100 characters

   .. cpp:member:: integer_t voter_count

   Number of users that voted for this option

   .. cpp:member:: optional_t<array_t<message_entity_t>> text_entities

   Optional. Special entities that appear in the option text. Currently, only custom emoji entities are allowed in poll option texts
