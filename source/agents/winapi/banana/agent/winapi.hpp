#pragma once

#include <banana/utils/agent.hpp>

namespace banana::agent {

class basic_winapi_monadic {
    std::string m_token;
    std::string m_api_path = "api.telegram.org";

public:
    explicit basic_winapi_monadic(std::string token);

    expected<std::string> do_request(std::string_view method, std::string body);
};

using basic_winapi = meta::unwrap_blocking<basic_winapi_monadic>;

using winapi_blocking_monadic = meta::make_blocking_monadic<basic_winapi_monadic>;
using winapi_blocking         = meta::make_blocking<basic_winapi>;
using winapi_async            = meta::wrap_async<winapi_blocking>;

} // namespace banana::agent
