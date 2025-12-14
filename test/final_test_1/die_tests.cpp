#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Die.h"
#include <cstdlib>
#include <ctime>

TEST_CASE("Die rolls return values from 1 to 6")
{
    srand(time(0));   // seed random once

    Die die;

    for(int i = 0; i < 10; i++)
    {
        int value = die.roll();
        REQUIRE(value >= 1);
        REQUIRE(value <= 6);
    }
}

