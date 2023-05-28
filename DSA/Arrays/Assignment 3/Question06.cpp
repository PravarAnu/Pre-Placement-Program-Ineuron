/*
Question 6
Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
*/

/* 
    TC:O(N)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> nums) {
    int ans = 0;

    for (auto &i : nums) {
        ans ^= i;
    }

    return ans;
}


int main(){

    cout<<singleNumber({2,2,1})<<endl;
    cout<<singleNumber({2,2,1,1,3,4,3});
    
    return 0;
}