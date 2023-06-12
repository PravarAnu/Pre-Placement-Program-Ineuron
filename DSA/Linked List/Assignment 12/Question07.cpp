#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(): val(0), next(NULL) {}
    ListNode(int x): val(x) , next(NULL) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

void mergeAlternatively(ListNode *l1, ListNode *l2){

    ListNode *list1 = l1;
    ListNode *list2 = l2;


    while(list1!=NULL && list2!=NULL){

        ListNode *temp1 = list1;
        ListNode *nextemp1 = list1->next;
        ListNode *temp2 = list2;
        ListNode *nextemp2 = list2->next;

        temp1->next = temp2;
        temp2->next = nextemp1;

        list1 = nextemp1;
        list2 = nextemp2;
    }

    if(list2 != NULL){
        ListNode *temp = l1;

        while(temp->next!=NULL){
            temp = temp->next;
        }

        temp->next = list2;
    }
}
int main() { 
    ListNode *head1;
    ListNode *head2;

    ListNode *temp11 = new ListNode(5);
    ListNode *temp12 = new ListNode(7);
    ListNode *temp13 = new ListNode(17);
    ListNode *temp14 = new ListNode(13);
    ListNode *temp15 = new ListNode(11);

    temp11->next = temp12;
    temp12->next = temp13;
    temp13->next = temp14;
    temp14->next = temp15;

    head1 = temp11;

    ListNode *temp21 = new ListNode(12);
    ListNode *temp22 = new ListNode(10);
    ListNode *temp23 = new ListNode(2);
    ListNode *temp24 = new ListNode(4);
    ListNode *temp25 = new ListNode(6);


    temp21->next = temp22;
    temp22->next = temp23;
    temp23->next = temp24;
    temp24->next = temp25;


    head2 = temp21;


    mergeAlternatively(head1, head2);


    while(head1 != NULL){
        cout<<head1->val<<" ";

        head1 = head1->next;
    }

    return 0; 
    
}