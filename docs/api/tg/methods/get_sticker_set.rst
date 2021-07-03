.. _banana-api-tg-methods-get_sticker_set:

get_sticker_set
===============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<sticker_set_t, Connector&&> get_sticker_set(Connector&& connector, get_sticker_set_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get a sticker set. On success, a StickerSet object is returned.

.. cpp:struct:: get_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`get_sticker_set`.


   .. cpp:member:: string_t name

   Name of the sticker set
