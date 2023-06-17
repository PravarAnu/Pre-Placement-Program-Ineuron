#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node *head) {
    if (head == NULL) {
        return;
    }

    Node *slow, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            break;
        }
    }
    if (fast == NULL || fast->next == NULL) {
        return;
    }

    slow = head;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    Node *temp = slow;

    while (temp->next != slow) {
        temp = temp->next;
    }

    temp->next = NULL;
}
