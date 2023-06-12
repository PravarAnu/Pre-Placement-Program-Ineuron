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

ListNode *deleteMiddle(ListNode *head) {
    if (head->next == NULL || head == NULL) {
        return NULL;
    }

    ListNode *prev = NULL;
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;

        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;

    delete slow;
    slow = NULL;

    return head;
}

int main() { return 0; }