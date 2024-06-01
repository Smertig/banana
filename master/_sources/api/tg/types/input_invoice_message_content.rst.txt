.. _banana-api-tg-types-input_invoice_message_content:

input_invoice_message_content_t
===============================

.. cpp:struct:: banana::api::input_invoice_message_content_t

   Represents the content of an invoice message to be sent as the result of an inline query.

   .. cpp:member:: string_t title

   Product name, 1-32 characters

   .. cpp:member:: string_t description

   Product description, 1-255 characters

   .. cpp:member:: string_t payload

   Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.

   .. cpp:member:: array_t<labeled_price_t> prices

   Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.

   .. cpp:member:: optional_t<string_t> provider_token

   Optional. Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.

   .. cpp:member:: optional_t<integer_t> max_tip_amount

   Optional. The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.

   .. cpp:member:: optional_t<array_t<integer_t>> suggested_tip_amounts

   Optional. A JSON-serialized array of suggested amounts of tip in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.

   .. cpp:member:: optional_t<string_t> provider_data

   Optional. A JSON-serialized object for data about the invoice, which will be shared with the payment provider. A detailed description of the required fields should be provided by the payment provider.

   .. cpp:member:: optional_t<string_t> photo_url

   Optional. URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.

   .. cpp:member:: optional_t<integer_t> photo_size

   Optional. Photo size in bytes

   .. cpp:member:: optional_t<integer_t> photo_width

   Optional. Photo width

   .. cpp:member:: optional_t<integer_t> photo_height

   Optional. Photo height

   .. cpp:member:: optional_t<boolean_t> need_name

   Optional. Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_phone_number

   Optional. Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_email

   Optional. Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> need_shipping_address

   Optional. Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> send_phone_number_to_provider

   Optional. Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> send_email_to_provider

   Optional. Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.

   .. cpp:member:: optional_t<boolean_t> is_flexible

   Optional. Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
