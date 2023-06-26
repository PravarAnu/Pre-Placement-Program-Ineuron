#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        int start = t-3000;
        int end = t;

        int size = q.size();
        while(size>0 && q.front()<start){
            q.pop();
            size--;
        }

        if(size!=0){
            return q.size();
        }

        return 0;
    }
};