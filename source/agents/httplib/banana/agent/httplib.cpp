#include "httplib.hpp"

#include <httplib.h>

namespace banana::agent {

basic_httplib_monadic::basic_httplib_monadic(std::string token) : m_client(m_api_path), m_token(std::move(token)) {
}

expected<std::string> basic_httplib_monadic::do_request(std::string_view method, std::string body) {
    std::string url;
    url += "/bot";
    url += m_token;
    url += "/";
    url += method;

    auto response = m_client.Post(url, body, "application/json");
    if (!response) {
        return error_t<>{ to_string(response.error()) };
    }

    return expected(std::move(response.value().body));
}

} // namespace banana::agent



