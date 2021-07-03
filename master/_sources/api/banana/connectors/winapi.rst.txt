.. _banana-api-banana-connectors-winapi:

WinAPI-based connectors
=======================

  Available connectors

  blocking
     :cpp:class:`winapi_blocking`, :cpp:class:`winapi_blocking_monadic`
  async
     :cpp:class:`winapi_async`
  coroutine
     ❌

Connector implemented on top of WinAPI functions. Link with ``banana-winapi`` to use it.

CMake Target
  ``banana-winapi``
Include
  ``#include <banana/connector/winapi.hpp>``
Supported platforms
  Windows
Dependencies
  ❌

.. cpp:namespace: banana::connector
.. cpp:class:: winapi_blocking

   WinAPI-based blocking connector with exception-based error handling.

   .. cpp:function:: winapi_blocking::winapi_blocking(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     R request(std::optional<std::string> body)

      Part of the required connector interface.

Example
   .. code-block:: C++

      #include <banana/connector/winapi.hpp>

      banana::connector::winapi_blocking connector("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(connector, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::connector
.. cpp:class:: winapi_blocking_monadic

   WinAPI-based blocking connector with monadic error handling.

   .. cpp:function:: winapi_blocking_monadic::winapi_blocking_monadic(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     expected<R> request(std::optional<std::string> body)

      Part of the required connector interface.

Example
  .. code-block:: C++

     #include <banana/connector/winapi.hpp>

     banana::connector::winapi_blocking_monadic connector("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(connector, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::connector
.. cpp:class:: winapi_async

   WinAPI-based non-blocking connector that wraps all requests in `std::async`.

   .. cpp:function:: winapi_async::winapi_async(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<R> request(std::optional<std::string> body)

      Part of the required connector interface.

Example
   .. code-block:: C++

      #include <banana/connector/winapi.hpp>

      banana::connector::winapi_async connector("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(connector, { "@user", "Hello, world!" });
