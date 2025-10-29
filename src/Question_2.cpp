#include <iostream>
using namespace std;

string gpa_to_letter_grade(double g);

int main() {
    double g;
    char again;
    do {
        cout << "Enter GPA (0-4): ";
        cin >> g;
        while (g < 0 || g > 4) {
            cout << "Invalid. Enter 0-4: ";
            cin >> g;
        }
        cout << "Letter grade: " << gpa_to_letter_grade(g) << endl;
        cout << "Again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}

string gpa_to_letter_grade(double g) {
    if (g >= 3.5) return "A";
    if (g >= 3) return "B";
    if (g >= 2) return "C";
    if (g >= 1) return "D";
    return "F";
}

