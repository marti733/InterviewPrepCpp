/*
 * staircase.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <iostream>

using namespace std;

int findWays(int n){

	int arr[n];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;

	for(int i = 3; i < n; i++){
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}

	return arr[n-1];
}

int main26(){
	int s;
	cin >> s;
	for(int a0 = 0; a0 < s; a0++){
		int n;
		cin >> n;

		int num = findWays(n);
		cout << num << endl;
	}
	return 0;
}



