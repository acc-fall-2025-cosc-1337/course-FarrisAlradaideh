#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Test factorial")
{
    REQUIRE(get_factorial(3) == 6);
    REQUIRE(get_factorial(5) == 120);
}

TEST_CASE("Test sum odd numbers")
{
    REQUIRE(sum_odd_numbers(5) == 9);
    REQUIRE(sum_odd_numbers(10) == 25);
}

