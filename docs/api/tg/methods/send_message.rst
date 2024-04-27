.. _banana-api-tg-methods-send_message:

send_message
============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_message(Agent&& agent, send_message_args_t args)
.. cpp:function:: template <class Agent> \
                  void send_message(Agent&& agent, send_message_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send text messages. On success, the sent Message is returned.

.. cpp:struct:: send_message_args_t

   Arguments that should be passed to :cpp:func:`send_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: string_t text

   Text of the message to be sent, 1-4096 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the message text. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<link_preview_options_t> link_preview_options

   Link preview generation options for the message

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
