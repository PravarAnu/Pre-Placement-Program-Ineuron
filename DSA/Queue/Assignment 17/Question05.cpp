#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int findTheWinner(int n, int k) {
    queue<int> q;

    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    while (q.size() != 1) {
        int n = k - 1;

        while (!q.empty() && n > 0) {
            int frontElem = q.front();

            q.pop();
            q.push(frontElem);
            n--;
        }

        q.pop();
    }

    return q.front();
}