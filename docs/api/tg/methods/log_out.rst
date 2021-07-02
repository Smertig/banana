.. _banana-api-tg-methods-log_out:

log_out
=======

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> log_out(Connector&& connector, log_out_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, log_out_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to log out from the cloud Bot API server before launching the bot locally. You must log out the bot before running it locally, otherwise there is no guarantee that the bot will receive updates. After a successful call, you can immediately log in on a local server, but will not be able to log in back to the cloud Bot API server for 10 minutes. Returns True on success. Requires no parameters.

.. cpp:struct:: log_out_args_t

   Arguments that should be passed to :cpp:func:`log_out`.

