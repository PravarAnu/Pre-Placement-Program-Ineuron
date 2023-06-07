#include <iostream>
using namespace std;

int count = 0;

void towerOfHanoi(int src, int destination, int helper, int n){
    if(n == 1){
        cout<<"move disk "<<n<<" from rod "<<src<<" to "<< destination<<endl;
        count++;
        return;
    }

    towerOfHanoi(src, helper, destination, n-1);

    cout<<"move disk "<<n<<" from rod "<<src<<" to "<< destination<<endl;
    count++;

    towerOfHanoi(helper, destination, src, n-1);
}

int main() {

    int src = 1;
    int helper = 2;
    int destination = 3;

    int plates = 3;

    towerOfHanoi(src, destination, helper, plates);
    cout<<"Total Moves required: "<<count<<endl;


    return 0;
}