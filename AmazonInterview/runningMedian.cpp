/*
 * runningMedian.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <cmath>
#include <ctime>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main16(){
	int n;
	cin >> n;
	vector<float> a(n);
	stack<float> bottom;
	stack<float> top;
    float med;

	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];

        sort(a.begin(), a.begin() + a_i + 1);

        if(a_i%2 == 0)
            med = a[a_i/2];
        else
            med = (a[a_i/2] + a[a_i/2 + 1]) / 2.0;

            cout << setprecision(1) << fixed << med << endl;
	}

	return 0;
}



