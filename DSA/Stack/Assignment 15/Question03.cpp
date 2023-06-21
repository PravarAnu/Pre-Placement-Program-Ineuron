#include <iostream>
#include <queue>
using namespace std;


class MyStack {
  public:
    queue<int> q1;
    queue<int> q2;
    int topElem;
    MyStack() {}

    void push(int x) {
        q1.push(x);
        topElem = x;
    }

    int pop() {
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int popped = q1.front();
        q1.pop();

        while (!q2.empty()) {
            push(q2.front());
            q2.pop();
        }

        return popped;
    }

    int top() { return topElem; }

    bool empty() { return q1.empty(); }
};
