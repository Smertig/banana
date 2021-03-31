#pragma once

#ifdef WIN32
    #include <banana/connector/winapi.hpp>
    namespace banana::connector {
        using default_blocking_monadic = winapi_blocking_monadic;
        using default_blocking         = winapi_blocking;
        using default_async            = winapi_async;
    } // namespace banana::connector
#else
    #include <banana/connector/cpr.hpp>
    namespace banana::connector {
        using default_blocking_monadic = cpr_blocking_monadic;
        using default_blocking         = cpr_blocking;
        using default_async            = cpr_async;
    } // namespace banana::connector
#endif
