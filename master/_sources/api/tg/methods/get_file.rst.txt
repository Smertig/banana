.. _banana-api-tg-methods-get_file:

get_file
========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<file_t, Agent&&> get_file(Agent&& agent, get_file_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to get basic info about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.

.. cpp:struct:: get_file_args_t

   Arguments that should be passed to :cpp:func:`get_file`.


   .. cpp:member:: string_t file_id

   File identifier to get info about
