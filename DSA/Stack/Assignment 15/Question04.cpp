#include <iostream>
#include <stack>
using namespace std;


void insertAtBottom(stack<int> &s, int x) {
    if (s.size() == 0) {
        s.push(x);
        return;
    }

    int topElem = s.top();
    s.pop();
    insertAtBottom(s, x);

    s.push(topElem);
}
void Reverse(stack<int> &St) {
    if (St.empty()) {
        return;
    }

    int topElem = St.top();

    St.pop();
    Reverse(St);

    insertAtBottom(St, topElem);
}