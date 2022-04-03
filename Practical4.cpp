// Practical4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

using namespace std;



int main()
{
    Reverse reverse = Reverse();
    int val = reverse.reverseDigit(-14);
    cout << val << endl;

    string str1 = reverse.reverseString("ABCDE");
    cout << str1;
    
    // Truckloads truckLoads = Truckloads();
    // EfficientTruckloads truckLoads = EfficientTruckloads();
    // int totalTrucks = truckLoads.numTrucks(14, 3);
    // cout << totalTrucks;
}


