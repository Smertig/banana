.. _banana-api-tg-types-transaction_partner_fragment:

transaction_partner_fragment_t
==============================

.. cpp:struct:: banana::api::transaction_partner_fragment_t

   Describes a withdrawal transaction with Fragment.

   .. cpp:member:: string_t type

   Type of the transaction partner, always “fragment”

   .. cpp:member:: optional_t<revenue_withdrawal_state_t> withdrawal_state

   Optional. State of the transaction if the transaction is outgoing
