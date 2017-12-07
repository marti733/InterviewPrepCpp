/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int vec[10] = {1, 2, 3, 1, 2, 30, 2, 1, 2, 3};
	long preMul[10] = {1, 2, 3, 4, 3, 2, 4, 1, 2, 3};
	long postMul[10] = {1, 2, 3, 4, 3, 2, 4, 1, 2, 3};
	long long mul[10] = {1, 2, 3, 4, 3, 2, 4, 1, 2, 3};
	int i, j, k;

	preMul[0] = 1;
	postMul[9] = 1;
	for (i = 1; i < 10; i++) { //Second value to end of vector
		preMul[i] = preMul[i - 1] * vec[i - 1];
		std::cout << "Excluding " << vec[i] << ": " << preMul[i] << std::endl;
	}
	std::cout << "Post Multiplication  " << std::endl;
	for(j = 8; j >= 0; j--) { //First to second last value of vector
		postMul[j] = postMul[j+1] * vec[j + 1];
		std::cout << "Excluding " << vec[j] << ": " << postMul[j] << std::endl;
	}

	std::cout << "Total " << std::endl;
	for (k = 0; k < 10; k++) {
		mul[k] = preMul[k] * postMul[k];
		std::cout << "Excluding " << vec[k] << ": " << mul[k] << std::endl;
	}

}



