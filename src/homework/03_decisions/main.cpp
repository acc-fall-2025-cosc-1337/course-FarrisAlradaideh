#include <iostream>
#include "decisions.h"
using namespace std;

int main()
{
    int choice;
    int grade;

    cout << "MAIN MENU\n\n";
    cout << "1-Letter grade using if\n";
    cout << "2-Letter grade using switch\n";
    cout << "3-Exit\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter numerical grade (0-100): ";
        cin >> grade;

        if(grade >= 0 && grade <= 100)
        {
            cout << "Letter Grade: " << get_letter_grade_using_if(grade) << endl;
        }
        else
        {
            cout << "Number is out of range.\n";
        }
    }
    else if(choice == 2)
    {
        cout << "Enter numerical grade (0-100): ";
        cin >> grade;

        if(grade >= 0 && grade <= 100)
        {
            cout << "Letter Grade: " << get_letter_grade_using_switch(grade) << endl;
        }
        else
        {
            cout << "Number is out of range.\n";
        }
    }
    else
    {
        cout << "Exit selected.\n";
    }

    return 0;
}

