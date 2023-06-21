#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string s) {
    // Your code here
    stack<int> st;
    for (auto i : s) {
        if (isdigit(i))
            st.push(i - '0');
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (i == '+')
                st.push(a + b);
            else if (i == '-')
                st.push(b - a);
            else if (i == '*')
                st.push(a * b);
            else
                st.push(b / a);
        }
    }
    return st.top();
}