#include "Truckloads.h"
#include <math.h>
#include <iostream>
using namespace std;
int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates <= 0 || loadSize <= 0) {
        return -1;
    }
    //cout << "_____ " << endl;
    int truckLoads = 0;
    if (numCrates <= loadSize) {
        truckLoads+=1;
        //cout << "+1" << endl;
    }
    else {
        float half = float(numCrates) / float(2);
        //cout << "Half 1 " << ceil(half) << endl;
        //cout << "Half 2 " << floor(half) << endl;
        int half1 = floor(half);
        int half2 = ceil(half);
        if (half1 >= 0) {
            truckLoads += numTrucks(half1, loadSize);
        }
        if (half2 >= 0) {
            truckLoads += numTrucks(half2, loadSize);
        }
    }

    return truckLoads;
    // return 0;
}
int Truckloads::numTrucks(float numCrates, int loadSize) {
    return -1;
}
int Truckloads::numTrucks(float numCrates, float loadSize) {
    return -1;
}
int Truckloads::numTrucks(int numCrates, float loadSize) {
    return -1;
}