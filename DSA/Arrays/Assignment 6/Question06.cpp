#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> findOriginalArray(vector<int> &changed) {
    int n = changed.size();
    if (n & 1)
        return {};
    vector<int> ans;
    map<int, int> mp;
    sort(changed.begin(), changed.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (mp.find(changed[i] * 2) != mp.end()) {
            if (mp[changed[i] * 2] > 0) {
                mp[changed[i] * 2]--;
            }
            ans.push_back(changed[i]);
            if (mp[changed[i] * 2] == 0) {
                mp.erase(changed[i] * 2);
            }
        } else {
            mp[changed[i]]++;
        }
    }
    for (auto val : mp) {
        if (val.second != 0)
            return {};
    }
    return ans;
}
