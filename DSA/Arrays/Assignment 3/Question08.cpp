/* 
Question 8
Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
*/


/* 
    TC:O(NlogN)
    SC:O(1)
*/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool canAttendAll(vector<pair<int,int>> &meetings){
    sort(meetings.begin(), meetings.end());

    for(int i=0; i<meetings.size()-1; i++){
        if(meetings[i].second > meetings[i+1].first){
            return false;
        }
    }

    return true;
}


int main(){
    vector<pair<int,int>> meetings = {{5,8}, {9,15}};

    cout<<canAttendAll(meetings);
}