/*
Question 1
Given an integer array nums of length n and an integer target, find three
integers in nums such that the sum is closest to the target. Return the sum of
the three integers.

You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2

Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/



/* 
    TC:O(N^2)
    SC:O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());

    int closest = 0;
    int minAbs = INT_MAX;
    for (int i = 0; i < nums.size() - 2; i++) {
        int low = i + 1;
        int high = nums.size() - 1;

        while (low < high) {
            int sum = nums[i] + nums[low] + nums[high];

            if (abs(target - sum) < minAbs) {
                minAbs = abs(target - sum);
                closest = sum;
            }

            if (sum == target) {
                return target;
            } else if (sum > target) {
                high--;
            } else {
                low++;
            }
        }
    }

    return closest;
}

int main() { 
    cout<<threeSumClosest({-1,2,1,-4},1);
    return 0; 
}