/*
 * absoluteMatrix.cpp
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

int findAbsolute(vector<vector<int> > a, int n){
	int pos = 0;
	int neg = 0;
	int total = 0;

	for(int i = 0; i < n; i++){
		pos += a[i][i];
		neg += a[n-i-1][i];
	}

	total = pos - neg;

	if(total < 0)
		total = -total;

	return total;
}


int main11(){
	int n;
	cin >> n;
	vector< vector<int> > a(n,vector<int>(n));
	for(int a_i = 0;a_i < n;a_i++){
		for(int a_j = 0;a_j < n;a_j++){
			cin >> a[a_i][a_j];
		}
	}

	int ans = findAbsolute(a, n);
	cout << ans << endl;

	return 0;
}


