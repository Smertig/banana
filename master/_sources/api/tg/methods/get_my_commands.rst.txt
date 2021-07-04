.. _banana-api-tg-methods-get_my_commands:

get_my_commands
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<bot_command_t>, Agent&&> get_my_commands(Agent&& agent, get_my_commands_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to get the current list of the bot's commands for the given scope and user language. Returns Array of BotCommand on success. If commands aren't set, an empty list is returned.

.. cpp:struct:: get_my_commands_args_t

   Arguments that should be passed to :cpp:func:`get_my_commands`.


   .. cpp:member:: optional_t<bot_command_scope_t> scope

   A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code or an empty string
