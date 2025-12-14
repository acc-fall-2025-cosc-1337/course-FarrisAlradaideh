#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include "come_out_phase.h"

using namespace std;

int main()
{
    srand(time(0));

    Die d1;
    Die d2;
    Shooter shooter;
    ComeOutPhase phase;

    Roll* roll = shooter.throw_dice(d1, d2);
    RollOutcome result = phase.get_outcome(roll);

    cout << "Rolled: " << roll->roll_value() << endl;

    return 0;
}

