#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums) {
    int s = 1;
    int e = nums.size() - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] > nums[mid - 1]) {
            if (nums[mid] > nums[mid + 1]) {
                return mid;
            } else {
                s = mid + 1;
            }
        } else {
            e = mid;
        }
    }
    if (nums[0] < nums[nums.size() - 1]) {
        return nums.size() - 1;
    } else {
        return 0;
    }
}

int main() { return 0; }