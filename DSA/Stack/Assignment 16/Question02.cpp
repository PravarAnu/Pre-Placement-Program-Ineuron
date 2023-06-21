#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void sortTheStack(stack<int> &temp, int topElem) {
    stack<int> temp2;

    while (!temp.empty() && temp.top() > topElem) {
        temp2.push(temp.top());
        temp.pop();
    }

    temp.push(topElem);

    while (!temp2.empty()) {
        temp.push(temp2.top());
        temp2.pop();
    }
}

void SortStack(stack<int> &s) {

    if (s.size() == 0 || s.size() == 1) {
        return;
    }
    stack<int> temp;

    while (!s.empty()) {
        int topElem = s.top();
        sortTheStack(temp, topElem);
        s.pop();
    }

    s = temp;
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    SortStack(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}