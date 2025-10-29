#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"
#include "Question_1.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test decimal_to_hex function") {
    REQUIRE(decimal_to_hex(10) == "A");
    REQUIRE(decimal_to_hex(170) == "AA");
    REQUIRE(decimal_to_hex(255) == "FF");
}

