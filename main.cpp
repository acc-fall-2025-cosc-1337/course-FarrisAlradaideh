#include <iostream>
#include "Question_1.cpp"
using namespace std;

int main() {
    int num;
    char again = 'y';
    while (again == 'y' || again == 'Y') {
        cout << "Enter a number (1–512): ";
        cin >> num;

        if (num < 1 || num > 512) {
            cout << "Invalid number.\n";
            continue;
        }

        string hex = decimal_to_hex(num);
        cout << "Hexadecimal: " << hex << "\n";

        cout << "Run again? (y/n): ";
        cin >> again;
    }
    return 0;
}