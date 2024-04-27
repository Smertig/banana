.. _banana-api-tg-methods-create_invoice_link:

create_invoice_link
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<string_t, Agent&&> create_invoice_link(Agent&& agent, create_invoice_link_args_t args)
.. cpp:function:: template <class Agent> \
                  void create_invoice_link(Agent&& agent, create_invoice_link_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<string_t>``.

   Use this method to create a link for an invoice. Returns the created invoice link as String on success.

.. cpp:struct:: create_invoice_link_args_t

   Arguments that should be passed to :cpp:func:`create_invoice_link`.


   .. cpp:member:: string_t title

   Product name, 1-32 characters

   .. cpp:member:: string_t description

   Product description, 1-255 characters

   .. cpp:member:: string_t payload

   Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.

   .. cpp:member:: string_t provider_token

   Payment provider token, obtained via BotFather

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code, see more on currencies

   .. cpp:member:: array_t<labeled_price_t> prices

   Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.)

   .. cpp:member:: optional_t<integer_t> max_tip_amount

   The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0

   .. cpp:member:: optional_t<array_t<integer_t>> suggested_tip_amounts

   A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.

   .. cpp:member:: optional_t<string_t> provider_data

   JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.

   .. cpp:member:: optional_t<string_t> photo_url

   URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.

   .. cpp:member:: optional_t<integer_t> photo_size

   Photo size in bytes

   .. cpp:member:: optional_t<integer_t> photo_width

   Photo width

   .. cpp:member:: optional_t<integer_t> photo_height

   Photo height

   .. cpp:member:: optional_t<boolean_t> need_name

   Pass True if you require the user's full name to complete the order

   .. cpp:member:: optional_t<boolean_t> need_phone_number

   Pass True if you require the user's phone number to complete the order

   .. cpp:member:: optional_t<boolean_t> need_email

   Pass True if you require the user's email address to complete the order

   .. cpp:member:: optional_t<boolean_t> need_shipping_address

   Pass True if you require the user's shipping address to complete the order

   .. cpp:member:: optional_t<boolean_t> send_phone_number_to_provider

   Pass True if the user's phone number should be sent to the provider

   .. cpp:member:: optional_t<boolean_t> send_email_to_provider

   Pass True if the user's email address should be sent to the provider

   .. cpp:member:: optional_t<boolean_t> is_flexible

   Pass True if the final price depends on the shipping method
