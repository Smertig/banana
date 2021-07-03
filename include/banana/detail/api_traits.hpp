#pragma once

#include <banana/detail/api_types_fwd.hpp>
#include <banana/detail/api_enums.hpp>

#include <string_view>

namespace banana::meta {

template <banana::api::method>
struct api_traits {
    // exposition only
    static inline constexpr std::string_view native_name = "getFooBar";
    static inline constexpr std::string_view pretty_name = "get_foo_bar";

    using request_type  = void;
    using response_type = void;
};

namespace detail {

template <class RequestType>
struct by_request_type_impl;

} // namespace detail

#include "generated/api_traits.hpp"

template <class RequestType>
using api_traits_by_request = typename detail::by_request_type_impl<RequestType>::type;

} // namespace banana::meta
