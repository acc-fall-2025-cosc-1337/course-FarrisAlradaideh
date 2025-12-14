#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
#include "Roll.h"

using namespace std;

int main()
{
    srand(time(0));

    Die die1;
    Die die2;

    Roll roll(die1, die2);

    roll.roll_dice();
    cout << "Rolled value: " << roll.roll_value() << endl;

    return 0;
}
