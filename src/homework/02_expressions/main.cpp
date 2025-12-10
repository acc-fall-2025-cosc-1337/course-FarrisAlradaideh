#include <iostream>
#include "hwexpressions.h"
using namespace std;

int main()
{
    double meal_amount;
    double tip_rate;

    cout << "Enter meal amount: ";
    cin >> meal_amount;

    cout << "Enter tip rate (example: enter 0.15 for 15%): ";
    cin >> tip_rate;

    double tax = get_sales_tax_amount(meal_amount);
    double tip = get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + tax + tip;

    cout << "Meal Amount: " << meal_amount << endl;
    cout << "Sales Tax: " << tax << endl;
    cout << "Tip Amount: " << tip << endl;
    cout << "Total: " << total << endl;

    return 0;
}

