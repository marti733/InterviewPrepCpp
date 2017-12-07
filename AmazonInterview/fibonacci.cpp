/*
 * fibonacci.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */
#include <iostream>

using namespace std;

long long fibonacci(int n) {
	// Complete the function.
	__int128_t a = 0, b = 1, c, i;
	if( n == 0)
		return a;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main25() {
	int n;
	cin >> n; // n < 150
	cout << fibonacci(n);
	return 0;
}




