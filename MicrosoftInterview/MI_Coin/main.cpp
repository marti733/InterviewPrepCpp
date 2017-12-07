/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include <iostream>
using namespace std;

int coinCount(int D[], int numCoin, int amountRemaining) {
	if(amountRemaining == 0)
		return 1;
	else if (amountRemaining < 0)
		return 0;
	else if (numCoin <= 0 & amountRemaining > 0)
		return 0;

	return (coinCount(D, numCoin - 1, amountRemaining) + coinCount(D, numCoin, amountRemaining - D[numCoin - 1]));
}

int main(int argc, char ** argv) {
	int D[3] = {1, 2, 4};

	int a = 4;

	int size = sizeof(D) / sizeof(int);

	int count = coinCount(D, size, a);
	std::cout << count << std::endl;
}

