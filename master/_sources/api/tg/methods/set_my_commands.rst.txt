.. _banana-api-tg-methods-set_my_commands:

set_my_commands
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> set_my_commands(Connector&& connector, set_my_commands_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, set_my_commands_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to change the list of the bot's commands. Returns True on success.

.. cpp:struct:: set_my_commands_args_t

   Arguments that should be passed to :cpp:func:`set_my_commands`.


   .. cpp:member:: array_t<bot_command_t> commands

   A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
