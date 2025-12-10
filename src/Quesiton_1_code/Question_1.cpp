// functions.cpp
#include "Question_1.h"
using namespace std;

string decimal_to_hex(int value) {
    string hex = "";
    int remainder;

    while (value > 0) {
        remainder = value % 16;
        if (remainder < 10) {
            hex.push_back('0' + remainder);
        } else {
            hex.push_back('A' + (remainder - 10));
        }
        value /= 16;
    }

    string reversed = "";
    for (int i = hex.size() - 1; i >= 0; i--) {
        reversed.push_back(hex[i]);
    }

    return reversed;
}


