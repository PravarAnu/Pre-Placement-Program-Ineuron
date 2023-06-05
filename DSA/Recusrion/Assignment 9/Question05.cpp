#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void findMax(vector<int> arr, int i, int &maxi){
    if(i> arr.size()){
        return;
    }

    maxi = max(maxi, arr[i]);

    findMax(arr,i+1, maxi);
}

int main() {

    int maxi = INT_MIN;

    findMax({1, 4, 45, 6, 10, -8}, 0, maxi);
    cout<<maxi;

    return 0;
}