/*
 * triangle.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include "triangle.h"
#include <iostream>
using namespace std;

//Constructor initiates side lengths
Triangle::Triangle(int side1, int side2, int side3) : s1(side1), s2(side2), s3(side3) {
}

Triangle::~Triangle() {}

void Triangle::getType() {
	try{
		if (this->s1 <= 0) {
			throw 1;
		} else if (this->s2 <= 0) {
			throw 2;
		} else if (this->s3 <= 0) {
			throw 3;
		}
	} catch (int i) {
		std::cout << "One or more of the sides are invalid!" << endl;
		return;
	}

	if ((this->s1 == this->s2) & (this->s2 == this->s3)) {
		std::cout << "This is an equilateral triangle" << endl;
	}
	else if ((this->s1 == this->s2) | (this->s1 == this->s3) | (this->s2 == this->s3)) {
		std::cout << "This is an isosceles triangle" << endl;
	}
	else {
		std::cout << "This is an scalene triangle" << endl;
	}
}
