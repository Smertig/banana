.. _banana-api-banana-agents:

Banana Agents
=============

Agent is a key concept of the banana library.
To use any function from ``banana::api`` you need a agent object.
A type satisfies the concept ``agent`` if it has a method with the following signature:

.. code-block:: C++

   template <class Traits, class R = typename Traits::response_type>
   impl-defined-<R> request(std::string body);

The signature of this method defines the properties of the agent.
For example, this method can return the following types:

- Raw ``R`` is returned by blocking agent that throws an exception in case of error
- ``banana::expected<R>`` -- blocking agent that returns either result or an error
- ``std::future<R>`` -- non-blocking agent
- ``boost::asio::awaitable<R>`` -- coroutine-based agent that throws an exception in case of error
- ``boost::asio::awaitable<banana::expected<R>>`` -- coroutine-based agent that returns either value or error
- ``void`` -- non-blocking agent that calls functional object with ``banana::expected<R>`` as an argument
- and so on..

The `banana` library provides several bundled agent types with different properties:

.. toctree::
   :name: api_banana_agent

   WinAPI-based agents <agents/winapi>
   cpr-based agents <agents/cpr>
   boost::beast-based agents <agents/beast>
