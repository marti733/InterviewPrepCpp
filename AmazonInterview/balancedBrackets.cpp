/*
 * balancedBrackets.cpp
 *
 *  Created on: Nov 12, 2017
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

bool is_balanced(string expression) {
	stack<char> open;

	for(char& c : expression){
		if((c == '[') || (c == '(') || (c == '{'))
			open.push(c);
		else if(!open.empty()){
			char pulled = open.top();

			open.pop();
			if(!(((c == ')') && (pulled == '(')) || ((c == ']') && (pulled == '[')) || ((c == '}') && (pulled == '{'))))
				return false;
		}
		else
			return false;
	}

	if(!open.empty())
		return false;

	return true;
}

int main5(){
	int t;
	cin >> t;

	for(int a0 = 0; a0 < t; a0++){
		string expression;
		cin >> expression;

		bool answer = is_balanced(expression);
		if(answer)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


