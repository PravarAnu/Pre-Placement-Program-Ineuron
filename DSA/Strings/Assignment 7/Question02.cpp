#include <iostream>
#include <vector> 
#include <unordered_set>
using namespace std;





bool isStrobogrammatic(string &num) {
    // write your code here
    unordered_set<char> s = {'1', '8', '6', '9', '0'};

    for (int i = 0; i < num.size(); i++) {
        if (s.find(num[i]) != s.end()) {
            if (num[i] == '9') {
                num[i] = '6';
            }
        } else {
            return false;
        }
    }

    for (int i = 0; i < num.size() / 2; i++) {
        if (num[i] != num[num.size() - i - 1]) {
            return false;
        }
    }

    return true;
}



int main() {

    string s = "0110";

    cout<<isStrobogrammatic(s);

    return 0;
}