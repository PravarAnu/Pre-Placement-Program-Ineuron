#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> leftSmaller(int n, int a[]) {
    // code here
    stack<int> s;
    vector<int> ans;

    s.push(a[0]);
    ans.push_back(-1);

    for (int i = 1; i < n; i++) {
        while (!s.empty() && s.top() >= a[i]) {
            s.pop();
        }

        if (s.empty()) {
            s.push(a[i]);
            ans.push_back(-1);
        } else if (s.top() < a[i]) {
            ans.push_back(s.top());
            s.push(a[i]);
        }
    }

    return ans;
}