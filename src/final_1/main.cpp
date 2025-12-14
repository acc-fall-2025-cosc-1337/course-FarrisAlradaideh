#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"

using namespace std;

int main()
{
    srand(time(0));   // seed random once

    Die die;

    cout << "Rolling the die...\n";
    cout << "Value: " << die.roll() << endl;

    return 0;
}
