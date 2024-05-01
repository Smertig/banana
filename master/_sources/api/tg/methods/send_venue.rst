.. _banana-api-tg-methods-send_venue:

send_venue
==========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_venue(Agent&& agent, send_venue_args_t args)
.. cpp:function:: template <class Agent> \
                  void send_venue(Agent&& agent, send_venue_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send information about a venue. On success, the sent Message is returned.

.. cpp:struct:: send_venue_args_t

   Arguments that should be passed to :cpp:func:`send_venue`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: float_t latitude

   Latitude of the venue

   .. cpp:member:: float_t longitude

   Longitude of the venue

   .. cpp:member:: string_t title

   Name of the venue

   .. cpp:member:: string_t address

   Address of the venue

   .. cpp:member:: optional_t<string_t> foursquare_id

   Foursquare identifier of the venue

   .. cpp:member:: optional_t<string_t> foursquare_type

   Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)

   .. cpp:member:: optional_t<string_t> google_place_id

   Google Places identifier of the venue

   .. cpp:member:: optional_t<string_t> google_place_type

   Google Places type of the venue. (See supported types.)

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
