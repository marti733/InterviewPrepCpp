/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <string>
using namespace std;

int findParenthesis(std::string str, int key){
	int size = str.size();

	int balance = 0;
	int findBalance = INT_MAX;


	try {
		if(key > size)
			throw -1;
	} catch (int i) {
		std::cout << "Key is too large for string" << std::endl;
		return 0;
	}


	for(int i = 0; i < size; i++) {
		if(str[i] == '(')
			balance++;
		else if(str[i] == ')') {
			balance--;
			if((findBalance == balance) && (i != key))
					return i;
		}

		if(key == i)
			findBalance = balance - 1;
	}

	return -1;
}

int main(int argc, char ** argv) {
	std::string str = "()()()(())";

	int key = 20;

	int location = findParenthesis(str, key);

	if(location > 0)
		std::cout << "End parenthesis is at: " << location << std::endl;
	else if (location < 0)
		std::cout << "End parenthesis was not found" << std::endl;
}


