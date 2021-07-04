.. _banana-api-banana-agents-beast:

beast-based agents
==================

  Available agents

  blocking
     :cpp:class:`beast_blocking`, :cpp:class:`beast_blocking_monadic`
  async
     :cpp:class:`beast_future`, :cpp:class:`beast_future_monadic`
  coroutine
     :cpp:class:`beast_coro`, :cpp:class:`beast_coro_monadic`

Agent implemented on top of `boost::beast <https://github.com/boostorg/beast>`_ library. Link with ``banana-beast`` to use it.

CMake Target
  ``banana-beast``
Include
  ``#include <banana/agent/beast.hpp>``
Supported platforms
  Windows, Linux, macOS
Dependencies
  `boost::beast <https://github.com/boostorg/beast>`_

.. cpp:namespace: banana::agent
.. cpp:class:: beast_blocking

   boost::beast-based blocking agent with exception-based error handling.

   .. cpp:function:: beast_blocking::beast_blocking(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     R request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/beast.hpp>

      banana::agent::beast_blocking agent("TG_BOT_TOKEN");
      banana::api::message_t msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: beast_blocking_monadic

   boost::beast-based blocking agent with monadic error handling.

   .. cpp:function:: beast_blocking_monadic::beast_blocking_monadic(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     expected<R> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/beast.hpp>

     banana::agent::beast_blocking_monadic agent("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: beast_future

   boost::beast-based non-blocking agent with exception-based error handling.

   .. cpp:function:: beast_future::beast_future(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<R> request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/beast.hpp>

      banana::agent::beast_future agent("TG_BOT_TOKEN");
      std::future<banana::api::message_t> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: beast_future_monadic

   boost::beast-based non-blocking agent with monadic error handling.

   .. cpp:function:: beast_future_monadic::beast_future_monadic(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     std::future<expected<R>> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/beast.hpp>

     banana::agent::beast_future_monadic agent("TG_BOT_TOKEN");
     std::future<banana::expected<banana::api::message_t>> msg = banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: beast_coro

   boost::beast-based blocking agent with exception-based error handling. Available since C++20 if ``BOOST_ASIO_HAS_CO_AWAIT`` is defined by ``boost::asio``.

   .. cpp:function:: beast_coro::beast_coro(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     boost::asio::awaitable<R> request(std::string body)

      Part of the required agent interface.

Example
   .. code-block:: C++

      #include <banana/agent/beast.hpp>

      banana::agent::beast_coro agent("TG_BOT_TOKEN");
      banana::api::message_t msg = co_await banana::api::send_message(agent, { "@user", "Hello, world!" });

----------------------

.. cpp:namespace: banana::agent
.. cpp:class:: beast_coro_monadic

   boost::beast-based coroutine-based agent with monadic error handling. Available since C++20 if ``BOOST_ASIO_HAS_CO_AWAIT`` is defined by ``boost::asio``.

   .. cpp:function:: beast_coro_monadic::beast_coro_monadic(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context)

      Default constructor accepting Telegram Bot token, I/O and ssl context.

   .. cpp:function:: template <class Traits, class R = typename Traits::response_type> \
                     boost::asio::awaitable<expected<R>> request(std::string body)

      Part of the required agent interface.

Example
  .. code-block:: C++

     #include <banana/agent/beast.hpp>

     banana::agent::beast_coro_monadic agent("TG_BOT_TOKEN");
     banana::expected<banana::api::message_t> msg = co_await banana::api::send_message(agent, { "@user", "Hello, world!" });
