.. _banana-api-banana-agents-cpr:

cpr-based agents
================

  Available agents

  blocking
     :cpp:class:`cpr_blocking`, :cpp:class:`cpr_blocking_monadic`
  async
     :cpp:class:`cpr_async`
  coroutine
     ❌

Agent implemented on top of `cpr <https://github.com/whoshuu/cpr>`_ library. Link with ``banana-cpr`` to use it.

You can also pass ``BANANA_USE_BUNDLED_CPR=ON`` CMake flag to use bundled cpr library (CMake will automatically download and link it to ``banana-cpr`` target).
However, it requires OpenSSL installed on your machine.

CMake Target
  ``banana-cpr``
Include
  ``#include <banana/agent/cpr.hpp>``
Supported platforms
  Windows, Linux, macOS
Dependencies
  `cpr <https://github.com/whoshuu/cpr>`_, OpenSSL

.. cpp:namespace: banana::agent
.. cpp:class:: cpr_blocking

   cpr-based blocking agent with exception-based error handling.

   .. cpp:function:: cpr_blocking::cpr_blocking(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     R request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/cpr.hpp>

      banana::agent::cpr_blocking agent("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: cpr_blocking_monadic

   cpr-based blocking agent with monadic error handling.

   .. cpp:function:: cpr_blocking_monadic::cpr_blocking_monadic(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     expected<R> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/cpr.hpp>

     banana::agent::cpr_blocking_monadic agent("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: cpr_async

   cpr-based non-blocking agent that wraps all requests in `std::async`.

   .. cpp:function:: cpr_async::cpr_async(std::string token)

      Default constructor accepting Telegram Bot token.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<R> request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/cpr.hpp>

      banana::agent::cpr_async agent("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });
