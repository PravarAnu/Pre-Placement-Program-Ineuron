#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kadane(vector<int> &nums){
        int max_sum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum = max(nums[i], sum+nums[i]);

            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum = 0;
        int maxSum = kadane(nums);
        if(maxSum < 0){
            return maxSum;
        }
        for (int i = 0; i < nums.size(); i++) {
            totalsum += nums[i];
            nums[i] = -nums[i];
        }
        int wrapsum = totalsum + kadane(nums);

        return max(wrapsum, maxSum);


    }
