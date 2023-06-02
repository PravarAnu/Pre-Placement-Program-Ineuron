#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
    vector<int> ans1;
    vector<int> ans2;

    unordered_set<int> s1;
    unordered_set<int> s2;

    for (auto i : nums1) {
        s1.insert(i);
    }

    for (auto i : nums2) {
        s2.insert(i);
    }

    for (auto i : s1) {
        if (s2.find(i) == s2.end()) {
            ans1.push_back(i);
        }
    }

    for (auto i : s2) {
        if (s1.find(i) == s1.end()) {
            ans2.push_back(i);
        }
    }

    return {ans1, ans2};
}

int main() { return 0; }