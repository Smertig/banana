.. _banana-api-tg-types-star_transaction:

star_transaction_t
==================

.. cpp:struct:: banana::api::star_transaction_t

   Describes a Telegram Star transaction. Note that if the buyer initiates a chargeback with the payment provider from whom they acquired Stars (e.g., Apple, Google) following this transaction, the refunded Stars will be deducted from the bot's balance. This is outside of Telegram's control.

   .. cpp:member:: string_t id

   Unique identifier of the transaction. Coincides with the identifier of the original transaction for refund transactions. Coincides with SuccessfulPayment.telegram_payment_charge_id for successful incoming payments from users.

   .. cpp:member:: integer_t amount

   Integer amount of Telegram Stars transferred by the transaction

   .. cpp:member:: integer_t date

   Date the transaction was created in Unix time

   .. cpp:member:: optional_t<integer_t> nanostar_amount

   Optional. The number of 1/1000000000 shares of Telegram Stars transferred by the transaction; from 0 to 999999999

   .. cpp:member:: optional_t<transaction_partner_t> source

   Optional. Source of an incoming transaction (e.g., a user purchasing goods or services, Fragment refunding a failed withdrawal). Only for incoming transactions

   .. cpp:member:: optional_t<transaction_partner_t> receiver

   Optional. Receiver of an outgoing transaction (e.g., a user for a purchase refund, Fragment for a withdrawal). Only for outgoing transactions
