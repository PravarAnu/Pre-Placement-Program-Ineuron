#include <iostream>
#include <algorithm>
using namespace std;

long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        
        long long int ans = 0;
        
        for(int i=0; i<n; i++){
            ans += (a[i]*b[n-i-1]);
        }
        
        return ans;
    }