#include <bits/stdc++.h>
using namespace std;

static bool it(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second || (a.second == b.second && a.first < b.first);
}
vector<string> topKFrequent(vector<string> &words, int k) {
    unordered_map<string, int> m;
    vector<string> ans;
    for (int i = 0; i < words.size(); i++)
        m[words[i]]++;
    vector<pair<string, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), it);
    for (int i = 0; i < k; i++)
        ans.push_back(vec[i].first);
    return ans;
}
