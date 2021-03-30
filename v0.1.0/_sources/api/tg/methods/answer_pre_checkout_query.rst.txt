.. _banana-api-tg-methods-answer_pre_checkout_query:

answer_pre_checkout_query
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> answer_pre_checkout_query(Connector&& connector, answer_pre_checkout_query_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, answer_pre_checkout_query_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Once the user has confirmed their payment and shipping details, the Bot API sends the final confirmation in the form of an Update with the field pre_checkout_query. Use this method to respond to such pre-checkout queries. On success, True is returned. Note: The Bot API must receive an answer within 10 seconds after the pre-checkout query was sent.

.. cpp:struct:: answer_pre_checkout_query_args_t

   Arguments that should be passed to :cpp:func:`answer_pre_checkout_query`.


   .. cpp:member:: string_t pre_checkout_query_id

   Unique identifier for the query to be answered

   .. cpp:member:: boolean_t ok

   Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.

   .. cpp:member:: optional_t<string_t> error_message

   Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
