.. _banana-guide-quick:

Quick Start
####################

.. include:: ../utils/goal-note.rst

There is still only one way to add ``banana`` to your project -- as a CMake subdirectory.

Adding as a CMake subdirectory
==============================

First of all you need to add ``banana`` as a subdirectory to your CMakeLists:

.. code-block:: cmake

   # Assuming banana is cloned to project-dir/external/banana
   add_subdirectory(external/banana)

That's it. Now you can link ``banana`` target to your app:

.. code-block:: cmake

   target_link_libraries(your-project-name PRIVATE banana)

.. code-block:: c++

   #include <banana/types.hpp> // Telegram API types
   #include <banana/api.hpp> // Telegram API methods
   // etc..

However, you also need an :ref:`agent <banana-api-banana-agents>` to make API requests.

Choosing an agent
====================

Let's start with the simplest blocking agent.

Windows
-------

:ref:`WinAPI-agent <banana-api-banana-agents-winapi>` is the only dependency-free agent. It's built on top of WinAPI, so it doesn't require any additional libraries to make https requests.

.. code-block:: cmake

   target_link_libraries(your-project-name PRIVATE banana-winapi) # banana-winapi includes banana

.. code-block:: c++

   #include <banana/agent/winapi.hpp>

   banana::agent::winapi_blocking agent("<TG_BOT_TOKEN>");

Linux/macOS
-----------

:ref:`cpr-based agent <banana-api-banana-agents-cpr>` is the best choice for non-windows OS. It depends on `cpr <https://github.com/whoshuu/cpr>`_, **which in turn requires OpenSSL**.

.. code-block:: cmake

   target_link_libraries(your-project-name PRIVATE banana-cpr) # banana-cpr includes banana

You also should do any of:

- Manually add and link ``cpr`` library to your project
- Pass ``-DBANANA_USE_BUNDLED_CPR=ON`` to CMake (automatically download cpr using ``FetchContent`` and link it to ``banana-cpr``)

.. code-block:: c++

   #include <banana/agent/cpr.hpp>

   banana::agent::cpr_blocking agent("<TG_BOT_TOKEN>");

"Default" agent
-------------------

To choose agent in a truly cross-platform way, you can use default agent (if you don't want to link OpenSSL for :ref:`cpr <banana-api-banana-agents-cpr>` on Windows and hate :ref:`boost-based agent <banana-api-banana-agents-beast>`).
There is an additional CMake target ``banana-default`` that provides header ``#include <banana/agent/default.hpp>`` and ``default_blocking_monadic`` and ``default_blocking`` agents:

On Windows:
   - ``using default_blocking = winapi_blocking;``
   - ``using default_blocking_monadic = winapi_blocking_monadic;``
   - CMake target: ``banana-default = banana-winapi``

Otherwise:
   - ``using default_blocking = cpr_blocking;``
   - ``using default_blocking_monadic = cpr_blocking_monadic;``
   - CMake target: ``banana-default = banana-cpr``

Hello, world!
=============

The following piece of code shows how to send simple ``"Hello, world!"`` message. We use "default" agent as an example.

.. code-block:: c++

   #include <banana/agent/default.hpp>
   #include <banana/api.hpp>

   #include <iostream>

   int main() {
       // create agent
       banana::agent::default_blocking agent("<TG_BOT_TOKEN>");

       // use API
       banana::api::message_t message = banana::api::send_message(agent, { /* .chat_id = */ "@username", /* .text = */ "Hello, world!" });

       std::cout << "message sent: " << message.message_id;
   }

Line-by-line explanation
------------------------

.. code-block:: c++

   banana::agent::default_blocking agent("<TG_BOT_TOKEN>");

Create ``default_blocking`` agent that returns ``T`` from any API request or throws an exception in case of error. If you don't like exceptions, try ``default_blocking_monadic`` instead.

.. code-block:: c++

   banana::api::message_t message = banana::api::send_message(agent, { /* .chat_id = */ "@username", /* .text = */ "Hello, world!" });

Make blocking request and get the result (see :cpp:func:`banana::api::send_message` for details)

.. code-block:: c++

   std::cout << "message sent: " << message.message_id;

Print message id. That's all ✨
