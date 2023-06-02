#include <iostream>
#include <vector>
using namespace std;
int maxCount(int m, int n, vector<vector<int>> &ops) {
    int minx = m;
    int miny = n;
    for (auto i : ops) {
        minx = min(minx, i[0]);
        miny = min(miny, i[1]);
    }

    return minx * miny;
}