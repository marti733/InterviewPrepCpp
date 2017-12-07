/*
 * stock.h
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#ifndef STOCK_H_
#define STOCK_H_

class Stock {
public:
	Stock(int *);
	virtual ~Stock();
	int * stock_price_yesterday;

	int getMaxProfit(const Stock&);
};



#endif /* STOCK_H_ */
