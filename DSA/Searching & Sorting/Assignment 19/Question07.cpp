#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    int i = 0;
    while (i < nums2.size()) {
        if (binary_search(nums1.begin(), nums1.end(), nums2[i])) {
            ans.push_back(nums2[i]);
        }
        i++;
        while (i < nums2.size() && nums2[i] == nums2[i - 1]) {
            i++;
        }
    }

    return ans;
}