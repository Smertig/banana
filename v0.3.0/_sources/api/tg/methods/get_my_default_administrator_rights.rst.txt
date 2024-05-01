.. _banana-api-tg-methods-get_my_default_administrator_rights:

get_my_default_administrator_rights
===================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_administrator_rights_t, Agent&&> get_my_default_administrator_rights(Agent&& agent, get_my_default_administrator_rights_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_my_default_administrator_rights(Agent&& agent, get_my_default_administrator_rights_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<chat_administrator_rights_t>``.

   Use this method to get the current default administrator rights of the bot. Returns ChatAdministratorRights on success.

.. cpp:struct:: get_my_default_administrator_rights_args_t

   Arguments that should be passed to :cpp:func:`get_my_default_administrator_rights`.


   .. cpp:member:: optional_t<boolean_t> for_channels

   Pass True to get default administrator rights of the bot in channels. Otherwise, default administrator rights of the bot for groups and supergroups will be returned.
