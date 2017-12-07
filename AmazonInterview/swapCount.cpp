/*
 * swapCount.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <vector>
#include <iostream>

using namespace std;

void bubbleSort(vector<int> a, int n){
	int numberOfSwaps = 0;

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++) {
			// Swap adjacent elements if they are in decreasing order
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				numberOfSwaps++;
			}
		}
	}

	cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n-1] << endl;
}

int main27(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];
	}

	bubbleSort(a, n);


	return 0;
}



