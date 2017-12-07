/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <vector>
using namespace std;

bool findMovies(vector<int> movieTimes, int flightTime){
	std::sort(movieTimes.begin(), movieTimes.end());

	int n;
	int mStart, mEnd, mMid;
	int sum;
	int numMovies = movieTimes.size();

	for(n = 0; n < numMovies - 1; n++) {
		mEnd = numMovies - 1;
		mStart = n + 1;
		while ((mEnd > mStart)) {
			mMid = (mStart + mEnd) / 2;
			sum = movieTimes[n] + movieTimes[mMid];
			if (sum == flightTime && (n != mMid)) {
				std::cout << movieTimes[n] << " and " << movieTimes[mMid];
				return true;
			}
			else if (sum < flightTime)
				mStart = max(n + 1, mMid + 1);
			else
				mEnd = mMid;

		}
	}

	return false;
}

int main(int argc, char ** argv) {
	vector<int> movieTimes;
	movieTimes.push_back(40);
	movieTimes.push_back(40);
	movieTimes.push_back(40);
	movieTimes.push_back(40);
	movieTimes.push_back(60);


	int flightTime = 80;

	bool result = findMovies(movieTimes, flightTime);

	if (result == true)
		std::cout << " are two movies that match the flight time" << std::endl;
	else
		std::cout << "There are no movie combinations that match the flight time" << std::endl;

}


