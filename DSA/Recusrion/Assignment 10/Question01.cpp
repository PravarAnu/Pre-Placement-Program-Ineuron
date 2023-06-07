#include <iostream>
using namespace std;

bool powerOf3(int num, int three){
    if(three == num){
        return true;
    }

    if(three > num){
        return false;
    }

    return powerOf3(num, three * 3);
}

int main() {

    cout<<powerOf3(81, 1);

    return 0;
}