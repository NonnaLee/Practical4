#include "Truckloads.h"
#include <math.h>
#include <iostream>
using namespace std;
int Truckloads::numTrucks(int numCrates, int loadSize)
{
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
        truckLoads += numTrucks(ceil(half), loadSize);
        truckLoads += numTrucks(floor(half), loadSize);
    }

    return truckLoads;
    // return 0;
}
