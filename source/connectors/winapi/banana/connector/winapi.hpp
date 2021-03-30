#pragma once

#include <banana/utils/connector.hpp>

namespace banana::connector {

class basic_winapi {
    std::string m_token;
    std::string m_api_path = "api.telegram.org";

public:
    explicit basic_winapi(std::string token);

    expected<std::string> do_request(std::string_view method, std::optional<std::string> body);
};

using winapi_blocking_monadic = make_blocking<basic_winapi>;
using winapi_blocking = make_throwing<winapi_blocking_monadic>;
using winapi_async = make_async<basic_winapi>;

} // namespace banana::connector
