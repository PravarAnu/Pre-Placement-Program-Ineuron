/*
Question 4
You have a long flowerbed in which some of the plots are planted, and some are
not. However, flowers cannot be planted in adjacent plots. Given an integer
array flowerbed containing 0's and 1's, where 0 means empty and 1 means not
empty, and an integer n, return true if n new flowers can be planted in the
flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
*/


/* 
    TC:O(N)
    SC:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n) {

    int count = 0;
    if (n == 0) {
        return true;
    }

    if (flowerbed.size() == 1) {
        if (flowerbed[0] == 0) {
            count++;
        }

        if (count >= n) {
            return true;
        }
    }

    for (int i = 0; i < flowerbed.size(); i++) {

        if (i == 0) {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[0] = 1;
                count++;
            }
        } else if (i == flowerbed.size() - 1) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        } else {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }

        if (count >= n) {
            return true;
        }
    }

    return false;
}


int main(){

    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;

    cout<<canPlaceFlowers(flowerbed, n);
    
    return 0;
}