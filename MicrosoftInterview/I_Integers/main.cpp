/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
using namespace std;

void divideRecursion(int i){
	if(i == 1) {
		std::cout << i << std::endl;
		return;
	}

	divideRecursion(i - 1);

	if((i % 2) == 0 && (i % 7) == 0)
		std::cout << "butterfly" << std::endl;
	else if ((i % 2) == 0)
		std::cout << "butter" << std::endl;
	else if((i % 7) == 0)
		std::cout << "fly" << std::endl;
	else
		std::cout << i << std::endl;


}

void divisor(int * nums) {

	for (int i = 0; i < 100; i++){
		if((nums[i] % 2) == 0 && (nums[i] % 7) == 0)
			std::cout << "butterfly" << std::endl;
		else if ((nums[i] % 2) == 0)
			std::cout << "butter" << std::endl;
		else if((nums[i] % 7) == 0)
			std::cout << "fly" << std::endl;
		else
			std::cout << nums[i] << std::endl;
	}
}

int main(int argc, char ** argv) {
	int nums[100];

	for(int i = 0; i < 100; i++) {
		nums[i] = i + 1;
	}

	divideRecursion(100);

}



