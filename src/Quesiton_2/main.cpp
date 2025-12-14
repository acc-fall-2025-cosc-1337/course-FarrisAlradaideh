#include <iostream>
#include "gpa.h"
using namespace std;

int main()
{
    double gpa;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter GPA (0 to 4): ";
        cin >> gpa;

        if(gpa >= 0.0 && gpa <= 4.0)
        {
            string letter = gpa_to_letter_grade(gpa);
            cout << "Letter Grade: " << letter << endl;
        }
        else
        {
            cout << "GPA out of range.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}




