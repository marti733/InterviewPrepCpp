/*
 * stock.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#include "stock.h"
#include <algorithm>

Stock::Stock(int *p) : stock_price_yesterday(p) {}

Stock::~Stock() {}

int Stock::getMaxProfit(const Stock& s) {
	int max_profit = 0; //Maximum profit found so far
	int c_price = s.stock_price_yesterday[0]; // Current price
	int c_profit = 0;
	int min_price = s.stock_price_yesterday[0];

	int size = 11;
	int i;
	for (i = 0; i < size; i++) {
		c_price = s.stock_price_yesterday[i];

		min_price = std::min(c_price, min_price);
		c_profit = c_price - min_price;

		max_profit = std::max(c_profit, max_profit);
	}


	return max_profit;
}




