#include <iostream>
using namespace std;

int sumTillN(int n){
    return n*((n+1)/2);
}

int main() {

    cout<<sumTillN(5)<<endl;
    cout<<sumTillN(3)<<endl;


    return 0;
}