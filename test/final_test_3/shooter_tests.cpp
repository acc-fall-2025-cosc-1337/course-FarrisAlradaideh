#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include <cstdlib>
#include <ctime>

TEST_CASE("Shooter returns rolls with values from 2 to 12")
{
    srand(time(0));

    Die die1;
    Die die2;
    Shooter shooter;

    for(int i = 0; i < 10; i++)
    {
        Roll* roll = shooter.throw_dice(die1, die2);
        REQUIRE(roll != nullptr);

        int value = roll->roll_value();
        REQUIRE(value >= 2);
        REQUIRE(value <= 12);
    }
}

