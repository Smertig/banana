#pragma once

#include <banana/utils/connector.hpp>

namespace banana::connector {

struct basic_any {
    template <class Connector>
    /* implicit */ basic_any(Connector connector) : do_request([connector = std::move(connector)](auto&&... args) mutable { return connector.do_request(std::forward<decltype(args)>(args)...); }) {
        // nothing
    }

    // Note: member-function simulation
    std::function<expected<std::string>(std::string_view, std::optional<std::string>)> do_request;
};

using any_blocking_monadic = make_blocking<basic_any>;
using any_blocking = make_throwing<any_blocking_monadic>;
using any_async = make_async<basic_any>;

} // namespace banana::connector
