/*
 * findMaxSum.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMaxSum(vector<int> a, int m){
	int maxSum = a[0];
	int cMax = a[0];

	for(int i = 1; i < m; i++){
		cMax = max(a[i], cMax + a[i]);
		maxSum = max(cMax, maxSum);
	}

	return maxSum;
}

int main30() {
	//code
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		int m;
		cin >> m;
		vector<int> arr;
		for(int j = 0; j < m; j++){
			int k;
			cin >> k;
			arr.push_back(k);
		}

		int r = findMaxSum(arr, m);
		cout << r << endl;
	}
	return 0;
}


