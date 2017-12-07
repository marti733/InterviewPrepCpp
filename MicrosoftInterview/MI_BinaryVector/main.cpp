/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>
using namespace std;

int binaryHelper(vector<int> ints, int key, int upperBound, int lowerBound) {
	if(upperBound <= lowerBound)
		return 0;

	int midPosition = (upperBound + lowerBound) / 2;
	int midValue = ints[midPosition];

	if(key == midValue)
			return 1;

	int result;
	if (key > midValue)
		result = binaryHelper(ints, key, upperBound, midPosition + 1);
	else
		result = binaryHelper(ints, key, midPosition, lowerBound);

	return result;

}

bool binarySearch(vector<int> ints, int n, int key) {
	if (n < 1)
		return false;

	int midPosition = n / 2;
	int midValue = ints[midPosition];
	int result;

	if(key >= midValue)
		result = binaryHelper(ints, key, n - 1, midPosition);
	else
		result = binaryHelper(ints, key, midPosition - 1, 0);
	return result;
}

int main(int argc, char** argv){
	vector<int> ints;
	ints.push_back(1);
	ints.push_back(3);
	ints.push_back(4);
	ints.push_back(6);
	ints.push_back(6);
	ints.push_back(7);
	ints.push_back(9);
	ints.push_back(11);
	ints.push_back(12);
	ints.push_back(12);
	ints.push_back(13);
	ints.push_back(15);
	ints.push_back(15);
	ints.push_back(15);
	ints.push_back(16);
	ints.push_back(17);
	ints.push_back(19);
	ints.push_back(21);
	ints.push_back(22);

	int size = 19;

	int key = 100;

	int result = binarySearch(ints, size, key);

	if (result == 1)
		std::cout << key << " is in the vector!" << std::endl;
	else
		std::cout << key << " is NOT in the vector." << std::endl;
}






