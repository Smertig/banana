.. _banana-api-tg-methods-get_webhook_info:

get_webhook_info
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<webhook_info_t, Agent&&> get_webhook_info(Agent&& agent)
.. cpp:function:: template <class Agent, class F> \
                  void get_webhook_info(Agent&& agent, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<webhook_info_t>``.

   Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.

