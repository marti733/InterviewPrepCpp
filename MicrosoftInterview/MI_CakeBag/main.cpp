/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Cake {
public:
	int weight_;
	int value_;

	Cake(int weight, int value) : weight_(weight), value_(value){}
};

int maxProfit_ = INT_MIN;

bool cakeSorter(const Cake& c1, const Cake& c2){
	return c1.value_ < c2.value_;
}

void findMaxProfit(std::vector<Cake> cakes, int capacity, int profit, int weight, int size){
	int i;

	if(weight > capacity) {
		return;
	}else {
		maxProfit_ = std::max(maxProfit_, profit);
		for (i = 0; i < size; i++) {
			findMaxProfit(cakes, capacity, profit + cakes[i].value_, weight + cakes[i].weight_, size);
		}

	}
}

int main (int argc, char ** argv) {
	std::vector<Cake> vec;
	vec.push_back(Cake(2, 7));
	vec.push_back(Cake(1, 4));
	vec.push_back(Cake(3, 15));
	vec.push_back(Cake(4, 20));
	vec.push_back(Cake(5, 10));
	vec.push_back(Cake(6, 12));
	vec.push_back(Cake(1, 3));
	vec.push_back(Cake(2, 4));
	vec.push_back(Cake(3, 10));

	int capacity = 10;

	int size = 9;
	std::sort(vec.begin(), vec.end(), cakeSorter);

	findMaxProfit(vec, capacity, 0, 0, size);

	std::cout << maxProfit_ << std::endl;

}



