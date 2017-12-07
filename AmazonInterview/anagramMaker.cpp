/*
 * anagramMaker.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    auto count = 0;
    vector<int> freq(26, 0); // declared as vector with size of 26 initialized to zero

    //Occurrence of each letter + for a - for b
    for (auto c : a) {
        ++freq[c - 'a']; //ASCII values to index
    }
    for (auto c : b) {
        --freq[c - 'a'];  //ASCII values to index
    }
    for (auto val : freq) {
        count += abs(val);
    }
    return count;
}

int main15(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;

    return 0;
}


