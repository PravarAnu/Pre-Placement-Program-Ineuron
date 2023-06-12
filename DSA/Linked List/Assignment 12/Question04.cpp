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

ListNode *reverseList(ListNode *head) {
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;

    return head;
}

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

bool isPalindrome(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        ;
        slow = slow->next;
    }

    fast = reverseList(slow->next);
    slow = head;
    while (fast != NULL) {
        if (fast->val != slow->val) {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
    }

    return true;
}

int main() { return 0; }