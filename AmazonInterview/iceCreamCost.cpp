/*
 * iceCreamCost.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <vector>;
#include <iostream>

using namespace std;

class IceCream {

public:
	int flavor;
	int index;

	IceCream(int flavor, int index) {
		this->flavor = flavor;
		this->index = index;
	}
};

bool compare(IceCream f1, IceCream f2){
	return f1.flavor < f2.flavor;
}

int binarySearch(int first, int last, vector<IceCream> arr, int search) {
	for(int i = first; i <= last; i++){
		if(arr[i].flavor == search){
			return arr[i].index;
		}
	}

	return -1;
}

int main24() {
	int t;
	int n, m;
	cin >> t;
	for(int test = 0; test < t; test++) {
		cin >> m >> n;
		vector<IceCream> arr;
		arr.reserve(n);

		for (int i = 0; i < n; i++) {
			int cost;
			cin >> cost;
			arr.push_back(IceCream(cost, i + 1));
		}

		sort(arr.begin(), arr.end(), compare);
		int firstIndex = 100000, secondIndex = 100000;
		for(int i = 0; i < n - 1 ; i++) {
			int search = m - arr[i].flavor;
			if(search >= arr[i].flavor) {
				int index = binarySearch( i + 1, n - 1, arr, search);
				if( index != -1 ) {
					cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
					break;

				}
			}
		}

	}

}



