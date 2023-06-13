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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *head = new ListNode(-1);
    ListNode *tail = head;

    while (list1 != NULL && list2 != NULL) {
        ListNode *temp;
        if (list1->val > list2->val) {
            temp = new ListNode(list2->val);
            tail->next = temp;
            tail = temp;
            list2 = list2->next;
        } else {
            temp = new ListNode(list1->val);
            tail->next = temp;
            tail = temp;
            list1 = list1->next;
        }
    }

    if (list1 != NULL) {
        tail->next = list1;
    }

    if (list2 != NULL) {
        tail->next = list2;
    }

    return head->next;
}

int main() { return 0; }