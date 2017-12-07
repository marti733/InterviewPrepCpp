/*
 * missingNumber.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <iostream>

using namespace std;

int main() {
	//code
	int a[1000] = {0};
	int t, n;
	bool flag;

	cin >> t;

	for(int i = 0; i < t; i++){
	    cin >> n;
	    flag = true;

	    for(int j = 1; j < n; j++){
	        int c;
	        cin >> c;
	        a[c] = 1;
	    }

	    for(int k = 1; k < n; k++){
	        if(a[k] == 0){
	            cout << k << endl;
	            flag = false;
	        }
	        else
	        		a[k] = 0;
	    }

	    if(flag)
	    		cout << n << endl;
	}

	return 0;
}
