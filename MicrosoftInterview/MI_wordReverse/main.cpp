/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <string>
using namespace std;

void reverseString(std::string *str1){
	int size = *str1.size();
	std::string *str2;
	std::string *str3;

	int wordSize;
	int strPos = size - 1;

	for(int i = 0; i < size; i++){

		if (*str1[i] == ' '){
			wordSize = 0;
			int j = i;
			while (*str1[j] != ' ') {
				wordSize++;
				strPos--;
				j++;
			}

			*str1.copy(str2, i, wordSize);

			str3[strPos - 1] = ' ';
			str3[strPos]
		}
	}
}

int main(int arc, char ** argv) {
	std::string str1 = "Cheyenne is name my Hello";
	reverseString(str1);
}


