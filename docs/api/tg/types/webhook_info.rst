.. _banana-api-tg-types-webhook_info:

webhook_info_t
==============

.. cpp:struct:: banana::api::webhook_info_t

   Describes the current status of a webhook.

   .. cpp:member:: string_t url

   Webhook URL, may be empty if webhook is not set up

   .. cpp:member:: boolean_t has_custom_certificate

   True, if a custom certificate was provided for webhook certificate checks

   .. cpp:member:: integer_t pending_update_count

   Number of updates awaiting delivery

   .. cpp:member:: optional_t<string_t> ip_address

   Optional. Currently used webhook IP address

   .. cpp:member:: optional_t<integer_t> last_error_date

   Optional. Unix time for the most recent error that happened when trying to deliver an update via webhook

   .. cpp:member:: optional_t<string_t> last_error_message

   Optional. Error message in human-readable format for the most recent error that happened when trying to deliver an update via webhook

   .. cpp:member:: optional_t<integer_t> last_synchronization_error_date

   Optional. Unix time of the most recent error that happened when trying to synchronize available updates with Telegram datacenters

   .. cpp:member:: optional_t<integer_t> max_connections

   Optional. The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery

   .. cpp:member:: optional_t<array_t<string_t>> allowed_updates

   Optional. A list of update types the bot is subscribed to. Defaults to all update types except chat_member
