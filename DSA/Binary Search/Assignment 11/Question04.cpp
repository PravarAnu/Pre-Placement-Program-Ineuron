#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    int s = 0;
    int e = nums.size() - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] <= mid) {
            e = mid;
        } else {
            if (nums[mid] == nums[mid + 1]) {
                return nums[mid];
            } else {
                s = mid + 1;
            }
        }
    }

    return nums[s];
}

int main() { return 0; }