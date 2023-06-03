#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> m(n, vector<int>(n, 0));
    int rowS = 0;
    int rowE = n - 1;
    int colS = 0;
    int colE = n - 1;

    int i = 0;
    while (rowS <= rowE && colS <= colE) {
        for (int col = colS; col <= colE; col++) {
            m[rowS][col] = ++i;
        }
        rowS++;

        for (int row = rowS; row <= rowE; row++) {
            m[row][colE] = ++i;
        }
        colE--;

        if (colS <= colE) {
            for (int col = colE; col >= colS; col--) {
                m[rowE][col] = ++i;
            }
            rowE--;
        }

        if (rowS <= rowE) {
            for (int row = rowE; row >= rowS; row--) {
                m[row][colS] = ++i;
            }
            colS++;
        }
    }

    return m;
}