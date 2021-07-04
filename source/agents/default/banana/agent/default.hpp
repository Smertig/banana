#pragma once

#ifdef WIN32
    #include <banana/agent/winapi.hpp>
    namespace banana::agent {
        using default_blocking_monadic = winapi_blocking_monadic;
        using default_blocking         = winapi_blocking;
        using default_async            = winapi_async;
    } // namespace banana::agent
#else
    #include <banana/agent/cpr.hpp>
    namespace banana::agent {
        using default_blocking_monadic = cpr_blocking_monadic;
        using default_blocking         = cpr_blocking;
        using default_async            = cpr_async;
    } // namespace banana::agent
#endif
