.. _banana-api-tg-methods-delete_webhook:

delete_webhook
==============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_webhook(Agent&& agent, delete_webhook_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void delete_webhook(Agent&& agent, delete_webhook_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.

.. cpp:struct:: delete_webhook_args_t

   Arguments that should be passed to :cpp:func:`delete_webhook`.


   .. cpp:member:: optional_t<boolean_t> drop_pending_updates

   Pass True to drop all pending updates
