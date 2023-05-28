/*
Question 7
An array is monotonic if it is either monotone increasing or monotone
decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An
array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or
false otherwise.

Example 1:
Input: nums = [1,2,2,3]
Output: true
*/


/* 
    TC:O(N)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> nums) {

    if (nums.size() == 1) {
        return true;
    }

    bool increasing = true;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            increasing = false;
            break;
        }
    }

    bool decreasing = true;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
            break;
        }
    }

    return increasing || decreasing;
}

int main(){
    cout<<isMonotonic({1,2,2,3})<<endl;
    cout<<isMonotonic({1,2,3,1,3});
    return 0;
}