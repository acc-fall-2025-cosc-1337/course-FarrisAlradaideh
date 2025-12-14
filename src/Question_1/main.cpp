#include <iostream>
#include "decimal_hex.h"
using namespace std;

int main()
{
    int number;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter an integer between 1 and 512: ";
        cin >> number;

        if(number >= 1 && number <= 512)
        {
            string hex_value = decimal_to_hex(number);
            cout << "Hexadecimal value: " << hex_value << endl;
        }
        else
        {
            cout << "Number out of range.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}

