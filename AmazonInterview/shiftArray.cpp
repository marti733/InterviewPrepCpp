/*
 * shiftArray.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <vector>
#include <iostream>

using namespace std;

vector<int> shiftArraySpace(vector<int> a, int n, int k){
	int last;
	while(k > 0) {
		last = a[0];
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i + 1];
		}
		a[n-1] = last;
		--k;
	}
	return a;
}

vector<int> shiftArrayTime(vector<int> a, int n, int k){
    vector<int> r(n);
	int i;
    int j = 0;

	for(i = k; i < n; i ++){
       r[j++] = a[i];
    }

    for(i = 0; i < k; i++){
        r[j++] = a[i];
    }

    return r;
}

int main2(){
	int n;
	int k;
	cin >> n >> k;
	vector<int> a(n);
	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];
	}
	vector<int> output = shiftArraySpace(a, n, k);
	for(int i = 0; i < n;i++)
		cout << output[i] << " ";
	cout << endl;

	vector<int> output2 = shiftArrayTime(a, n, k);
		for(int i = 0; i < n;i++)
			cout << output2[i] << " ";
		cout << endl;

	return 0;
}


