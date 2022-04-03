#include "EfficientTruckloads.h"
#include <math.h>
#include <iostream>
using namespace std;
int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    //cout << "_____ " << endl;
    int truckLoads = 0;
    if (numCrates <= loadSize) {
        truckLoads += 1;
        //cout << "+1" << endl;
    }
    else {
        float half = float(numCrates) / float(2);
        //cout << "Half 1 " << ceil(half) << endl;
        //cout << "Half 2 " << floor(half) << endl;
        int half1 = floor(half);
        int half2 = ceil(half);
        // HALF 1
        if (mem[half1] != NULL) {
            //cout << "use Mem [" << half1 << "]" << endl;
            truckLoads += mem[half1];
        }
        else {
            truckLoads += numTrucks(half1, loadSize);
        }
        // HALF 2
        if (mem[half2] != NULL) {
            //cout << "use Mem ["<< half2 <<"]"<< endl;
            truckLoads += mem[half2];
        }
        else {
            truckLoads += numTrucks(half2, loadSize);
        }


    }
    mem[numCrates] = truckLoads;
    return truckLoads;
    // return 0;
}
