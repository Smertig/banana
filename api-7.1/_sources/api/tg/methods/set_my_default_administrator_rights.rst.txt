.. _banana-api-tg-methods-set_my_default_administrator_rights:

set_my_default_administrator_rights
===================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_my_default_administrator_rights(Agent&& agent, set_my_default_administrator_rights_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_my_default_administrator_rights(Agent&& agent, set_my_default_administrator_rights_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the default administrator rights requested by the bot when it's added as an administrator to groups or channels. These rights will be suggested to users, but they are free to modify the list before adding the bot. Returns True on success.

.. cpp:struct:: set_my_default_administrator_rights_args_t

   Arguments that should be passed to :cpp:func:`set_my_default_administrator_rights`.


   .. cpp:member:: optional_t<chat_administrator_rights_t> rights

   A JSON-serialized object describing new default administrator rights. If not specified, the default administrator rights will be cleared.

   .. cpp:member:: optional_t<boolean_t> for_channels

   Pass True to change the default administrator rights of the bot in channels. Otherwise, the default administrator rights of the bot for groups and supergroups will be changed.
