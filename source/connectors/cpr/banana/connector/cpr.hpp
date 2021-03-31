#pragma once

#include <banana/utils/connector.hpp>

namespace banana::connector {

// TODO: proxy support
class basic_cpr_monadic {
    struct proxy_t {
        std::string url;  // IP:port
        std::string cred; // log:pass
    };

    std::string m_token;
    std::string m_api_path = "https://api.telegram.org";
    std::optional<proxy_t> m_proxy;

public:
    explicit basic_cpr_monadic(std::string token);

    expected<std::string> do_request(std::string_view method, std::optional<std::string> body);
};

using basic_cpr = meta::unwrap_blocking<basic_cpr_monadic>;

using cpr_blocking_monadic = meta::make_blocking_monadic<basic_cpr_monadic>;
using cpr_blocking         = meta::make_blocking<basic_cpr>;
using cpr_async            = meta::wrap_async<cpr_blocking>;

} // namespace banana::connector
