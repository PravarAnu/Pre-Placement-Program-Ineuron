#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        while(s<e){
            int mid = s + (e - s)/2;
            if(nums[mid]>= nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
        }
        if(nums[s] >= nums[0]){
            return nums[0];
        }

        return nums[s];
    }