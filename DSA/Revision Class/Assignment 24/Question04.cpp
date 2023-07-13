#include <bits/stdc++.h>
using namespace std;

string sortIt(string a) {
    sort(a.begin(), a.end());
    return a;
}
vector<vector<string>> groupAnagrams(vector<string> &strs) {
    map<string, vector<string>> m;

    vector<string> strsSorted;
    vector<vector<string>> ans;

    for (auto i : strs) {
        string sorted = sortIt(i);
        strsSorted.push_back(sorted);
        m[sorted] = {};
    }

    for (int i = 0; i < strs.size(); i++) {
        string sorted = strsSorted[i];
        m[sorted].push_back(strs[i]);
    }

    for (auto i : m) {
        ans.push_back(i.second);
    }

    return ans;
}