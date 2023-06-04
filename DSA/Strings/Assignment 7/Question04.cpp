#include <iostream>
#include <vector>
using namespace std;

void stringReverse(string &s, int start, int end) {
    while (start <= end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

string reverseWords(string s) {
    vector<string> ans;

    vector<int> spaces;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            spaces.push_back(i);
        }
    }

    int i = 0;

    for (int j = 0; j < spaces.size(); j++) {
        if (i != spaces[j]) {
            stringReverse(s, i, spaces[j] - 1);
        }

        i = spaces[j] + 1;
    }

    stringReverse(s, i, s.size() - 1);

    return s;
}



int main() { return 0; }