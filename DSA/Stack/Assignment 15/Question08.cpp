#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height) {
    vector<int> maxLeft(height.size());
    vector<int> maxRight(height.size());

    int totalTrappedWater = 0;
    maxLeft[0] = height[0];
    for (int i = 1; i < maxLeft.size(); i++) {
        maxLeft[i] = max(maxLeft[i - 1], height[i]);
    }

    maxRight[maxRight.size() - 1] = height[height.size() - 1];
    for (int i = maxRight.size() - 2; i >= 0; i--) {
        maxRight[i] = max(maxRight[i + 1], height[i]);
    }

    for (int i = 1; i < height.size() - 1; i++) {
        totalTrappedWater += (min(maxLeft[i], maxRight[i]) - height[i]);
    }

    return totalTrappedWater;
}