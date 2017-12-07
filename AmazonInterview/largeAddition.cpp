/*
 * largeAddition.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <vector>
#include <iostream>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    long total = 0;

    // Complete this function
    for(int i = 0; i < n; i++){
        total += ar[i];
    }

    return total;
}

int main10() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}



