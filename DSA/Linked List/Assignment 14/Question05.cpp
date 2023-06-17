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

ListNode *oddEvenList(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode *odd = new ListNode(-1);
    ListNode *even = new ListNode(-1);

    ListNode *oddPtr = odd;
    ListNode *evenPtr = even;

    ListNode *temp = head;
    int i = 1;
    while (temp != NULL) {
        ListNode *tempnum = new ListNode(temp->val);
        if (i % 2 == 0) {
            evenPtr->next = tempnum;
            evenPtr = tempnum;
        } else {
            oddPtr->next = tempnum;
            oddPtr = tempnum;
        }

        temp = temp->next;
        i++;
    }

    odd = odd->next;

    even = even->next;

    oddPtr->next = even;

    return odd;
}

int main() { return 0; }