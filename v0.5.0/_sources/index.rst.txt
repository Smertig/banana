Welcome to banana's documentation!
==================================

🍌 ``banana`` is a C++17 library designed to be small and minimalistic wrapper over `Telegram Bot API <https://core.telegram.org/bots/api>`_.

Key features
------------

- Simple API
- **Single interface for both blocking, non-blocking and even coroutine-based operations**
- Generic in terms of networking backend (bundled support for :ref:`WinAPI <banana-api-banana-agents-winapi>`, :ref:`cpr <banana-api-banana-agents-cpr>` and :ref:`boost::beast <banana-api-banana-agents-beast>`)
- Extendable (see `custom-agent example <https://github.com/Smertig/banana/blob/master/examples/custom-agent-blocking.cpp>`_)
- Automatically generated from `Telegram Bot API <https://core.telegram.org/bots/api>`_ 7.4 (thanks `ark0f/tg-bot-api <https://github.com/ark0f/tg-bot-api>`_)
- Cross-platform (tested in CI on Windows, Linux and macOS)

.. include:: utils/goal-note.rst

Content
=======

.. toctree::
   :maxdepth: 3

    User Guide <guide>
    API Reference <api>


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
