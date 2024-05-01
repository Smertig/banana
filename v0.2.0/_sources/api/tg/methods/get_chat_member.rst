.. _banana-api-tg-methods-get_chat_member:

get_chat_member
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_member_t, Agent&&> get_chat_member(Agent&& agent, get_chat_member_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to get information about a member of a chat. Returns a ChatMember object on success.

.. cpp:struct:: get_chat_member_args_t

   Arguments that should be passed to :cpp:func:`get_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user
