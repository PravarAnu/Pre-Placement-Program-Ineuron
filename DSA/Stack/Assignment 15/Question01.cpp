#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;


vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    vector<int> v;
    unordered_map<int, int> m;
    stack<int> s;

    for (int i = nums2.size() - 1; i >= 0; i--) {
        if (s.empty()) {
            m[nums2[i]] = -1;
            s.push(nums2[i]);
        } else {
            while (!s.empty() && s.top() < nums2[i]) {
                s.pop();
            }

            if (s.empty()) {
                m[nums2[i]] = -1;
                s.push(nums2[i]);
            } else {
                m[nums2[i]] = s.top();
                s.push(nums2[i]);
            }
        }
    }

    for (int i = 0; i < nums1.size(); i++) {
        v.push_back(m[nums1[i]]);
    }

    return v;
}