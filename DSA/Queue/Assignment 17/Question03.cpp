#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int countStudents(vector<int> &students, vector<int> &sandwiches) {
    queue<int> st;

    for (auto i : students) {
        st.push(i);
    }

    int i = 0;

    while (i < sandwiches.size()) {
        if (sandwiches[i] == st.front()) {
            st.pop();
            i++;
        } else {

            int size = st.size();
            while (size > 0 && st.front() != sandwiches[i]) {
                int frontElem = st.front();
                st.pop();

                st.push(frontElem);

                size--;
            }

            if (size == 0) {
                return st.size();
            }
        }
    }

    return 0;
}