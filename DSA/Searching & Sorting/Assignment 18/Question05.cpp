#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> s;

    for (auto &i : nums) {
        if (s.find(i) == s.end()) {
            s.insert(i);
        } else {
            return true;
        }
    }

    return false;
}