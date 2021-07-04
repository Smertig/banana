#pragma once

#include <banana/types.hpp>
#include <banana/utils/expected.hpp>
#include <banana/utils/agent.hpp>
#include <banana/detail/api_traits.hpp>
#include <banana/detail/response_handler.hpp>
#include <banana/detail/serializer.hpp>

namespace banana::api {

template <class Agent, class Args, class Traits = meta::api_traits_by_request<Args>>
api_result<typename Traits::response_type, Agent&&> call(Agent&& agent, serialized_args_t<Args> args) {
    return std::forward<Agent>(agent).template request<Traits>(std::move(args.data));
}

template <class Agent, class Args, class Traits = meta::api_traits_by_request<Args>>
api_result<typename Traits::response_type, Agent&&> call(Agent&& agent, Args args) {
    return call(static_cast<Agent&&>(agent), serialize_args(std::move(args)));
}

#include "detail/generated/api.hpp"

} // namespace banana::api
