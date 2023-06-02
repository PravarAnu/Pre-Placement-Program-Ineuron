#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index-1] < 0){
                ans.push_back(index);
            }

            nums[index-1] *= (-1);
        }

        return ans;
}