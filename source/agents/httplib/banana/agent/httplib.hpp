#pragma once

#include <banana/utils/agent.hpp>

#include <httplib.h>

namespace httplib { class Client; }

namespace banana::agent {

class basic_httplib_monadic {
    std::string m_token;
    std::string m_api_path = "https://api.telegram.org";
    httplib::Client m_client;

public:
    explicit basic_httplib_monadic(std::string token);

    expected<std::string> do_request(std::string_view method, std::string body);
};

using basic_httplib = meta::unwrap_blocking<basic_httplib_monadic>;

using httplib_blocking_monadic = meta::make_blocking_monadic<basic_httplib_monadic>;
using httplib_blocking         = meta::make_blocking<basic_httplib>;
using httplib_async            = meta::wrap_async<httplib_blocking>;

} // namespace banana::agent
