#include <iostream>
#include <vector>
#include "cookies.h"
using namespace std;

int main()
{
    int cookies;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Enter number of cookies to bake: ";
        cin >> cookies;

        if(cookies > 0)
        {
            vector<double> ingredients = get_cookie_ingredients(cookies);

            cout << "Cups of Sugar " << ingredients[0] << endl;
            cout << "Cups of Butter " << ingredients[1] << endl;
            cout << "Cups of Flour " << ingredients[2] << endl;
        }
        else
        {
            cout << "Invalid number of cookies.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}

