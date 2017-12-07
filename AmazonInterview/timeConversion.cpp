/*
 * timeConversion.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: cheyenne
 */
#include <string>
#include <iostream>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    string hour;
    int hh = stoi(s.substr(0, 2));
    string ap = s.substr(8, 2);

    if(ap == "PM"){
        if(hh != 12)
            hh += 12;
    }
    if(ap == "AM"){
        if (hh == 12)
            hh = 0;
    }

    if(hh < 9){
        hour = "0";
        hour.append(to_string(hh));
    }
    else
        hour = to_string(hh);

    hour.append(s.substr(2, 6));

    return hour;

}

int main14() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}


