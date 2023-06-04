#include <bits/stdc++.h>
using namespace std;


bool rotateString(string s, string goal) {

    if (s.size() != goal.size()) {
        return false;
    }
    string temp = s + s;

    auto found = temp.find(goal);

    if (found != string::npos) {
        return true;
    }

    return false;
}