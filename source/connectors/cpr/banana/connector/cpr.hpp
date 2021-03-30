#pragma once

#include <banana/utils/connector.hpp>

namespace banana::connector {

// TODO: proxy support
class basic_cpr {
    struct proxy_t {
        std::string url;  // IP:port
        std::string cred; // log:pass
    };

    std::string m_token;
    std::string m_api_path = "https://api.telegram.org";
    std::optional<proxy_t> m_proxy;

public:
    explicit basic_cpr(std::string token);

    expected<std::string> do_request(std::string_view method, std::optional<std::string> body);
};

using cpr_blocking_monadic = make_blocking<basic_cpr>;
using cpr_blocking = make_throwing<cpr_blocking_monadic>;
using cpr_async = make_async<basic_cpr>;

} // namespace banana::connector
