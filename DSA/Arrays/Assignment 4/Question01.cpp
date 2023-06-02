#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> arr, int target){
    int low = 0;
    int high = arr.size()-1;


    while(low<=high){
        int mid = (high+low)/2;

        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }


    return false;
}

vector<int> intersectionOf3(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    int i=0,j=0,k = 0;

    vector<int> ans;

    while(i<arr1.size()){
        if(search(arr2, arr1[i]) && search(arr3, arr1[i])){
            ans.push_back(arr1[i]);
        }

        i++;

        while(i<arr1.size() && arr1[i] == arr1[i-1]){   
            i++;
        }
    }

    return ans;
}

int main(){

    vector<int> arr1 = {3,3,3};
    vector<int> arr2 = {3,3,3};
    vector<int> arr3 = {3,3,3};

    vector<int> ans = intersectionOf3(arr1,arr2,arr3);

    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}