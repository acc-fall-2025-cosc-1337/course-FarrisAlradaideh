#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "gpa.h"

TEST_CASE("Test gpa_to_letter_grade")
{
    REQUIRE(gpa_to_letter_grade(3.5) == "A");
    REQUIRE(gpa_to_letter_grade(3.49) == "B");
    REQUIRE(gpa_to_letter_grade(2.0) == "C");
    REQUIRE(gpa_to_letter_grade(1.99) == "D");
    REQUIRE(gpa_to_letter_grade(0.99) == "F");
}

