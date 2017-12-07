/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int findUnique(vector<int> ids) {
	int i;
	for(i = 0; i < ids.size() - 1; i++) {
		ids[i + 1] = ids[i] ^ ids[i + 1];
	}

	return ids[ids.size() - 1];
}

int main(int argc, char ** argv) {
	vector<int> ids;
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(25);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(30);
	ids.push_back(30);
	ids.push_back(20);
	ids.push_back(10);
	ids.push_back(10);
	ids.push_back(10);
	ids.push_back(10);
	ids.push_back(10);

	int result = findUnique(ids);

	std::cout << result << std::endl;
}



