#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    vector<int> ans;

    unordered_map<int, int> intersection;

    for (auto i : nums1) {
        intersection[i]++;
    }

    for (auto i : nums2) {
        if (intersection.find(i) != intersection.end()) {
            if (intersection[i] >= 1) {
                ans.push_back(i);
                intersection[i]--;
            }
        }
    }

    return ans;
}