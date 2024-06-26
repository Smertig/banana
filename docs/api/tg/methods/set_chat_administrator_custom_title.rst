.. _banana-api-tg-methods-set_chat_administrator_custom_title:

set_chat_administrator_custom_title
===================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_administrator_custom_title(Agent&& agent, set_chat_administrator_custom_title_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_chat_administrator_custom_title(Agent&& agent, set_chat_administrator_custom_title_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to set a custom title for an administrator in a supergroup promoted by the bot. Returns True on success.

.. cpp:struct:: set_chat_administrator_custom_title_args_t

   Arguments that should be passed to :cpp:func:`set_chat_administrator_custom_title`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: string_t custom_title

   New custom title for the administrator; 0-16 characters, emoji are not allowed
