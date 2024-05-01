.. _banana-api-tg-methods-delete_webhook:

delete_webhook
==============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> delete_webhook(Connector&& connector, delete_webhook_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, delete_webhook_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.

.. cpp:struct:: delete_webhook_args_t

   Arguments that should be passed to :cpp:func:`delete_webhook`.


   .. cpp:member:: optional_t<boolean_t> drop_pending_updates

   Pass True to drop all pending updates
