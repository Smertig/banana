.. _banana-api-tg-methods-copy_message:

copy_message
============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_id_t, Agent&&> copy_message(Agent&& agent, copy_message_args_t args)
.. cpp:function:: template <class Agent> \
                  void copy_message(Agent&& agent, copy_message_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_id_t>``.

   Use this method to copy messages of any kind. Service messages, giveaway messages, giveaway winners messages, and invoice messages can't be copied. A quiz poll can be copied only if the value of the field correct_option_id is known to the bot. The method is analogous to the method forwardMessage, but the copied message doesn't have a link to the original message. Returns the MessageId of the sent message on success.

.. cpp:struct:: copy_message_args_t

   Arguments that should be passed to :cpp:func:`copy_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: variant_t<integer_t, string_t> from_chat_id

   Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)

   .. cpp:member:: integer_t message_id

   Message identifier in the chat specified in from_chat_id

   .. cpp:member:: optional_t<string_t> caption

   New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the new caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   A JSON-serialized list of special entities that appear in the new caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
