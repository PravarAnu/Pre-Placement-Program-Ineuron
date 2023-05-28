/* 
Question 4
Given a sorted array of distinct integers and a target value, return the index if the
target is found. If not, return the index where it would be if it were inserted in
order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
*/

/* 
    TC:O(logN)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findTheTarget(vector<int> arr, int target){
    int i=0; 
    int j = arr.size()-1;

    while(i<=j){
        int mid = (j+i)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            j = mid-1;
        }else{
            i = mid+1;
        }
    }

    return i;
}

int main(){

    cout<<findTheTarget({1,3,5,6}, 5)<<endl;
    cout<<findTheTarget({1,3,5,6}, 4)<<endl;
    cout<<findTheTarget({1,3,5,6}, 2);
    
    return 0;
}