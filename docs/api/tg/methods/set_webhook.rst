.. _banana-api-tg-methods-set_webhook:

set_webhook
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_webhook(Agent&& agent, set_webhook_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_webhook(Agent&& agent, set_webhook_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to specify a URL and receive incoming updates via an outgoing webhook. Whenever there is an update for the bot, we will send an HTTPS POST request to the specified URL, containing a JSON-serialized Update. In case of an unsuccessful request (a request with response HTTP status code different from 2XY), we will repeat the request and give up after a reasonable amount of attempts. Returns True on success. If you'd like to make sure that the webhook was set by you, you can specify secret data in the parameter secret_token. If specified, the request will contain a header “X-Telegram-Bot-Api-Secret-Token” with the secret token as content.

.. cpp:struct:: set_webhook_args_t

   Arguments that should be passed to :cpp:func:`set_webhook`.


   .. cpp:member:: string_t url

   HTTPS URL to send updates to. Use an empty string to remove webhook integration

   .. cpp:member:: optional_t<input_file_t> certificate

   Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.

   .. cpp:member:: optional_t<string_t> ip_address

   The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS

   .. cpp:member:: optional_t<integer_t> max_connections

   The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.

   .. cpp:member:: optional_t<array_t<string_t>> allowed_updates

   A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.

   .. cpp:member:: optional_t<boolean_t> drop_pending_updates

   Pass True to drop all pending updates

   .. cpp:member:: optional_t<string_t> secret_token

   A secret token to be sent in a header “X-Telegram-Bot-Api-Secret-Token” in every webhook request, 1-256 characters. Only characters A-Z, a-z, 0-9, _ and - are allowed. The header is useful to ensure that the request comes from a webhook set by you.
