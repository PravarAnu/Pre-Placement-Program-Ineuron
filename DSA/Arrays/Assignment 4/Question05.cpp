#include <iostream>
using namespace std;

int arrangeCoins(int n) {

    int i = 1;
    long long int count = 1;
    while (true) {
        if (count == n) {
            return i;
        } else if (count < n) {
            count += i + 1;
            i++;
        } else {
            return i - 1;
        }
    }
}