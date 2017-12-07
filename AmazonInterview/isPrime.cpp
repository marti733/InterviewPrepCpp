/*
 * isPrime.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void isPrime(vector<int> num, int p){

	for(auto &n : num){
		if(n < 2)
			cout << "Not prime" << endl;
		else if (n == 2)
			cout << "Prime" << endl;
		else if(n%2 == 0)
			cout << "Not prime" << endl;
		else{
			bool flag = true;
			int sq = sqrt(n);
			for(int i = 2; i <= sq; i++){
				if(n%i == 0){
					cout << "Not prime" << endl;
					flag = false;
					break;
				}
			}

			if(flag)
				cout << "Prime" << endl;
		}
	}

}

int main29(){
	int p;
	cin >> p;
	vector<int> n;
	for(int a0 = 0; a0 < p; a0++){
		int a;
		cin >> a;
		n.push_back(a);
	}

	isPrime(n, p);

	return 0;
}




