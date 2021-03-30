.. _banana-api-tg-methods-set_sticker_position_in_set:

set_sticker_position_in_set
===========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> set_sticker_position_in_set(Connector&& connector, set_sticker_position_in_set_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, set_sticker_position_in_set_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.

.. cpp:struct:: set_sticker_position_in_set_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_position_in_set`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker

   .. cpp:member:: integer_t position

   New sticker position in the set, zero-based
