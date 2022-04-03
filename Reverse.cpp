#include "Reverse.h"
#include <string>

using namespace std;

string Reverse::reverseString(string letters)
{
    string value2 = letters;
    int size = letters.size();
    for (int i = 0; i < size; i++) {
        value2[i] = letters[letters.size() - i - 1];
    }
    return value2;
}

int Reverse::reverseDigit(int value)
{
    if (value < 0) {
        throw "ERROR";
    }
    string s = to_string(value);
    string value2 = reverseString(s);
    return stoi(value2);
}
