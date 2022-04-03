// Practical4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string reverseString(string letters) {
    string value2 = letters;
    for (int i = 0; i < letters.size(); i++) {
        value2[i] = letters[letters.size() - i - 1];
    }
    return value2;
}

int reverseDigit(int value){
    string s = to_string(value);
    string value2 = reverseString(s);
    return stoi(value2);
}

int main()
{

    int val = reverseDigit(12345);
    cout << val << endl;

    string str1 = reverseString("ABCDE");
    cout << str1;
}


