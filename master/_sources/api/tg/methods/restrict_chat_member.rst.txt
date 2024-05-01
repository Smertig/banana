.. _banana-api-tg-methods-restrict_chat_member:

restrict_chat_member
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> restrict_chat_member(Agent&& agent, restrict_chat_member_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void restrict_chat_member(Agent&& agent, restrict_chat_member_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate administrator rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.

.. cpp:struct:: restrict_chat_member_args_t

   Arguments that should be passed to :cpp:func:`restrict_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: chat_permissions_t permissions

   A JSON-serialized object for new user permissions

   .. cpp:member:: optional_t<boolean_t> use_independent_chat_permissions

   Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.

   .. cpp:member:: optional_t<integer_t> until_date

   Date when restrictions will be lifted for the user; Unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
