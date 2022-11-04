.. _banana-api-tg-methods-edit_message_live_location:

edit_message_live_location
==========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<variant_t<message_t, boolean_t>, Agent&&> edit_message_live_location(Agent&& agent, edit_message_live_location_args_t args)
.. cpp:function:: template <class Agent> \
                  void edit_message_live_location(Agent&& agent, edit_message_live_location_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<variant_t<message_t, boolean_t>>``.

   Use this method to edit live location messages. A location can be edited until its live_period expires or editing is explicitly disabled by a call to stopMessageLiveLocation. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.

.. cpp:struct:: edit_message_live_location_args_t

   Arguments that should be passed to :cpp:func:`edit_message_live_location`.


   .. cpp:member:: optional_t<variant_t<integer_t, string_t>> chat_id

   Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_id

   Required if inline_message_id is not specified. Identifier of the message to edit

   .. cpp:member:: optional_t<string_t> inline_message_id

   Required if chat_id and message_id are not specified. Identifier of the inline message

   .. cpp:member:: float_t latitude

   Latitude of new location

   .. cpp:member:: float_t longitude

   Longitude of new location

   .. cpp:member:: optional_t<float_t> horizontal_accuracy

   The radius of uncertainty for the location, measured in meters; 0-1500

   .. cpp:member:: optional_t<integer_t> heading

   Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.

   .. cpp:member:: optional_t<integer_t> proximity_alert_radius

   Maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for a new inline keyboard.
