#include<bits/stdc++.h>
using namespace std;


bool backspaceCompare(string s, string t) {
    stack<char> s1;
    stack<char> s2;

    for (auto i : s) {
        if (i == '#') {
            if (!s1.empty())
                s1.pop();
        } else {
            s1.push(i);
        }
    }

    for (auto i : t) {
        if (i == '#') {
            if (!s2.empty())
                s2.pop();
        } else {
            s2.push(i);
        }
    }

    if (s1.size() == s2.size()) {
        while (!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            }

            s1.pop();
            s2.pop();
        }

        return true;
    }

    return false;
}