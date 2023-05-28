/*
Question 5
Given an integer array nums, find three numbers whose product is maximum and
return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6
*/

/* 
    TC:O(NlogN)
    SC:O(1)
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maximumProduct(vector<int> nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size() - 1;

    return max((nums[n] * nums[n - 1] * nums[n - 2]), (nums[0] * nums[1] * nums[n]));
}

int main(){
    cout<<maximumProduct({1,2,3})<<endl;
    cout<<maximumProduct({1,2,3,4})<<endl;
    cout<<maximumProduct({-100,-98,-1,2,3,4})<<endl;

    return 0;
}