/*
 * printStairs.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main6(){
    int n;
    cin >> n;

    int temp = n;
    while(temp > 0){
        for(int i = 0; i < temp - 1; i++){
            cout << " ";
        }
        for(int i = temp - 1; i < n; i++){
            cout << "#";
        }
        cout << endl;
        temp --;
    }
    return 0;
}


