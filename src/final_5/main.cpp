#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

using namespace std;

int main()
{
    // seed random number generator
    srand(time(0));

    // create two dice
    Die die1;
    Die die2;

    // create shooter
    Shooter shooter;

    // create roll pointer
    Roll* roll = nullptr;

    // first roll
    roll = shooter.throw_dice(die1, die2);

    int rolled_value = roll->roll_value();

    // create come out phase
    ComeOutPhase come_out_phase;

    // come out phase loop
    while(
        come_out_phase.get_outcome(roll) == RollOutcome::natural ||
        come_out_phase.get_outcome(roll) == RollOutcome::craps
    )
    {
        cout << "Rolled " << rolled_value << " roll again" << endl;

        roll = shooter.throw_dice(die1, die2);
        rolled_value = roll->roll_value();
    }

    // outside the loop
    cout << "Rolled " << rolled_value << " start of point phase" << endl;
    cout << "Roll until rolled value or 7 is rolled" << endl;

    // set point
    int point = rolled_value;

    // roll again
    roll = shooter.throw_dice(die1, die2);
    rolled_value = roll->roll_value();

    // create point phase
    PointPhase point_phase(point);

    // point phase loop
    while(
        point_phase.get_outcome(roll) != RollOutcome::seven_out &&
        point_phase.get_outcome(roll) != RollOutcome::point
    )
    {
        cout << "Rolled " << rolled_value << " roll again" << endl;

        roll = shooter.throw_dice(die1, die2);
        rolled_value = roll->roll_value();
    }

    // outside loop
    cout << "Rolled " << rolled_value << " end of point phase" << endl;

    // display all shooter rolls
    shooter.display_rolled_values();

    return 0;
}
