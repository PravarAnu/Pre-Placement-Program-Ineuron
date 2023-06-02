#include <iostream>
#include <vector> 
#include <unordered_set>
using namespace std;

bool validMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        
        for(; i<arr.size()-1; i++){
            if(arr[i]>=arr[i+1]){
                break;
            }
        }
        
        for(; j>0; j--){
            if(arr[j]>=arr[j-1]){
                break;
            }
        }
        
        if(i!=0 && j!=arr.size()-1 && i==j){
            return true;
        }
        
        return false;
    }