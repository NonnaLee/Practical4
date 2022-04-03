#include "Reverse.h"
#include <iostream>
#include <string>

using namespace std;
string reverseString(string letters) {
    string value2 = letters;
    int size = letters.size();
    for (int i = 0; i < size; i++) {
        value2[i] = letters[letters.size() - i - 1];
    }
    return value2;
}

int reverseDigit(int value) {
    string s = to_string(value);
    string value2 = reverseString(s);
    return stoi(value2);
}