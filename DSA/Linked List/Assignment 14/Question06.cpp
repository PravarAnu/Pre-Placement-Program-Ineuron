#include <iostream>
using namespace std;

class ListNode {
  public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int length(ListNode *head) {
    int count = 0;
    if (head == NULL) {
        return count;
    }

    while (head != NULL) {
        head = head->next;
        count++;
    }

    return count;
}

ListNode *rotateRight(ListNode *head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    int size = length(head);

    if ((k % size) < size && (k % size) > 0) {
        int n = size - (k % size) - 1;
        ListNode *prev = head;
        ListNode *curr;

        while (n) {
            prev = prev->next;
            n--;
        }

        curr = prev->next;
        prev->next = NULL;

        prev = curr;

        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = head;
        head = prev;
    }

    return head;
}

int main() { return 0; }