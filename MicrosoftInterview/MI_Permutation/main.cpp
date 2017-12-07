/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> * getPermutations(string str, string out, vector<string> * results) {
	if (str.size() == 0) {
	        results->push_back(out);
			return results;
	}

	for (long i = 0; i < str.size(); i++) {
		getPermutations(str.substr(1), out + str[0], results);
		rotate(str.begin(), str.begin() + 1, str.end());
	}

	return results;
}

int main(int argc, char**argv) {
	vector<string>* results = new vector<string>;
	string str = "ABCDEFGHI";
	results = getPermutations(str, "", results);

	long size = results->size();
	for (long i = 0; i < size; i++){
		std::cout << i << " : "<< results->back() << std::endl;
		results->pop_back();
	}
}



