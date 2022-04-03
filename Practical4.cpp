// Practical4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;



int main()
{
    /*
    int val = reverseDigit(12345);
    cout << val << endl;

    string str1 = reverseString("ABCDE");
    cout << str1;
    */
    Truckloads truckLoads = Truckloads();
    int totalTrucks = truckLoads.numTrucks(14, 3);
    cout << totalTrucks;
}


