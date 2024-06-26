.. _banana-api-tg-methods-get_chat_administrators:

get_chat_administrators
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<chat_member_t>, Agent&&> get_chat_administrators(Agent&& agent, get_chat_administrators_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_chat_administrators(Agent&& agent, get_chat_administrators_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<chat_member_t>>``.

   Use this method to get a list of administrators in a chat, which aren't bots. Returns an Array of ChatMember objects.

.. cpp:struct:: get_chat_administrators_args_t

   Arguments that should be passed to :cpp:func:`get_chat_administrators`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
