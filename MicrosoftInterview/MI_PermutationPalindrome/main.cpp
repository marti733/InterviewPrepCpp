/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool findPalindrome(std::string str) {
	std::string temp = str;
	std::reverse(str.begin(), str.end());

	if(temp == str)
		return true;
	return false;
}

bool isPermutationPalindrome(std::string str) {
	std::string temp = str;
	std::sort(str.begin(), str.end());
	do {
		bool result = findPalindrome(temp);
		if(result == true)
			return true;
	}while(std::next_permutation(temp.begin(),temp.end()));

	return false;
}

int main(int argc, char ** argv) {
	std:: string str1 = "ABC";
	std:: string str2 = "ccivi";
	std:: string str3 = "ciicv";
	std:: string str4 = "civil";
	std:: string str5 = "765432101234567898765432101234567";

	bool result;
	result = isPermutationPalindrome(str1);
	if(result == true)
		std::cout << str1 << " is a palindrome!" << std::endl;
	else
		std::cout << str1 << " is NOT a palindrome" << std::endl;

	result = isPermutationPalindrome(str2);
	if(result == true)
		std::cout << str2 << " is a palindrome!" << std::endl;
	else
		std::cout << str2 << " is NOT a palindrome" << std::endl;

	result = isPermutationPalindrome(str3);
	if(result == true)
		std::cout << str3 << " is a palindrome!" << std::endl;
	else
		std::cout << str3 << " is NOT a palindrome" << std::endl;

	result = isPermutationPalindrome(str4);
	if(result == true)
		std::cout << str4 << " is a palindrome!" << std::endl;
	else
		std::cout << str4 << " is NOT a palindrome" << std::endl;

	result = isPermutationPalindrome(str5);
	if(result == true)
		std::cout << str5 << " is a palindrome!" << std::endl;
	else
		std::cout << str5 << " is NOT a palindrome" << std::endl;


}



