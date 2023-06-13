#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};


Node* reverseDLL(Node * head)
{
    Node *Prev = NULL;
    Node  *Curr = head;
    Node *Next;
    
    while(Curr!=NULL){
        Next = Curr->next;
        
        Curr->next = Prev;
        Curr->prev = Next;
        Prev = Curr;
        Curr = Next;
    }
    
    return Prev;
}