.. _banana-api-tg-methods-get_user_chat_boosts:

get_user_chat_boosts
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<user_chat_boosts_t, Agent&&> get_user_chat_boosts(Agent&& agent, get_user_chat_boosts_args_t args)
.. cpp:function:: template <class Agent> \
                  void get_user_chat_boosts(Agent&& agent, get_user_chat_boosts_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<user_chat_boosts_t>``.

   Use this method to get the list of boosts added to a chat by a user. Requires administrator rights in the chat. Returns a UserChatBoosts object.

.. cpp:struct:: get_user_chat_boosts_args_t

   Arguments that should be passed to :cpp:func:`get_user_chat_boosts`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the chat or username of the channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user
