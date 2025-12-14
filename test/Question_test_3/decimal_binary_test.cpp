#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "decimal_binary.h"

TEST_CASE("Test decimal_to_binary function")
{
    REQUIRE(decimal_to_binary(10) == "00001010");
    REQUIRE(decimal_to_binary(170) == "10101010");
    REQUIRE(decimal_to_binary(255) == "11111111");
}

