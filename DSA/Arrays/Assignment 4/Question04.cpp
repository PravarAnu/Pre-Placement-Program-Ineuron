/*

    TC: O(NlogN)
    SC: O(1);
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arrayPairSum(vector<int> nums) {
    sort(nums.begin(), nums.end());

    int sum = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        sum += min(nums[i], nums[i + 1]);
    }

    return sum;
}

int main() { 
    
    cout<<arrayPairSum({1,4,3,2})<<endl;
    cout<<arrayPairSum({6,2,6,5,1,2})<<endl;

    return 0; 
}