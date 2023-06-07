#include <iostream>
using namespace std;

int lastRemaining(int n) {
    int step = 1;
    int head = 1;
    bool left = true;
    int remaining = n;

    while (remaining > 1) {
        if (left || remaining % 2 == 1) {
            head += step;
        }
        step *= 2;
        remaining /= 2;
        left = !left;
    }

    return head;
}

int main() { return 0; }