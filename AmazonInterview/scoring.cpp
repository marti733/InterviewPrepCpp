/*
 * scoring.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <vector>
#include <iostream>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector<int> scores(2);

    if(a0 > b0)
        scores[0] += 1;
    else if (a0 < b0)
        scores[1] += 1;

    if(a1 > b1)
        scores[0] += 1;
    else if(a1 < b1)
        scores[1] += 1;

    if(a2 > b2)
        scores[0] += 1;
    else if(a2 < b2)
        scores[1] += 1;

    return scores;
}

int main9() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}


