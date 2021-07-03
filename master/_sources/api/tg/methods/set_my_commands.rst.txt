.. _banana-api-tg-methods-set_my_commands:

set_my_commands
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> set_my_commands(Connector&& connector, set_my_commands_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to change the list of the bot's commands. See https://core.telegram.org/bots#commands for more details about bot commands. Returns True on success.

.. cpp:struct:: set_my_commands_args_t

   Arguments that should be passed to :cpp:func:`set_my_commands`.


   .. cpp:member:: array_t<bot_command_t> commands

   A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.

   .. cpp:member:: optional_t<bot_command_scope_t> scope

   A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
