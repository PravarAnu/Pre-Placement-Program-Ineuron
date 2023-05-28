/*
A permutation of an array of integers is an arrangement of its members into a
sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr:
[1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

The next permutation of an array of integers is the next lexicographically
greater permutation of its integer. More formally, if all the permutations of
the array are sorted in one container according to their lexicographical order,
then the next permutation of that array is the permutation that follows it in
the sorted container.

If such an arrangement is not possible, the array must be rearranged as the
lowest possible order (i.e., sorted in ascending order).

● For example, the next permutation of arr = [1,2,3] is [1,3,2].
● Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
● While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does
not have a lexicographical larger rearrangement.

Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.

Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]
*/


/* 
    TC:O(N^2logN)
    SC:O(1)
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums) {

    if (nums.size() < 1) {
        return;
    }

    if (nums.size() == 2) {
        int temp = nums[0];
        nums[0] = nums[1];
        nums[1] = temp;
        return;
    }

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            sort(nums.begin() + i + 1, nums.end());

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[i]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                }
            }

            sort(nums.begin() + i + 1, nums.end());

            return;
        }
    }

    sort(nums.begin(), nums.end());

    return;
}

int main() { 
    vector<int> nums = {3,2,1};

    nextPermutation(nums);

    for(auto i:nums){
        cout<<i<<" ";
    }

    return 0; 
}