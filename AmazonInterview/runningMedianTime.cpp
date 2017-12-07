/*
 * runningMedianTime.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: cheyenne
 */
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

bool compare_less(const int& a, const int& b)
{
    return b < a;
}

bool compare_greater(const int& a, const int& b)
{
    return a < b;
}

int main17(){
    int x, n;
    cin >> n;
    vector<int> v0, v1;
    v0.reserve(n);
    v1.reserve(n);

    float m = nanf("");

    for(int i = 0; i < n; i++) {
        cin >> x;

        if (isnan(m) || (float)x <= m)
        {
            v0.push_back(x);
            push_heap(v0.begin(), v0.end(), compare_greater);
        }
        else
        {
            v1.push_back(x);
            push_heap(v1.begin(), v1.end(), compare_less);
        }

        while (v1.size() > v0.size()+1)
        {
            x = v1[0];
            pop_heap(v1.begin(), v1.end(), compare_less);
            v1.pop_back();
            v0.push_back(x);
            push_heap(v0.begin(), v0.end(), compare_greater);
        }
        while (v0.size() > v1.size()+1)
        {
            x = v0[0];
            pop_heap(v0.begin(), v0.end(), compare_greater);
            v0.pop_back();
            v1.push_back(x);
            push_heap(v1.begin(), v1.end(), compare_less);
        }
        if (v0.size() > v1.size())
            m = v0[0];
        else if (v1.size() > v0.size())
            m = v1[0];
        else
            m = (v0[0]+v1[0])/2.0f;

        printf("%.1f\n", m);
    }

    return 0;
}



