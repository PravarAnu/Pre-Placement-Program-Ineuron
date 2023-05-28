/*
Question 3
We define a harmonious array as an array where the difference between its
maximum value and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious
subsequence among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by
deleting some or no elements without changing the order of the remaining
elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
*/

/*
    TC:O(N)
    SC:O(N)
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int longestHarmoniousSubsequence(vector<int> nums) {
    unordered_map<int, int> m;

    for (auto i : nums) {
        m[i]++;
    }

    int maxSubsequence = 0;
    for (auto i : m) {
        if (m.find(i.first + 1) != m.end()) {
            maxSubsequence = max(maxSubsequence, (i.second + m[i.first + 1]));
        }
    }

    return maxSubsequence;
}

int main() {

    cout << longestHarmoniousSubsequence({1, 3, 2, 2, 5, 2, 3, 7}) << endl;
    cout << longestHarmoniousSubsequence({1, 2, 3, 4}) << endl;
    cout << longestHarmoniousSubsequence({1, 1, 1, 1}) << endl;

    return 0;
}
