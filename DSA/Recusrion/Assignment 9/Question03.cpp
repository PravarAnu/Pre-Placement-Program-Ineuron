#include <iostream>
#include <unordered_map>
using namespace std;

int factorial(int n){
    if(n == 0 || n ==1){
        return 1;
    }


    return n * factorial(n-1);
}

int factorialOptimized(int n, unordered_map<int,int> &m){

    if(n == 0 || n ==1){
        return 1;
    }

    if(m.find(n) != m.end()){
        return m[n];
    }

    return m[n] = n * factorialOptimized(n-1, m);
}

int main(){
    unordered_map<int,int> m;
    cout<<factorialOptimized(12,m)<<endl;
    cout<<factorial(12);

    return 0;
}