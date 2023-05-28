/*
Question 6
Given an array of integers nums which is sorted in ascending order, and an
integer target, write a function to search target in nums. If target exists,
then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4
*/

/* 
    TC:O(logN)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start);

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}


int main(){
    cout<<search({-1,0,3,5,9,12},9)<<endl;
    cout<<search({-1,0,3,5,9,12},2)<<endl;

    return 0;
}