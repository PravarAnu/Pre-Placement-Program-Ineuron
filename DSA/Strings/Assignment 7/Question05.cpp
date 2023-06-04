#include<bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k) {

    int i = 0;
    int j = 2 * k - 1;

    while (j <= s.size() - 1) {
        reverseK(s, i, k);

        i = j + 1;
        j += 2 * k;
    }

    if (i < s.size() - 1) {
        int size = s.size() - i;

        if (size < k) {
            reverseK(s, i, size);
        } else if (size >= k && size < (2 * k)) {
            reverseK(s, i, k);
        }
    }

    return s;
}

void reverseK(string &s, int i, int k) {
    int end = i + k - 1;

    while (i <= end) {
        char temp = s[i];
        s[i] = s[end];
        s[end] = temp;

        i++;
        end--;
    }
}