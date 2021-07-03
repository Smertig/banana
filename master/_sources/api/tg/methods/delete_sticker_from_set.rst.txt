.. _banana-api-tg-methods-delete_sticker_from_set:

delete_sticker_from_set
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> delete_sticker_from_set(Connector&& connector, delete_sticker_from_set_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to delete a sticker from a set created by the bot. Returns True on success.

.. cpp:struct:: delete_sticker_from_set_args_t

   Arguments that should be passed to :cpp:func:`delete_sticker_from_set`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker
