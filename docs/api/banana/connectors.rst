.. _banana-api-banana-connectors:

Banana Connectors
=================

Connector is a key concept of the banana library.
To use any function from ``banana::api`` you need a connector object.
A type satisfies the concept ``connector`` if it has a method with the following signature:

.. code-block:: C++

   template <class Traits, class R = typename Traits::response_type>
   impl-defined-<R> request(std::optional<std::string> body);

The signature of this method defines the properties of the connector.
For example, this method can return the following types:

- Raw ``R`` is returned by blocking connector that throws an exception in case of error
- ``banana::expected<R>`` -- blocking connector that returns either result or an error
- ``std::future<R>`` -- non-blocking connector
- ``boost::asio::awaitable<R>`` -- coroutine-based connector that throws an exception in case of error
- ``boost::asio::awaitable<banana::expected<R>>`` -- coroutine-based connector that returns either value or error
- and so on..

The `banana` library provides several bundled connector types with different properties:

.. toctree::
   :name: api_banana_connector

   WinAPI-based connectors <connectors/winapi>
   cpr-based connectors <connectors/cpr>
   boost::beast-based connectors <connectors/beast>
