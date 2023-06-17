#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    int i = 0;
    int j = 0;
    int k = p.size();
    unordered_map<char, int> m;

    for (auto i : p) {
        m[i]++;
    }
    int count = m.size();
    vector<int> ans;
    while (j < s.size()) {

        m[s[j]]--;
        if (m[s[j]] == 0) {
            count--;
        }

        if (j - i + 1 == k) {
            if (count == 0) {
                ans.push_back(i);
            }

            m[s[i]]++;
            if (m[s[i]] == 1) {
                count++;
            }
            i++;
        }
        j++;
    }

    return ans;
}