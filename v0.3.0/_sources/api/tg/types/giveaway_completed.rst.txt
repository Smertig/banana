.. _banana-api-tg-types-giveaway_completed:

giveaway_completed_t
====================

.. cpp:struct:: banana::api::giveaway_completed_t

   This object represents a service message about the completion of a giveaway without public winners.

   .. cpp:member:: integer_t winner_count

   Number of winners in the giveaway

   .. cpp:member:: optional_t<integer_t> unclaimed_prize_count

   Optional. Number of undistributed prizes

   .. cpp:member:: optional_t<message_t> giveaway_message

   Optional. Message with the giveaway that was completed, if it wasn't deleted
