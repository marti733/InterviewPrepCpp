/*
 * birthdayCandles.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <vector>
#include <iostream>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function'
    sort(ar.begin(), ar.end());
    int count = 1;

    for(int i = n-1; i > 0; i--){
        if(ar[i] == ar[i - 1])
            count++;
        else
            break;
    }

    return count;
}

int main13() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}



