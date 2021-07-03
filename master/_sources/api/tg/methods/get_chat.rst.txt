.. _banana-api-tg-methods-get_chat:

get_chat
========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<chat_t, Connector&&> get_chat(Connector&& connector, get_chat_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get up to date information about the chat (current name of the user for one-on-one conversations, current username of a user, group or channel, etc.). Returns a Chat object on success.

.. cpp:struct:: get_chat_args_t

   Arguments that should be passed to :cpp:func:`get_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
