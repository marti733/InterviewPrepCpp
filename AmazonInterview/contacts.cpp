/*
 * contacts.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */

#include <unordered_map>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

vector<string> tokenize(string word){
    int n = word.length();
    vector<string> tokens (n);
    for (int i=0; i<n; i++){
        tokens[i]=word.substr(0,i+1);
    }
    return tokens;
}

int main4(){
    unordered_map<string,int> contact_indices;

    int n;
    cin >> n;

    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;

        if (op == "add"){
            vector<string> tokens = tokenize(contact);
            for (string token: tokens){
                contact_indices[token]++;
            }
        }
        if (op == "find"){
            cout << contact_indices[contact] << endl;
        }
    }

    return 0;
}


/* Small test cases
 *
 * int main(){
	long n;
	cin >> n;

	set<string> contacts;
	vector<string> f;

	for(int a0 = 0; a0 < n; a0++){
		string op;
		string contact;
		cin >> op >> contact;

		if(op == "add")
			contacts.insert(contact);
		else if(op == "find"){
			f.push_back(contact);
		}
	}

	for(int i = 0; i < f.size(); i++){
		int count = 0;
		for(set<string>::iterator it = contacts.begin(); it != contacts.end(); it++){
			if(!(*it).find(f[i]))
				count++;
		}

		cout << count << endl;
	}

	return 0;
}*/

