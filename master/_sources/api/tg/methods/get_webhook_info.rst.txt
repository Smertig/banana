.. _banana-api-tg-methods-get_webhook_info:

get_webhook_info
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<webhook_info_t, Connector&&> get_webhook_info(Connector&& connector, get_webhook_info_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<webhook_info_t, Connector&&> call(Connector&& connector, get_webhook_info_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.

.. cpp:struct:: get_webhook_info_args_t

   Arguments that should be passed to :cpp:func:`get_webhook_info`.

