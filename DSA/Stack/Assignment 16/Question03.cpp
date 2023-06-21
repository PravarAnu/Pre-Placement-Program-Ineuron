#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void deleteMid(stack<int> &s, int sizeOfStack) {
    if (s.size() == 0) {
        return;
    }

    if (s.size() == 1) {
        s.pop();
        return;
    }

    stack<int> temp;
    int mid = sizeOfStack / 2;

    while (mid--) {
        temp.push(s.top());
        s.pop();
    }

    s.pop();

    while (!temp.empty()) {
        s.push(temp.top());

        temp.pop();
    }
}