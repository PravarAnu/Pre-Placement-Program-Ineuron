#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(head == NULL){
        return NULL;
    }
    
    Node *temp = head;
    
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }else{
            temp = temp->next;
        }
        
    }
    
    return head;
}

int main() { return 0; }