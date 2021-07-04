#pragma once

#include <banana/utils/agent.hpp>

namespace banana::agent {

template <class R>
struct basic_any {
    template <class Agent>
    /* implicit */ basic_any(Agent agent) : do_request([agent = std::move(agent)](std::string_view method, std::string body) mutable -> R { return agent.do_request(method, std::move(body)); }) {
        // nothing
    }

    // Note: member-function simulation
    std::function<R(std::string_view, std::string)> do_request;
};

template <class Agent>
basic_any(Agent agent) -> basic_any<decltype(agent.do_request(std::declval<std::string_view>(), std::declval<std::string>()))>;

using any_blocking         = meta::make_blocking<basic_any<std::string>>;
using any_blocking_monadic = meta::make_blocking_monadic<basic_any<expected<std::string>>>;

} // namespace banana::agent
