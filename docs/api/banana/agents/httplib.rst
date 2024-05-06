.. _banana-api-banana-agents-httplib:

cpp-httplib-based agents
================

  Available agents

  blocking
     :cpp:class:`httplib_blocking`, :cpp:class:`httplib_blocking_monadic`
  async
     :cpp:class:`httplib_async`
  coroutine
     ❌

Agent implemented on top of `cpp-httplib <https://github.com/yhirose/cpp-httplib>`_ library. Link with ``banana-httplib`` to use it.

.. note::
  Please note that you should define ``CPPHTTPLIB_OPENSSL_SUPPORT`` and link with OpenSSL to enable `https:` support.

CMake Target
  ``banana-httplib``
Include
  ``#include <banana/agent/httplib.hpp>``
Supported platforms
  Windows, Linux, macOS
Dependencies
  `cpp-httplib <https://github.com/yhirose/cpp-httplib>`_, OpenSSL

.. cpp:namespace: banana::agent
.. cpp:class:: httplib_blocking

   `cpp-httplib <https://github.com/yhirose/cpp-httplib>`_-based blocking agent with exception-based error handling.

   .. cpp:function:: httplib_blocking::httplib_blocking(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     R request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/httplib.hpp>

      banana::agent::httplib_blocking agent("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: httplib_blocking_monadic

   `cpp-httplib <https://github.com/yhirose/cpp-httplib>`_-based blocking agent with monadic error handling.

   .. cpp:function:: httplib_blocking_monadic::httplib_blocking_monadic(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     expected<R> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/httplib.hpp>

     banana::agent::httplib_blocking_monadic agent("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: httplib_async

   `cpp-httplib <https://github.com/yhirose/cpp-httplib>`_-based non-blocking agent that wraps all requests in `std::async`.

   .. cpp:function:: httplib_async::httplib_async(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<R> request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/httplib.hpp>

      banana::agent::httplib_async agent("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });
