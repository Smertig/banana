.. _banana-api-tg-methods-send_photo:

send_photo
==========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_photo(Agent&& agent, send_photo_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_photo(Agent&& agent, send_photo_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send photos. On success, the sent Message is returned.

.. cpp:struct:: send_photo_args_t

   Arguments that should be passed to :cpp:func:`send_photo`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: variant_t<input_file_t, string_t> photo

   Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More information on Sending Files »

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: optional_t<string_t> caption

   Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the photo caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> show_caption_above_media

   Pass True, if the caption must be shown above the message media

   .. cpp:member:: optional_t<boolean_t> has_spoiler

   Pass True if the photo needs to be covered with a spoiler animation

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<string_t> message_effect_id

   Unique identifier of the message effect to be added to the message; for private chats only

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user

   .. cpp:member:: optional_t<string_t> business_connection_id

   Unique identifier of the business connection on behalf of which the message will be sent
