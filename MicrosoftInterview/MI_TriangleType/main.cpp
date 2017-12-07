/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include "triangle.h"
#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
	Triangle t1 = Triangle(1, 2, 3);
	Triangle t2 = Triangle(3, 4, 5);
	Triangle t3 = Triangle(4, 4, 6);
	Triangle t4 = Triangle(1, 1, 1);
	Triangle t5 = Triangle(-3, 4, 5);
	Triangle t6 = Triangle(0, 4, 5);
	Triangle t7 = Triangle(3, 4, 5);

	t1.getType();
	t2.getType();
	t3.getType();
	t4.getType();
	t5.getType();
	t6.getType();
	t7.getType();
}


