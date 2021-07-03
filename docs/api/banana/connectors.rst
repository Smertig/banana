.. _banana-api-banana-connectors:

Banana Connectors
=================

Connector is a key concept of the banana library.
To use any function from ``banana::api`` you need a connector object.
A type satisfies the concept ``connector`` if it has a method with the following signature:

.. code-block:: C++

   template <class T>
   impl-defined-<T> request(std::string_view method, std::optional<std::string> body, banana::response_handler<T> handler);

The signature of this method defines the properties of the connector.
For example, this method can return the following types:

- Raw ``T`` is returned by blocking connector that throws an exception in case of error
- ``banana::expected<T>`` -- blocking connector that returns either result or an error
- ``std::future<T>`` -- non-blocking connector
- ``boost::asio::awaitable<T>`` -- coroutine-based connector that throws an exception in case of error
- ``boost::asio::awaitable<banana::expected<T>>`` -- coroutine-based connector that returns either value or error
- and so on..

The `banana` library provides several bundled connector types with different properties:

.. toctree::
   :name: api_banana_connector

   WinAPI-based connectors <connectors/winapi>
   cpr-based connectors <connectors/cpr>
   boost::beast-based connectors <connectors/beast>
