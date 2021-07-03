.. _banana-api-tg-methods-leave_chat:

leave_chat
==========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> leave_chat(Connector&& connector, leave_chat_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method for your bot to leave a group, supergroup or channel. Returns True on success.

.. cpp:struct:: leave_chat_args_t

   Arguments that should be passed to :cpp:func:`leave_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
