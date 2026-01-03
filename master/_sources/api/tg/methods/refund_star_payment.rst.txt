.. _banana-api-tg-methods-refund_star_payment:

refund_star_payment
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> refund_star_payment(Agent&& agent, refund_star_payment_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void refund_star_payment(Agent&& agent, refund_star_payment_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Refunds a successful payment in Telegram Stars. Returns True on success.

.. cpp:struct:: refund_star_payment_args_t

   Arguments that should be passed to :cpp:func:`refund_star_payment`.


   .. cpp:member:: integer_t user_id

   Identifier of the user whose payment will be refunded

   .. cpp:member:: string_t telegram_payment_charge_id

   Telegram payment identifier
