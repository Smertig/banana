#include "cpr.hpp"

#include <cpr/cpr.h>

namespace cpr {

std::ostream& operator<<(std::ostream& os, ErrorCode code) {
    switch (code) {
        case ErrorCode::OK: return os << "OK";
        case ErrorCode::CONNECTION_FAILURE: return os << "CONNECTION_FAILURE";
        case ErrorCode::EMPTY_RESPONSE: return os << "EMPTY_RESPONSE";
        case ErrorCode::HOST_RESOLUTION_FAILURE: return os << "HOST_RESOLUTION_FAILURE";
        case ErrorCode::INTERNAL_ERROR: return os << "INTERNAL_ERROR";
        case ErrorCode::INVALID_URL_FORMAT: return os << "INVALID_URL_FORMAT";
        case ErrorCode::NETWORK_RECEIVE_ERROR: return os << "NETWORK_RECEIVE_ERROR";
        case ErrorCode::NETWORK_SEND_FAILURE: return os << "NETWORK_SEND_FAILURE";
        case ErrorCode::OPERATION_TIMEDOUT: return os << "OPERATION_TIMEDOUT";
        case ErrorCode::PROXY_RESOLUTION_FAILURE: return os << "PROXY_RESOLUTION_FAILURE";
        case ErrorCode::SSL_CONNECT_ERROR: return os << "SSL_CONNECT_ERROR";
        case ErrorCode::SSL_LOCAL_CERTIFICATE_ERROR: return os << "SSL_LOCAL_CERTIFICATE_ERROR";
        case ErrorCode::SSL_REMOTE_CERTIFICATE_ERROR: return os << "SSL_REMOTE_CERTIFICATE_ERROR";
        case ErrorCode::SSL_CACERT_ERROR: return os << "SSL_CACERT_ERROR";
        case ErrorCode::GENERIC_SSL_ERROR: return os << "GENERIC_SSL_ERROR";
        case ErrorCode::UNSUPPORTED_PROTOCOL: return os << "UNSUPPORTED_PROTOCOL";
        default: return os << "ErrorCode(" << static_cast<std::underlying_type_t<cpr::ErrorCode>>(code) << ")";
    }
}

} // namespace cpr

namespace banana::connector {

basic_cpr::basic_cpr(std::string token) : m_token(std::move(token)) {
    // nothing
}

expected<std::string> basic_cpr::do_request(std::string_view method, std::optional<std::string> body) {
    cpr::Session session;

    std::string url;
    url += m_api_path;
    url += "/bot";
    url += m_token;
    url += "/";
    url += method;

    session.SetUrl(std::move(url));

    if (body) {
        session.SetBody(cpr::Body{ std::move(*body) });
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

} // namespace banana::connector
