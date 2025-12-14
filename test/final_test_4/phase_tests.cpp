#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"
#include <cstdlib>
#include <ctime>

TEST_CASE("ComeOutPhase outcomes")
{
    srand(time(0));

    Die d1;
    Die d2;
    Shooter shooter;
    ComeOutPhase phase;

    for(int i = 0; i < 10; i++)
    {
        Roll* roll = shooter.throw_dice(d1, d2);
        RollOutcome result = phase.get_outcome(roll);

        REQUIRE(
            result == RollOutcome::natural ||
            result == RollOutcome::craps ||
            result == RollOutcome::point
        );
    }
}

