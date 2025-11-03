#include <iostream>
#include <string>
using namespace std;

string decimal_to_binary(int n);

int main() {
    int n;
    char a = 'y';
    while (a == 'y' || a == 'Y') {
        cout << "Enter number (1-255): ";
        cin >> n;
        if (n < 1 || n > 255) {
            cout << "Invalid.\n";
            continue;
        }
        string s = decimal_to_binary(n);
        cout << "Binary: " << s << endl;
        cout << "Again? ";
        cin >> a;
    }
}

string decimal_to_binary(int n) {
    string b = "";
    while (n > 0) {
        int r = n % 2;
        b = char(r + '0') + b;
        n = n / 2;
    }
    return b;
}


