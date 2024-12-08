<p align="center">
  <img src="https://img.shields.io/badge/License-MIT-blue.svg" alt="License: MIT">
  <a href="https://github.com/Smertig/banana/actions"><img src="https://github.com/Smertig/banana/workflows/Tagged%20Release/badge.svg" alt="GitHub Actions"></a>
  <a href="https://github.com/Smertig/banana/actions"><img src="https://github.com/Smertig/banana/workflows/Build%20On%20Push/badge.svg" alt="GitHub Actions"></a>
</p>

<p align="center">
  🍌 <b>banana</b> - thin wrapper over <a href="https://core.telegram.org/bots/api">Telegram Bot API</a> written in C++17.
</p>

## Key Features

 - Simple API
 - **Single interface for both blocking, non-blocking and even coroutine-based operations**
 - Generic in terms of networking backend (bundled support for [`WinAPI`](https://docs.microsoft.com/en-us/windows/win32/api/wininet/nf-wininet-httpsendrequesta), [`cpr`](https://github.com/whoshuu/cpr) and [`boost::beast`](https://github.com/boostorg/beast))
 - Extendable (see [custom-agent](https://github.com/Smertig/banana/blob/master/examples/custom-agent-blocking.cpp) example)
 - Automatically generated from [Telegram Bot API](https://core.telegram.org/bots/api) 7.4 (thanks [ark0f/tg-bot-api](https://github.com/ark0f/tg-bot-api))
 - Cross-platform (tested on Windows, Linux, macOS)

## Example

```c++
#include <banana/api.hpp>
#include <banana/agent/default.hpp>

int main(int argc, char** argv) {
    // create agent once
    banana::agent::default_blocking agent("<TG_BOT_TOKEN>");

    // use API
    banana::api::send_message(agent, { /* .chat_id = */ "@smertig", /* .text = */ "Hello, world!" });
}
```

## Documentation

[![Previous Release](https://img.shields.io/github/v/release/smertig/banana?label=Banana%20Docs&filter=v0.4.0)](https://smertig.github.io/banana/v0.4.0)

[![Latest Release](https://img.shields.io/github/v/release/smertig/banana?label=Banana%20Docs)](https://smertig.github.io/banana/v0.5.0)

[![Master](https://img.shields.io/badge/Banana%20Docs-master-blue.svg)](https://smertig.github.io/banana/master)

## Notes about breaking changes

**TL;DR: use designated initialization from C++20 and forget about breaking changes.**

Most of `banana` is automatically generated from the Telegram Bot API documentation.
The main problem here is that there's no guarantee for the order of function parameters and members of types. Let's have a look at the following example:

```cpp
struct send_message_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       text;    // Text of the message to be sent, 1-4096 characters after entities parsing
    // ...
};
```

There are several similar ways to call `send_message`:

```cpp
// #1 (simple)
banana::api::send_message(agent, { "@username", "Hello from banana!" });

// #2 (designated initialization, C++20)
banana::api::send_message(agent, { .chat_id = "@username", .text = "Hello from banana!" });

// #3 (verbose)
banana::api::send_message_args_t args;
args.chat_id = "@username";
args.text = "Hello from banana!";
banana::api::send_message(agent, std::move(args));
```

However, they differ in the way they are affected by breaking changes. Nothing prevents the Telegram API team from updating `send_message` parameters (and documentation) in the following way:

```cpp
struct send_message_args_t {
    variant_t<integer_t, string_t> chat_id;
    string_t                       some_new_fancy_param; // This param is used only for a new shiny feature
    string_t                       text;
    // ...
};
```

How does this change affect existing code?

```cpp
// #1 (simple) - silently breaks 💣, sometimes compilation error ❌ (in case of incompatible types)
banana::api::send_message(agent, { "@username", "Hello from banana!" });

// #2 (designated initialization, C++20) - fine 🍀
banana::api::send_message(agent, { .chat_id = "@username", .text = "Hello from banana!" });

// #3 (verbose) - fine 🍀
banana::api::send_message_args_t args;
args.chat_id = "@username";
args.text = "Hello from banana!";
```

That's why **it's highly preferable** to use C++20 designated initialization instead of a raw aggregate initialization.

There's also another case - when no new parameter is added, but existing parameters are swapped:

```cpp
struct send_message_args_t {
    string_t                       text;
    variant_t<integer_t, string_t> chat_id;
    // ...
};
```

This case is more tricky, because it can break designated initialization as well:

```cpp
// #1 (simple) - silently breaks 💣, sometimes compilation error ❌ (in case of incompatible types)
banana::api::send_message(agent, { "@username", "Hello from banana!" });

// #2 (designated initialization, C++20) - compilation error because of incorrect designators order ❌
banana::api::send_message(agent, { .chat_id = "@username", .text = "Hello from banana!" });

// #3 (verbose) - fine 🍀
banana::api::send_message_args_t args;
args.chat_id = "@username";
args.text = "Hello from banana!";
```

However, a compilation error is still much better than a silent change in logic, and also more readable than manual per-field initialization. That's why I recommend switching to C++20 and using designated initialization.

### Dev Guide

#### Updating to fresh API version

```bash
python load_api.py && python custom2json.py && python json2cpp.py && python json2rst.py
```