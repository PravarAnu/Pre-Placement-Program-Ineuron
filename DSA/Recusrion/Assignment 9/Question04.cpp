#include <iostream>
using namespace std;

int nPx(int n, int x){
    if(x == 0){
        return 1;
    }

    if(x == 1){
        return n;
    }

    int ans = nPx(n, x/2);

    if(x%2 == 0){
        return ans * ans;
    }else{
        return n * ans * ans;
    }
}

int main() {

    cout<<nPx(5,2)<<endl;
    cout<<nPx(2,5)<<endl;


    return 0;
}