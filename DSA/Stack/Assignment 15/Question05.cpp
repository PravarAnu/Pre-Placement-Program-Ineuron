#include <iostream>
#include <stack>
using namespace std;

char *reverse(char *S, int len) {
    // code

    stack<char> st;

    for (int i = 0; i < len; i++) {
        st.push(S[i]);
    }

    int j = 0;
    while (!st.empty()) {
        S[j] = st.top();
        st.pop();
        j++;
    }

    return S;
}