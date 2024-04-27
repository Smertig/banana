.. _banana-api-tg-methods-set_my_commands:

set_my_commands
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_my_commands(Agent&& agent, set_my_commands_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_my_commands(Agent&& agent, set_my_commands_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the list of the bot's commands. See this manual for more details about bot commands. Returns True on success.

.. cpp:struct:: set_my_commands_args_t

   Arguments that should be passed to :cpp:func:`set_my_commands`.


   .. cpp:member:: array_t<bot_command_t> commands

   A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.

   .. cpp:member:: optional_t<bot_command_scope_t> scope

   A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
