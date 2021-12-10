
#include <iostream>
#include "lib.h"
using namespace std;


float funzione( ) {
    int i,n;
    float   max;
    cin>>n;
    float array[n];
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    max = array[0];

    for (i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
