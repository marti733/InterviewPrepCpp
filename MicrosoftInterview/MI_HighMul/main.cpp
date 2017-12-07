/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char ** argv) {
	int vec[3] = {1, 2, 3};

	int size = sizeof(vec)/sizeof(int);

	try {
		if(size < 3)
			throw 3;
	} catch (int i) {
		std::cout << "Error: Array must be at least 3 integers" << std::endl;
		return 0;
	}

	int h1, h2, h3;
	int temp1, temp2, temp3;

	// Find largest of three
	temp1 = max(vec[1], vec[2]);
	h1 = max(vec[0], temp1);

	//Find smallest of three
	temp2 = min(vec[1], vec[2]);
	h3 = min(vec[0], temp2);

	//Find middle of three
	temp3 = max(vec[0], vec[1]);
	h2 = min(temp3, vec[2]);

	int i;

	for (i = 3; i < size ; i++) {
		if(vec[i] > h1) {
			h3 = h2;
			h2 = h1;
			h1 = vec[i];
		} else if (vec[i] > h2) {
			h3 = h2;
			h2 = vec[i];
		} else if (vec[i] > h3) {
			h3 = vec[i];
		}
	}

	int high_mul = h1 * h2 * h3;
	std::cout << high_mul << std::endl;
}


