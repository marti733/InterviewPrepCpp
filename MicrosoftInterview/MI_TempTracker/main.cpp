/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>

class TempTracker {
public:

	TempTracker(void) : maxTemp(0), minTemp(0), meanTemp(0), modeTemp(0), totalCount(0), totalTemp(0) {}

	void insert(int temp){
		tempRecord.push_back(temp);
		std::sort(tempRecord.begin(), tempRecord.end());
		totalCount++;
		totalTemp += temp;
	}
	int getMax(){
		maxTemp = *std::max_element(tempRecord.begin(), tempRecord.end());
		return maxTemp;
	}
	int getMin(){
		minTemp = *std::min_element(tempRecord.begin(), tempRecord.end());
		return minTemp;
	}
	double getMean(){
		meanTemp = static_cast<double>(totalTemp) / static_cast<double>(totalCount);
		return meanTemp;
	}
	int getMode(){
		int mostFrequent = 1;
		int i, prev, curr;
		int cCount = 0;

		for (i = 1; i < totalCount; i++) {
			prev = tempRecord[i - 1];
			curr = tempRecord[i];
			if(prev == curr)
				++cCount;
			else
				cCount = 1;

			if(cCount > mostFrequent) {
				mostFrequent = cCount;
				modeTemp = tempRecord[i];
			}
		}

		return modeTemp;
	}
private:
	int maxTemp;
	int minTemp;
	double meanTemp;
	int modeTemp;
	int totalCount;
	int totalTemp;

	std::vector<int> tempRecord;
};

int main (int argc, char ** argv) {
	TempTracker home;
	home.insert(70);
	home.insert(75);
	home.insert(75);
	home.insert(80);
	home.insert(90);
	home.insert(60);
	home.insert(0);

	int max = home.getMax();
	int min = home.getMin();
	double mean = home.getMean();
	int mode = home.getMode();

	std::cout << "Max:  " << max << std::endl;
	std::cout << "Min:  " << min << std::endl;
	std::cout << "Mean: " << mean << std::endl;
	std::cout << "Mode: " << mode << std::endl;
}


