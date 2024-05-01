.. _banana-api-tg-types-proximity_alert_triggered:

proximity_alert_triggered_t
===========================

.. cpp:struct:: banana::api::proximity_alert_triggered_t

   This object represents the content of a service message, sent whenever a user in the chat triggers a proximity alert set by another user.

   .. cpp:member:: user_t traveler

   User that triggered the alert

   .. cpp:member:: user_t watcher

   User that set the alert

   .. cpp:member:: integer_t distance

   The distance between the users
