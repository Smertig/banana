.. _banana-api-banana-agents-winapi:

WinAPI-based agents
===================

  Available agents

  blocking
     :cpp:class:`winapi_blocking`, :cpp:class:`winapi_blocking_monadic`
  async
     :cpp:class:`winapi_async`
  coroutine
     ❌

Agent implemented on top of WinAPI functions. Link with ``banana-winapi`` to use it.

CMake Target
  ``banana-winapi``
Include
  ``#include <banana/agent/winapi.hpp>``
Supported platforms
  Windows
Dependencies
  ❌

.. cpp:namespace: banana::agent
.. cpp:class:: winapi_blocking

   WinAPI-based blocking agent with exception-based error handling.

   .. cpp:function:: winapi_blocking::winapi_blocking(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     R request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/winapi.hpp>

      banana::agent::winapi_blocking agent("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: winapi_blocking_monadic

   WinAPI-based blocking agent with monadic error handling.

   .. cpp:function:: winapi_blocking_monadic::winapi_blocking_monadic(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     expected<R> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/winapi.hpp>

     banana::agent::winapi_blocking_monadic agent("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: winapi_async

   WinAPI-based non-blocking agent that wraps all requests in `std::async`.

   .. cpp:function:: winapi_async::winapi_async(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<R> request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/winapi.hpp>

      banana::agent::winapi_async agent("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });
