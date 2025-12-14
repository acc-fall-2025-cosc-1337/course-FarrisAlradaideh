#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "cookies.h"

TEST_CASE("Test get_cookie_ingredients")
{
    std::vector<double> result;

    result = get_cookie_ingredients(48);
    REQUIRE(result[0] == Approx(1.5));
    REQUIRE(result[1] == Approx(1.0));
    REQUIRE(result[2] == Approx(2.75));

    result = get_cookie_ingredients(96);
    REQUIRE(result[0] == Approx(3.0));
    REQUIRE(result[1] == Approx(2.0));
    REQUIRE(result[2] == Approx(5.5));

    result = get_cookie_ingredients(24);
    REQUIRE(result[0] == Approx(0.75));
    REQUIRE(result[1] == Approx(0.5));
    REQUIRE(result[2] == Approx(1.375));
}
