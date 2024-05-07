.. _banana-api-tg-methods-send_chat_action:

send_chat_action
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> send_chat_action(Agent&& agent, send_chat_action_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_chat_action(Agent&& agent, send_chat_action_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method when you need to tell the user that something is happening on the bot's side. The status is set for 5 seconds or less (when a message arrives from your bot, Telegram clients clear its typing status). Returns True on success. Example: The ImageBot needs some time to process a request and upload the image. Instead of sending a text message along the lines of “Retrieving image, please wait…”, the bot may use sendChatAction with action = upload_photo. The user will see a “sending photo” status for the bot. We only recommend using this method when a response from the bot will take a noticeable amount of time to arrive.

.. cpp:struct:: send_chat_action_args_t

   Arguments that should be passed to :cpp:func:`send_chat_action`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t action

   Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, choose_sticker for stickers, find_location for location data, record_video_note or upload_video_note for video notes.

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread; for supergroups only
