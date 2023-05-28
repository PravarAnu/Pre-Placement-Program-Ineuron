/* 
Question 5
You are given a large integer represented as an integer array digits, where each
digits[i] is the ith digit of the integer. The digits are ordered from most significant
to least significant in left-to-right order. The large integer does not contain any
leading 0's.

Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]

Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

*/

/* 
    TC:O(N)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> addOne(vector<int> arr){
    vector<int> ans;

    int carry = 1;
    for(int i=arr.size()-1; i>=0; i--){
        int sum = arr[i]+carry;
        arr[i] = sum%10;
        carry = sum/10;
    }

    if(carry> 0){
        ans.push_back(carry);
    }

    for(auto i: arr){
            ans.push_back(i);
    }

    return ans;
}


int main(){

    vector<int> ans = addOne({1,2,3});

    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;


    vector<int> ans1 = addOne({9,9});

    for(auto i: ans1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}