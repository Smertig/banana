.. _banana-api-tg-methods-get_me:

get_me
======

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<user_t, Connector&&> get_me(Connector&& connector, get_me_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<user_t, Connector&&> call(Connector&& connector, get_me_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   A simple method for testing your bot's auth token. Requires no parameters. Returns basic information about the bot in form of a User object.

.. cpp:struct:: get_me_args_t

   Arguments that should be passed to :cpp:func:`get_me`.

