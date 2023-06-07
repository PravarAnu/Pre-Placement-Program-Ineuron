#include <iostream>
using namespace std;

void powerSet(string s, int i=0, string output = ""){
    if(i == s.size()){
        cout<<output<<endl;
        return;
    }

    string op1 = output + s[i];
    string op2 = output;

    powerSet(s, i+1, op1);
    powerSet(s, i+1, op2);
}

int main() {

    string s = "abc";

    powerSet(s);

    return 0;
}