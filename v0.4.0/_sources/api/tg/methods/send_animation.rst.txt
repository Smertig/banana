.. _banana-api-tg-methods-send_animation:

send_animation
==============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_animation(Agent&& agent, send_animation_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_animation(Agent&& agent, send_animation_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send animation files (GIF or H.264/MPEG-4 AVC video without sound). On success, the sent Message is returned. Bots can currently send animation files of up to 50 MB in size, this limit may be changed in the future.

.. cpp:struct:: send_animation_args_t

   Arguments that should be passed to :cpp:func:`send_animation`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: variant_t<input_file_t, string_t> animation

   Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More information on Sending Files »

   .. cpp:member:: optional_t<string_t> business_connection_id

   Unique identifier of the business connection on behalf of which the message will be sent

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: optional_t<integer_t> duration

   Duration of sent animation in seconds

   .. cpp:member:: optional_t<integer_t> width

   Animation width

   .. cpp:member:: optional_t<integer_t> height

   Animation height

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> thumbnail

   Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »

   .. cpp:member:: optional_t<string_t> caption

   Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the animation caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> has_spoiler

   Pass True if the animation needs to be covered with a spoiler animation

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
