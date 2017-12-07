/*
 * veryLargeSum.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <vector>
#include <iostream>

using namespace std;

int main12() {
    vector<long> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }

    sort(arr.begin(), arr.end());
    int64_t min = arr[0] + arr[1] + arr[2] + arr[3];
    int64_t max = arr[1] + arr[2] + arr[3] + arr[4];

    cout << min << " " << max << endl;

    return 0;
}


