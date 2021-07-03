.. _banana-api-banana-connectors-cpr:

cpr-based connectors
====================

  Available connectors

  blocking
     :cpp:class:`cpr_blocking`, :cpp:class:`cpr_blocking_monadic`
  async
     :cpp:class:`cpr_async`
  coroutine
     ❌

Connector implemented on top of `cpr <https://github.com/whoshuu/cpr>`_ library. Link with ``banana-cpr`` to use it.

You can also pass ``BANANA_USE_BUNDLED_CPR=ON`` CMake flag to use bundled cpr library (CMake will automatically download and link it to ``banana-cpr`` target).
However, it requires OpenSSL installed on your machine.

CMake Target
  ``banana-cpr``
Include
  ``#include <banana/connector/cpr.hpp>``
Supported platforms
  Windows, Linux, macOS
Dependencies
  `cpr <https://github.com/whoshuu/cpr>`_, OpenSSL

.. cpp:namespace: banana::connector
.. cpp:class:: cpr_blocking

   cpr-based blocking connector with exception-based error handling.

   .. cpp:function:: cpr_blocking::cpr_blocking(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class T> \
                     T request(std::string_view method, std::optional<std::string> body, response_handler<T> handler)

      Part of the required connector interface.

Example
   .. code-block:: C++

      #include <banana/connector/cpr.hpp>

      banana::connector::cpr_blocking connector("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(connector, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::connector
.. cpp:class:: cpr_blocking_monadic

   cpr-based blocking connector with monadic error handling.

   .. cpp:function:: cpr_blocking_monadic::cpr_blocking_monadic(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class T> \
                     expected<T> request(std::string_view method, std::optional<std::string> body, response_handler<T> handler)

      Part of the required connector interface.

Example
  .. code-block:: C++

     #include <banana/connector/cpr.hpp>

     banana::connector::cpr_blocking_monadic connector("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(connector, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::connector
.. cpp:class:: cpr_async

   cpr-based non-blocking connector that wraps all requests in `std::async`.

   .. cpp:function:: cpr_async::cpr_async(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class T> \
                     std::future<T> request(std::string_view method, std::optional<std::string> body, response_handler<T> handler)

      Part of the required connector interface.

Example
   .. code-block:: C++

      #include <banana/connector/cpr.hpp>

      banana::connector::cpr_async connector("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(connector, { "@user", "Hello, world!" });
