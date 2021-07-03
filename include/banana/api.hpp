#pragma once

#include <banana/types.hpp>
#include <banana/utils/expected.hpp>
#include <banana/utils/connector.hpp>
#include <banana/detail/api_traits.hpp>
#include <banana/detail/response_handler.hpp>
#include <banana/detail/serializer.hpp>

namespace banana::api {

template <class Connector, class Args, class Traits = meta::api_traits_by_request<Args>>
api_result<typename Traits::response_type, Connector&&> call(Connector&& connector, serialized_args_t<Args> args) {
    return std::forward<Connector>(connector).template request<Traits>(std::move(args.data));
}

template <class Connector, class Args, class Traits = meta::api_traits_by_request<Args>>
api_result<typename Traits::response_type, Connector&&> call(Connector&& connector, Args args) {
    return call(static_cast<Connector&&>(connector), serialize_args(std::move(args)));
}

#include "detail/generated/api.hpp"

} // namespace banana::api
