#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars) {
    int count = 1;
    int ans = 0;
    vector<char> res;

    if (chars.size() == 1) {
        return 1;
    }

    for (int i = 1; i < chars.size(); i++) {
        if (chars[i] != chars[i - 1]) {
            if (count == 1) {
                ans += 1;
                res.push_back(chars[i - 1]);
            } else if (count >= 10) {
                ans += log10(count) + 2;
                res.push_back(chars[i - 1]);
                countDig(res, count);
            } else {
                ans += 2;
                res.push_back(chars[i - 1]);
                res.push_back('0' + count);
            }

            count = 1;
        } else {
            count++;
        }
    }

    if (chars[chars.size() - 1] != chars[chars.size() - 2]) {
        ans += 1;
        res.push_back(chars[chars.size() - 1]);
    } else {
        if (count >= 10) {
            ans += log10(count) + 2;
            res.push_back(chars[chars.size() - 1]);
            countDig(res, count);
        } else {
            ans += 2;
            res.push_back(chars[chars.size() - 1]);
            res.push_back('0' + count);
        }
    }

    chars.clear();

    chars = res;

    return ans;
}

void countDig(vector<char> &res, int count) {
    vector<char> digit;

    while (count > 0) {
        int n = count % 10;
        digit.push_back('0' + n);

        count = count / 10;
    }

    for (int i = digit.size() - 1; i >= 0; i--) {
        res.push_back(digit[i]);
    }
}