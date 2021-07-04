.. _banana-api-tg-methods-get_updates:

get_updates
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<update_t>, Agent&&> get_updates(Agent&& agent, get_updates_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to receive incoming updates using long polling (wiki). An Array of Update objects is returned.

.. cpp:struct:: get_updates_args_t

   Arguments that should be passed to :cpp:func:`get_updates`.


   .. cpp:member:: optional_t<integer_t> offset

   Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will forgotten.

   .. cpp:member:: optional_t<integer_t> limit

   Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.

   .. cpp:member:: optional_t<integer_t> timeout

   Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.

   .. cpp:member:: optional_t<array_t<string_t>> allowed_updates

   A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to the getUpdates, so unwanted updates may be received for a short period of time.
