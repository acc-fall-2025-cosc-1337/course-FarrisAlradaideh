#include <iostream>
#include "repetition.h"
using namespace std;

int main()
{
    int choice = 0;
    int num = 0;

    do
    {
        cout << "Homework 4 Menu\n";
        cout << "1-Factorial\n";
        cout << "2-Sum odd numbers\n";
        cout << "3-Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter number (1-9): ";
            cin >> num;

            while(num <= 0 || num >= 10)
            {
                cout << "Invalid. Enter number (1-9): ";
                cin >> num;
            }

            cout << "Factorial is: " << get_factorial(num) << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter number (1-99): ";
            cin >> num;

            while(num <= 0 || num >= 100)
            {
                cout << "Invalid. Enter number (1-99): ";
                cin >> num;
            }

            cout << "Sum of odd numbers: " << sum_odd_numbers(num) << endl;
        }

    } while(choice != 3);

    return 0;
}
