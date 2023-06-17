#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL) {}
    ListNode(int x): val(x) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

int main() { return 0; }