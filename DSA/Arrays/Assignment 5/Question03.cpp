#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int i = 0;
        int j = nums.size()-1;
        int num = j;
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                ans[num] = nums[j]*nums[j];
                j--;
            }
            else{
                ans[num] = nums[i]*nums[i];
                i++;
            }
            
            num--;
            
        }
        
        return ans;
        
    }