#include "doctest.h"

#include <banana/utils/dynamic_optional.hpp>

TEST_CASE("dynamic_optional") {
    banana::dynamic_optional<int> i = 42;
    CHECK(i == 42);
    CHECK(42 == i);
    CHECK(i == i);

    CHECK(i != std::nullopt);
    CHECK(std::nullopt != i);

    CHECK(!(i != i));

    CHECK(i != 43);
    CHECK(43 != i);

    i = std::nullopt;

    CHECK(i != 42);
    CHECK(42 != i);
    CHECK(i == i);

    CHECK(i == std::nullopt);
    CHECK(std::nullopt == i);

    CHECK(!(i != i));

    CHECK(i != 43);
    CHECK(43 != i);
}