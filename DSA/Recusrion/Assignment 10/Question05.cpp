#include <iostream>
#include <unordered_map>
using namespace std;

int contiSubStrWithSameChar(string s){
    unordered_map<char, int> m;

    for(auto i: s){
        m[i]++;
    }
    int ans = 0;
    for(auto i: m){
        if(i.second > 1){
            ans += 1;
        }
        ans += i.second;
    }

    return ans;
}

int main() {

    string s = "abcab";

    cout<<contiSubStrWithSameChar(s);

    return 0;
}