#include <iostream>
#include "decimal_binary.h"
using namespace std;

int main()
{
    int number;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter an integer between 1 and 255: ";
        cin >> number;

        if(number >= 1 && number <= 255)
        {
            string binary_value = decimal_to_binary(number);
            cout << "Binary value: " << binary_value << endl;
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
