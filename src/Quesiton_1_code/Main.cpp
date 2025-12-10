// main.cpp
#include <iostream>
#include "Question_1.h"
using namespace std;

int main() {
    int value;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter a value (1-512): ";
        cin >> value;

        while (value < 1 || value > 512) {
            cout << "Invalid. Enter a value (1-512): ";
            cin >> value;
        }

        string result = decimal_to_hex(value);
        cout << "Hex value: " << result << endl;

        cout << "Run again? (y/n): ";
        cin >> choice;
    }

    return 0;
}

