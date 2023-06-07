#include <iostream>
using namespace std;

int lengthOfString(string s, int i=0){
    if(i == s.size()){
        return i;
    }


    return lengthOfString(s, i+1);
}

int main() {

    cout<<lengthOfString("GEEKSFORGEEKS");

    return 0;
}