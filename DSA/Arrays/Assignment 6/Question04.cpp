int findMaxLength(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }

        unordered_map<int,int> m;
        int prefSum = 0;
        int maxLen = 0;
        for(int i =0; i<nums.size(); i++){
            prefSum += nums[i];

            if(prefSum == 0){
                maxLen = max(maxLen, i+1);
            }

            if(m.find(prefSum) != m.end()){
                maxLen = max(maxLen, i-m[prefSum]);
            }
            else{
                m[prefSum] = i;
            }

        }

        return maxLen;
    }