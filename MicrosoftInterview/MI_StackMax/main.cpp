/*
 * main.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: cheyenne
 */
#include <iostream>
#include <stack>

using namespace std;
class myStack {
public:

	stack<int> tracker_;
	stack<int> stacked_;

	myStack(int size) {}

	void Push(int value) {
		if(tracker_.empty())
			tracker_.push(value);
		else if (value > tracker_.top())
			tracker_.push(value);

		stacked_.push(value);
	}

	void Pop() {
		if(!stacked_.empty()){
			int popped = stacked_.top();
			if(popped == tracker_.top())
				tracker_.pop();
			stacked_.pop();
		}
	}

	bool isEmpty() {
		return (stacked_.empty());
	}

	int getMaxValue() {
		return tracker_.top();
	}
};
int main(int argc, char ** argv){
	myStack tracker(10);

	tracker.Push(0);
	tracker.Push(4);
	tracker.Push(0);
	tracker.Push(2);
	tracker.Push(1);

	int result = tracker.getMaxValue();

	std::cout << result << std::endl;



}


