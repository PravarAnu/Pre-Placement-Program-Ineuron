/*
Question 7
You are given an inclusive range [lower, upper] and a sorted unique integer
array nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is
not in nums.

Return the shortest sorted list of ranges that exactly covers all the missing
numbers. That is, no element of nums is included in any of the ranges, and each
missing number is covered by one of the ranges.

Example 1:
Input: nums = [0,1,3,50,75], lower = 0, upper = 99
Output: [[2,2],[4,49],[51,74],[76,99]]

Explanation: The ranges are:
[2,2]
[4,49]
[51,74]
[76,99]
*/

/* 
    TC:O(N)
    SC:O(1)
*/
#include <iostream>
#include <vector>
using namespace std;


vector<pair<int,int>> findMissingRanges(vector<int> &nums, int lower, int upper) {
    
    vector<pair<int,int>> ans;

    if(nums[0] > lower){
        ans.push_back({lower, nums[0]-1});
    }

    for(int i=1; i<nums.size(); i++){
        if(nums[i]-1 != nums[i-1]){
            if(nums[i-1]+1>=lower && nums[i]-1 <= upper){
                ans.push_back({nums[i-1]+1, nums[i]-1});
            }else if(nums[i-1]+1 >= lower && nums[i]-1 > upper){
                ans.push_back({nums[i-1]+1, upper});
            }
        }
    }

    if(nums[nums.size()-1] < upper){
        ans.push_back({nums[nums.size()-1]+1, upper});
    }

    return ans;
}


int main(){
    vector<int> nums = {0, 1, 2, 3, 7};
    int lower = 0;
    int upper = 7;

    vector<pair<int,int>> ans = findMissingRanges(nums, lower, upper);

    for(auto i: ans){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    return 0;
}