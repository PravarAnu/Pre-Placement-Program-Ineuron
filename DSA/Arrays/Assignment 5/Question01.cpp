#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m, vector<int> (n));

        int i=0;
        int j=0;

        if((original.size() > (m*n))  || (original.size() < (m*n)) ){
            return {};
        }

        for(auto k: original){
            v[i][j] = k;
            j++;

            if(j==n){
                i++;
                j = 0;
            }
        }


        return v;
    }