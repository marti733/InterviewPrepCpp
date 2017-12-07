/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <algorithm>
#include <string>

int main (int argc, char ** argv) {
	std::string str1 = "Hello";
	std::string str2 = "cheyenne";
	std::string str3 = "";
	std::string str4 = " nnn n nn n ";

	std::reverse(str1.begin(), str1.end());
	std::cout << str1 << std::endl;

	std::reverse(str1.begin(), str1.end());
	std::cout << str1 << std::endl;

	std::reverse(str2.begin(), str2.end());
	std::cout << str2 << std::endl;

	std::reverse(str3.begin(), str3.end());
	std::cout << str3 << std::endl;

	std::reverse(str4.begin(), str4.end());
	std::cout << str4 << std::endl;

}



