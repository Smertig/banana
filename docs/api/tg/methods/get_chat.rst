.. _banana-api-tg-methods-get_chat:

get_chat
========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_full_info_t, Agent&&> get_chat(Agent&& agent, get_chat_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_chat(Agent&& agent, get_chat_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<chat_full_info_t>``.

   Use this method to get up-to-date information about the chat. Returns a ChatFullInfo object on success.

.. cpp:struct:: get_chat_args_t

   Arguments that should be passed to :cpp:func:`get_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
