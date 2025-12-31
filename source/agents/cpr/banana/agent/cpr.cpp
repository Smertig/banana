#include "cpr.hpp"

#include <cpr/cpr.h>

namespace cpr {

std::ostream& operator<<(std::ostream& os, ErrorCode code) {
    switch (code) {
        case ErrorCode::OK: return os << "OK";
        default: return os << "ErrorCode(" << static_cast<std::underlying_type_t<cpr::ErrorCode>>(code) << ")";
    }
}

} // namespace cpr

namespace banana::agent {

basic_cpr_monadic::basic_cpr_monadic(std::string token) : m_token(std::move(token)) {
    // nothing
}

expected<std::string> basic_cpr_monadic::do_request(std::string_view method, std::string body) {
    cpr::Session session;

    std::string url;
    url += m_api_path;
    url += "/bot";
    url += m_token;
    url += "/";
    url += method;

    session.SetUrl(std::move(url));

    if (!body.empty()) {
        session.SetBody(cpr::Body{ std::move(body) });
        session.SetHeader({
            { "Content-Type", "application/json" }
        });
    }

    if (m_proxy) {
        auto& proxy = *m_proxy;
        if (!proxy.cred.empty()) {
            session.SetProxies({{ "https", proxy.url + ":" + proxy.cred }});
        }
        else {
            session.SetProxies({{ "https", proxy.url }});
        }
    }

    auto r = session.Post();
    if (r.error) {
        std::ostringstream os;
        os << "network error " << r.error.code << " (" << r.error.message << ")";
        return error_t<>{ std::move(os).str() };
    }

    return expected(r.text);
}

} // namespace banana::agent
