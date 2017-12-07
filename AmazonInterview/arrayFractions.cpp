/*
 * arrayFractions.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main7(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int pos = 0;
    int neg = 0;
    int zer = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zer++;
    }

    cout << setprecision(6) << fixed;
    cout << (float)pos/(float)n << endl;
    cout << (float)neg/(float)n << endl;
    cout << (float)zer/(float)n << endl;

    return 0;
}


