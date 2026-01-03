.. _banana-api-tg-types-revenue_withdrawal_state_succeeded:

revenue_withdrawal_state_succeeded_t
====================================

.. cpp:struct:: banana::api::revenue_withdrawal_state_succeeded_t

   The withdrawal succeeded.

   .. cpp:member:: string_t type

   Type of the state, always “succeeded”

   .. cpp:member:: integer_t date

   Date the withdrawal was completed in Unix time

   .. cpp:member:: string_t url

   An HTTPS URL that can be used to see transaction details
