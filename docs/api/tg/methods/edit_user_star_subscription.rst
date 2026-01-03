.. _banana-api-tg-methods-edit_user_star_subscription:

edit_user_star_subscription
===========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> edit_user_star_subscription(Agent&& agent, edit_user_star_subscription_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void edit_user_star_subscription(Agent&& agent, edit_user_star_subscription_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Allows the bot to cancel or re-enable extension of a subscription paid in Telegram Stars. Returns True on success.

.. cpp:struct:: edit_user_star_subscription_args_t

   Arguments that should be passed to :cpp:func:`edit_user_star_subscription`.


   .. cpp:member:: integer_t user_id

   Identifier of the user whose subscription will be edited

   .. cpp:member:: string_t telegram_payment_charge_id

   Telegram payment identifier for the subscription

   .. cpp:member:: boolean_t is_canceled

   Pass True to cancel extension of the user subscription; the subscription must be active up to the end of the current subscription period. Pass False to allow the user to re-enable a subscription that was previously canceled by the bot.
