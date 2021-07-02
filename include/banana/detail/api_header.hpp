#pragma once

#include <banana/types.hpp>
#include <banana/utils/expected.hpp>
#include <banana/utils/connector.hpp>
#include <banana/detail/response_handler.hpp>
#include <banana/detail/serializer.hpp>

namespace banana::api {

template <class Connector, class Result, class Args>
api_result<Result, Connector&&> generic_call(Connector&& connector, serialized_args_t<Args> args, response_handler<Result> handler) {
    std::string_view method = handler.method;

    return std::forward<Connector>(connector).template request<Result>(method, std::move(args.data), std::move(handler));
}

} // namespace banana::api
