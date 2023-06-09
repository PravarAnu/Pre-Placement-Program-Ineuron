#include <iostream>
using namespace std;

int sqRoot(int x) {
    int s = 0;
    int e = x;

    long long int ans = -1;
    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int midMul = mid * mid;

        if (midMul == x) {
            return mid;
        } else if (midMul < x) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int main() {

    cout << sqRoot(4) << endl;
    cout << sqRoot(9) << endl;

    return 0;
}