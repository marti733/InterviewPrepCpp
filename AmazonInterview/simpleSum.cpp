/*
 * simpleSum.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <vector>
#include<iostream>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    // Complete this function
    int total = 0;
    for(int i = 0; i < n; i++){
        total += ar[i];
    }

    return total;
}

int main8() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}


