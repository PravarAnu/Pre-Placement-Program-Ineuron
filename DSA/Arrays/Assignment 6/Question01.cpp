#include <iostream>
#include <vector>
using namespace std;

vector<int> diStringMatch(string s) {
    int low = 0;
    int high = s.size();

    vector<int> ans;

    for (auto i : s) {
        if (i == 'I') {
            ans.push_back(low);
            low++;
        } else {
            ans.push_back(high);
            high--;
        }
    }

    while (low <= high) {
        ans.push_back(low);
        low++;
    }

    return ans;
}