#include <iostream>
using namespace std;

string decimal_to_hex(int n);

int main() {
    int x;
    char again = 'y';
    while (again == 'y') {
        cout << "Enter number 1-512: ";
        cin >> x;
        if (x >= 1 && x <= 512)
            cout << decimal_to_hex(x) << endl;
        cout << "Run again?: ";
        cin >> again;
    }
}

string decimal_to_hex(int n) {
    string h = "", d = "0123456789ABCDEF";
    while (n > 0) {
        h = d[n % 16] + h;
        n = n / 16;
    }
    return h;
}


