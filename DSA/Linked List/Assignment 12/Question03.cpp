#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL) {}
    ListNode(int x): val(x), next(NULL) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

ListNode *findTheNthFromEnd(ListNode *head, int n){
    ListNode *slow = head;
    ListNode *fast = head;

    int move = n-1;

    while(fast != NULL && move--){
        fast = fast->next;
    }

    if(fast == NULL){
        return new ListNode(-1);
    }

    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main() { 
    ListNode *head;
    ListNode *temp1 = new ListNode(1);
    ListNode *temp2 = new ListNode(2);
    ListNode *temp3 = new ListNode(3);
    ListNode *temp4 = new ListNode(4);

    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    head = temp1;

    ListNode *ans = findTheNthFromEnd(head, 2);

    cout<<ans->val;

    return 0; 
}