#include <iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n<=0){
        return false;
    }


    if(n&(n-1)){
        return false;
    }

    return true;
}


int main() {

    cout<<powerOfTwo(16)<<endl;
    cout<<powerOfTwo(6)<<endl;


    return 0;
}
