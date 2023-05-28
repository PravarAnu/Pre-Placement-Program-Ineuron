/*
Question 2
Given an array nums of n integers, return an array of all the unique quadruplets
[nums[a], nums[b], nums[c], nums[d]] such that:
           ● 0 <= a, b, c, d < n
           ● a, b, c, and d are distinct.
           ● nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/


/* 
    TC:
    SC:
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 3; i++) {
        for (int j = i + 1; j < nums.size() - 2; j++) {
            int low = j + 1;
            int high = nums.size() - 1;

            while (low < high) {
                int sum = nums[i] + nums[j] + nums[low] + nums[high];

                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[low], nums[high]});
                } else if (sum > target) {
                    high--;
                } else {
                    low++;
                }
            }
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> ans = fourSum({1,0,-1,0,-2,2},0);

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

