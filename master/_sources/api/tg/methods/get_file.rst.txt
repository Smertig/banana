.. _banana-api-tg-methods-get_file:

get_file
========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<file_t, Connector&&> get_file(Connector&& connector, get_file_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get basic info about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.

.. cpp:struct:: get_file_args_t

   Arguments that should be passed to :cpp:func:`get_file`.


   .. cpp:member:: string_t file_id

   File identifier to get info about
