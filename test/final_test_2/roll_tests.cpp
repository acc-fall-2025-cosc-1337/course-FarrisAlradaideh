#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Die.h"
#include "Roll.h"
#include <cstdlib>
#include <ctime>

TEST_CASE("Roll returns values from 2 to 12")
{
    srand(time(0));

    Die die1;
    Die die2;
    Roll roll(die1, die2);

    for(int i = 0; i < 10; i++)
    {
        roll.roll_dice();
        int value = roll.roll_value();

        REQUIRE(value >= 2);
        REQUIRE(value <= 12);
    }
}
