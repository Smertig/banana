.. _banana-api-tg-methods-get_chat_menu_button:

get_chat_menu_button
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<menu_button_t, Agent&&> get_chat_menu_button(Agent&& agent, get_chat_menu_button_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_chat_menu_button(Agent&& agent, get_chat_menu_button_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<menu_button_t>``.

   Use this method to get the current value of the bot's menu button in a private chat, or the default menu button. Returns MenuButton on success.

.. cpp:struct:: get_chat_menu_button_args_t

   Arguments that should be passed to :cpp:func:`get_chat_menu_button`.


   .. cpp:member:: optional_t<integer_t> chat_id

   Unique identifier for the target private chat. If not specified, default bot's menu button will be returned
