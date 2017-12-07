/*
 * randsomNote.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
	unordered_map<string, int> words;
	for(auto &m : magazine) // Pre-c++11 for(vector<string>:iterator m = magazine.begin(); m != magazine.end(); m++)
		words[m]++;

	for(auto &r : ransom){
		if(words[r] == 0)
			return false;
		else
			words[r]--;
	}

	return true;
}

int main23(){
	int m;
	int n;
	cin >> m >> n;
	vector<string> magazine(m);
	for(int magazine_i = 0;magazine_i < m;magazine_i++){
		cin >> magazine[magazine_i];
	}
	vector<string> ransom(n);
	for(int ransom_i = 0;ransom_i < n;ransom_i++){
		cin >> ransom[ransom_i];
	}
	if(ransom_note(magazine, ransom))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}



