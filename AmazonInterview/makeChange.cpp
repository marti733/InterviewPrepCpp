/*
 * makeChange.cpp
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

long long make_change(vector<int> coins, int money) {
	vector<long> change(money + 1);
	change[0] = 1;
	for(int coin : coins) {
		for(int i = coin; i < change.size(); i++) {
			change[i] += change[i - coin];
		}
	}
	return change[money];
}

int main18(){
	int n;
	int m;
	cin >> n >> m;
	vector<int> coins(m);
	for(int coins_i = 0;coins_i < m;coins_i++){
		cin >> coins[coins_i];
	}
	cout << make_change(coins, n) << endl;
	return 0;
}



