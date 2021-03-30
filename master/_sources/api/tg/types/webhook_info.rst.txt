.. _banana-api-tg-types-webhook_info:

webhook_info_t
==============

.. cpp:struct:: banana::api::webhook_info_t

   Contains information about the current status of a webhook.

   .. cpp:member:: string_t url

   Webhook URL, may be empty if webhook is not set up

   .. cpp:member:: boolean_t has_custom_certificate

   True, if a custom certificate was provided for webhook certificate checks

   .. cpp:member:: integer_t pending_update_count

   Number of updates awaiting delivery

   .. cpp:member:: optional_t<string_t> ip_address

   Currently used webhook IP address

   .. cpp:member:: optional_t<integer_t> last_error_date

   Unix time for the most recent error that happened when trying to deliver an update via webhook

   .. cpp:member:: optional_t<string_t> last_error_message

   Error message in human-readable format for the most recent error that happened when trying to deliver an update via webhook

   .. cpp:member:: optional_t<integer_t> max_connections

   Maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery

   .. cpp:member:: optional_t<array_t<string_t>> allowed_updates

   A list of update types the bot is subscribed to. Defaults to all update types
