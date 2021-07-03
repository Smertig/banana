#pragma once

#include <banana/utils/connector.hpp>

namespace banana::connector {

template <class R>
struct basic_any {
    template <class Connector>
    /* implicit */ basic_any(Connector connector) : do_request([connector = std::move(connector)](std::string_view method, std::string body) mutable -> R { return connector.do_request(method, std::move(body)); }) {
        // nothing
    }

    // Note: member-function simulation
    std::function<R(std::string_view, std::string)> do_request;
};

template <class Connector>
basic_any(Connector connector) -> basic_any<decltype(connector.do_request(std::declval<std::string_view>(), std::declval<std::string>()))>;

using any_blocking         = meta::make_blocking<basic_any<std::string>>;
using any_blocking_monadic = meta::make_blocking_monadic<basic_any<expected<std::string>>>;

} // namespace banana::connector
