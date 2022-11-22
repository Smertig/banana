.. _banana-api-tg-methods-delete_my_commands:

delete_my_commands
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_my_commands(Agent&& agent, delete_my_commands_args_t args)
.. cpp:function:: template <class Agent> \
                  void delete_my_commands(Agent&& agent, delete_my_commands_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete the list of the bot's commands for the given scope and user language. After deletion, higher level commands will be shown to affected users. Returns True on success.

.. cpp:struct:: delete_my_commands_args_t

   Arguments that should be passed to :cpp:func:`delete_my_commands`.


   .. cpp:member:: optional_t<bot_command_scope_t> scope

   A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
