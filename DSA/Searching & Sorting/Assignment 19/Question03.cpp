#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums, int lo, int mid, int hi) {
    vector<int> mergedArr;
    int iMer = 0;

    int iStart = lo;
    int iEnd = mid;

    int jStart = mid + 1;
    int jEnd = hi;

    while (iStart <= iEnd && jStart <= jEnd) {
        if (nums[iStart] < nums[jStart]) {
            mergedArr.push_back(nums[iStart]);
            iStart++;
        } else {
            mergedArr.push_back(nums[jStart]);
            jStart++;
        }
    }

    while (iStart <= iEnd) {
        mergedArr.push_back(nums[iStart]);
        iStart++;
    }

    while (jStart <= jEnd) {
        mergedArr.push_back(nums[jStart]);
        jStart++;
    }

    for (int i = lo; i <= hi; i++) {
        nums[i] = mergedArr[iMer];
        iMer++;
    }
}

void mergeSort(vector<int> &nums, int lo, int hi) {

    if (hi > lo) {
        int mid = lo + (hi - lo) / 2;

        mergeSort(nums, lo, mid);
        mergeSort(nums, mid + 1, hi);

        merge(nums, lo, mid, hi);
    }
}
vector<int> sortArray(vector<int> &nums) {
    mergeSort(nums, 0, nums.size() - 1);

    return nums;
}