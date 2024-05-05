#pragma once

#include <banana/api.hpp>

#include <type_traits>

template <class F, std::size_t... I>
void for_each_method_impl(F callback, std::index_sequence<I...>) {
    constexpr auto min = banana::api::method_traits::first_method;

    (callback(std::integral_constant<banana::api::method, static_cast<banana::api::method>(static_cast<std::size_t>(min) + I)>{}), ...);
}

template <class F>
void for_each_method(F callback) {
    constexpr auto min = banana::api::method_traits::first_method;
    constexpr auto max = banana::api::method_traits::last_method;
    constexpr auto count = static_cast<size_t>(max) - static_cast<size_t>(min) + 1;

    for_each_method_impl(std::move(callback), std::make_index_sequence<count>());
}