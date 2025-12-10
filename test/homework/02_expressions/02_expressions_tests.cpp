#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_sales_tax_amount")
{
    REQUIRE(get_sales_tax_amount(20.0) == Approx(1.35));
    REQUIRE(get_sales_tax_amount(10.0) == Approx(0.675));
}

TEST_CASE("Test get_tip_amount")
{
    REQUIRE(get_tip_amount(20.0, 0.15) == Approx(3.0));
    REQUIRE(get_tip_amount(50.0, 0.20) == Approx(10.0));
}
