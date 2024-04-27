.. _banana-api-tg-methods-set_chat_permissions:

set_chat_permissions
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_permissions(Agent&& agent, set_chat_permissions_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_chat_permissions(Agent&& agent, set_chat_permissions_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members administrator rights. Returns True on success.

.. cpp:struct:: set_chat_permissions_args_t

   Arguments that should be passed to :cpp:func:`set_chat_permissions`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: chat_permissions_t permissions

   A JSON-serialized object for new default chat permissions

   .. cpp:member:: optional_t<boolean_t> use_independent_chat_permissions

   Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
