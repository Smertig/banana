.. _banana-api-banana-basic_types:

Banana Basic Types
==================

Basic types are the types that make up all the structures used in Telegram API including method arguments and their return values.

File
   ``#include <banana/utils/basic_types.hpp>``

.. cpp:type:: banana::boolean_t = bool

   Boolean type (`true` or `false`).

.. cpp:type:: banana::float_t = double

   Floating point type.

.. cpp:type:: banana::integer_t = std::int64_t

   Signed 64-bit integer type.

.. cpp:type:: banana::string_t = std::string

   Utf-8 string.

.. cpp:type:: template <class T> banana::optional_t<T> = banana::dynamic_optional<T>

   Type representing a value that may not exist.

.. cpp:type:: template <class T> banana::array_t<T> = std::vector<T>

   Type representing dynamically-sized array.

.. cpp:type:: template <class... Ts> banana::variant_t<Ts...> = std::variant<Ts...>

   Type representing the value of one of several possible types.
