/*
 * lonelyInteger.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: cheyenne
 */
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int lonely_integer(vector < int > a, int n) {
	int r = a[0];
	for(int i = 1; i < n; i++){
		r = r ^ a[i];
	}

	return r;
}

int main22(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];
	}
	cout << lonely_integer(a, n) << endl;
	return 0;
}



