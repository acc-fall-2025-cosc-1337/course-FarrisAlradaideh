#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"

using namespace std;

int main()
{
    srand(time(0));

    Die die1;
    Die die2;
    Shooter shooter;

    for(int i = 0; i < 5; i++)
    {
        shooter.throw_dice(die1, die2);
    }

    cout << "Rolled values:\n";
    shooter.display_rolled_values();

    return 0;
}

