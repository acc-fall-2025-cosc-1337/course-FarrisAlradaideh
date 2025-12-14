#include "Shooter.h"
#include <iostream>

Roll* Shooter::throw_dice(Die& die1, Die& die2)
{
    Roll* roll = new Roll(die1, die2);
    roll->roll_dice();
    rolls.push_back(roll);
    return roll;
}

void Shooter::display_rolled_values()
{
    for(size_t i = 0; i < rolls.size(); i++)
    {
        std::cout << rolls[i]->roll_value() << std::endl;
    }
}

Shooter::~Shooter()
{
    for(size_t i = 0; i < rolls.size(); i++)
    {
        delete rolls[i];
    }
    rolls.clear();
}
