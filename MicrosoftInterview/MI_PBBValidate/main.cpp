/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool validatePBB(std::string str, stack<int> tracker){
	int size = str.size();
	int i;

	for(i = 0; i < size; i++){
		if(str[i] == '{')
			tracker.push(1);
		else if(str[i] == '(')
			tracker.push(2);
		else if (str[i] == '[')
			tracker.push(3);

		else if (str[i] == '}') {
			if(tracker.top() == 1)
				tracker.pop();
			else
				return false;
		}
		else if (str[i] == ')') {
			if(tracker.top() == 2)
				tracker.pop();
			else
				return false;
		}
		else if (str[i] == ']') {
			if(tracker.top() == 3)
				tracker.pop();
			else
				return false;
		}
	}

	return true;
}

int main(int argc, char ** argv) {
	std::string str = "{([]())}";
	stack<int> tracker;

	bool result = validatePBB(str, tracker);

	if(result == true)
		std::cout << "Successfully validated input" << std::endl;
	else
		std::cout << "Input is invalid" << std::endl;
}



