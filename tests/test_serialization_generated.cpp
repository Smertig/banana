#include "doctest.h"
#include "util.hpp"

#include <ostream>

#include <banana/api.hpp>

template <banana::api::method Method>
void test_method() {
    using traits_t = banana::meta::api_traits<Method>;
    using request_t = typename traits_t::request_type;

    INFO("Testing serialization of ", traits_t::pretty_name, " arguments");

    request_t request = {};
    const auto result = banana::serialize_args(request);
}

TEST_CASE("generated serialization") {
    for_each_method([](auto method) {
        test_method<method>();
    });
}