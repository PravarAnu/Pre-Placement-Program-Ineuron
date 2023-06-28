#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums) {

    vector<int> pos;
    vector<int> neg;

    for (auto i : nums) {
        if (i >= 0) {
            pos.push_back(i);
        } else {
            neg.push_back(i);
        }
    }

    int posS = 0;
    int negS = 0;
    int posE = pos.size() - 1;
    int negE = neg.size() - 1;

    int i = 0;
    while (posS <= posE && negS <= negE) {
        nums[i] = pos[posS];
        nums[i + 1] = neg[negS];

        i += 2;
        posS++;
        negS++;
    }

    while (posS <= posE) {
        nums[i] = pos[posS];
        i++;
        posS++;
    }

    while (negS <= negE) {
        nums[i] = neg[negS];
        negS++;
        i++;
    }

    return nums;
}