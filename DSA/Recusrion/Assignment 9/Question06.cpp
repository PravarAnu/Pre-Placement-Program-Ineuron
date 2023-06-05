#include <iostream>
using namespace std;

int findTheNth(int a, int d, int n){
    return a + (n-1) * d;
}

int main() {

    cout<<findTheNth(5,2,10);

    return 0;
}