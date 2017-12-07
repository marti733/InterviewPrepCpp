/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include "stock.h"
#include <iostream>
using namespace std;

int main(int argc, char ** argv){
	int s1[11] = {500, 400, 200, 100, 300, 500, 200, 100, 50, 200, 300};
	int s2[11] = {500, 900, 600, 100, 200, 300, 300, 300, 300, 300, 300};
	int s3[11] = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
	int s4[11] = {500, 400, 300, 200, 100, 100, 100, 100, 100, 100, 100};

	Stock sp1 = Stock(s1);
	Stock sp2 = Stock(s2);
	Stock sp3 = Stock(s3);
	Stock sp4 = Stock(s4);

	int p1 = sp1.getMaxProfit(sp1);
	int p2 = sp2.getMaxProfit(sp2);
	int p3 = sp3.getMaxProfit(sp3);
	int p4 = sp4.getMaxProfit(sp4);

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;
}


