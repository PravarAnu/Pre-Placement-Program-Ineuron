#include <bits/stdc++.h>
using namespace std;

bool buddyStrings(string s, string goal) {
    if (s.size() != goal.size()) {
        return false;
    }
    int count = 0;
    int countLet = 0;

    vector<int> alpha(26, 0);

    for (auto i : s) {
        alpha[i - 'a'] += 1;
    }

    if (s == goal) {
        for (auto i : alpha) {
            if (i >= 2) {
                return true;
            }
        }
        return false;
    } else {

        for (auto i : goal) {
            alpha[i - 'a'] -= 1;
        }

        for (auto i : alpha) {
            if (i != 0) {
                return false;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                count++;
            }

            if (count > 2) {
                return false;
            }
        }

        if (count == 2) {
            return true;
        } else {
            return false;
        }
    }
}