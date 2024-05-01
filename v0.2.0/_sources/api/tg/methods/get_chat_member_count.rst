.. _banana-api-tg-methods-get_chat_member_count:

get_chat_member_count
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<integer_t, Agent&&> get_chat_member_count(Agent&& agent, get_chat_member_count_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to get the number of members in a chat. Returns Int on success.

.. cpp:struct:: get_chat_member_count_args_t

   Arguments that should be passed to :cpp:func:`get_chat_member_count`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
