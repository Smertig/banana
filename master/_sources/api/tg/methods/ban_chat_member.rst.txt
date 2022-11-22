.. _banana-api-tg-methods-ban_chat_member:

ban_chat_member
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> ban_chat_member(Agent&& agent, ban_chat_member_args_t args)
.. cpp:function:: template <class Agent> \
                  void ban_chat_member(Agent&& agent, ban_chat_member_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to ban a user in a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the chat on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.

.. cpp:struct:: ban_chat_member_args_t

   Arguments that should be passed to :cpp:func:`ban_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<integer_t> until_date

   Date when the user will be unbanned, unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.

   .. cpp:member:: optional_t<boolean_t> revoke_messages

   Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
