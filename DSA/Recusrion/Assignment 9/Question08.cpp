#include <iostream>
#include <vector>
using namespace std;

int productOfAll(vector<int> arr, int i=0){
    if(i == arr.size()-1){
        return arr[i];
    }

    return arr[i] * productOfAll(arr, i+1);
}

int main() {

    cout<<productOfAll({1, 6, 3});

    return 0;
}