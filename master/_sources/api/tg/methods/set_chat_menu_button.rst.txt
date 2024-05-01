.. _banana-api-tg-methods-set_chat_menu_button:

set_chat_menu_button
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_menu_button(Agent&& agent, set_chat_menu_button_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_chat_menu_button(Agent&& agent, set_chat_menu_button_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the bot's menu button in a private chat, or the default menu button. Returns True on success.

.. cpp:struct:: set_chat_menu_button_args_t

   Arguments that should be passed to :cpp:func:`set_chat_menu_button`.


   .. cpp:member:: optional_t<integer_t> chat_id

   Unique identifier for the target private chat. If not specified, default bot's menu button will be changed

   .. cpp:member:: optional_t<menu_button_t> menu_button

   A JSON-serialized object for the bot's new menu button. Defaults to MenuButtonDefault
