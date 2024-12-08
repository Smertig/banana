.. _banana-api-tg-methods-send_invoice:

send_invoice
============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_invoice(Agent&& agent, send_invoice_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_invoice(Agent&& agent, send_invoice_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send invoices. On success, the sent Message is returned.

.. cpp:struct:: send_invoice_args_t

   Arguments that should be passed to :cpp:func:`send_invoice`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t title

   Product name, 1-32 characters

   .. cpp:member:: string_t description

   Product description, 1-255 characters

   .. cpp:member:: string_t payload

   Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.

   .. cpp:member:: array_t<labeled_price_t> prices

   Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: optional_t<string_t> provider_token

   Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.

   .. cpp:member:: optional_t<integer_t> max_tip_amount

   The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.

   .. cpp:member:: optional_t<array_t<integer_t>> suggested_tip_amounts

   A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.

   .. cpp:member:: optional_t<string_t> start_parameter

   Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter

   .. cpp:member:: optional_t<string_t> provider_data

   JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.

   .. cpp:member:: optional_t<string_t> photo_url

   URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.

   .. cpp:member:: optional_t<integer_t> photo_size

   Photo size in bytes

   .. cpp:member:: optional_t<integer_t> photo_width

   Photo width

   .. cpp:member:: optional_t<integer_t> photo_height

   Photo height

   .. cpp:member:: optional_t<boolean_t> need_name

   Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_phone_number

   Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_email

   Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_shipping_address

   Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> send_phone_number_to_provider

   Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> send_email_to_provider

   Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> is_flexible

   Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.

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

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
