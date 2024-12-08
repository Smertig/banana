.. _banana-api-tg-methods-send_location:

send_location
=============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_location(Agent&& agent, send_location_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_location(Agent&& agent, send_location_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send point on the map. On success, the sent Message is returned.

.. cpp:struct:: send_location_args_t

   Arguments that should be passed to :cpp:func:`send_location`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: float_t latitude

   Latitude of the location

   .. cpp:member:: float_t longitude

   Longitude of the location

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: optional_t<float_t> horizontal_accuracy

   The radius of uncertainty for the location, measured in meters; 0-1500

   .. cpp:member:: optional_t<integer_t> live_period

   Period in seconds during which the location will be updated (see Live Locations, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.

   .. cpp:member:: optional_t<integer_t> heading

   For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.

   .. cpp:member:: optional_t<integer_t> proximity_alert_radius

   For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<boolean_t> allow_paid_broadcast

   Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance

   .. cpp:member:: optional_t<string_t> message_effect_id

   Unique identifier of the message effect to be added to the message; for private chats only

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user

   .. cpp:member:: optional_t<string_t> business_connection_id

   Unique identifier of the business connection on behalf of which the message will be sent
