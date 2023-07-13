#include<bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s) {

    bool count = false;

    unordered_map<char, int> m;
    int i = 0;
    int j = 0;
    int maxi = 0;
    while (j < s.size()) {

        m[s[j]]++;

        if (m[s[j]] == 2) {
            count = true;
        }

        if (count) {
            while (count) {
                if (m[s[i]] == 2) {
                    count = false;
                }
                m[s[i]]--;
                i++;
            }
        } else {
            maxi = max(maxi, (j - i + 1));
        }

        j++;
    }

    return maxi;
}
