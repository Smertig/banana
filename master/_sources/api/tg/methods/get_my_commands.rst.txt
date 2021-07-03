.. _banana-api-tg-methods-get_my_commands:

get_my_commands
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<array_t<bot_command_t>, Connector&&> get_my_commands(Connector&& connector, get_my_commands_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get the current list of the bot's commands for the given scope and user language. Returns Array of BotCommand on success. If commands aren't set, an empty list is returned.

.. cpp:struct:: get_my_commands_args_t

   Arguments that should be passed to :cpp:func:`get_my_commands`.


   .. cpp:member:: optional_t<bot_command_scope_t> scope

   A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code or an empty string
