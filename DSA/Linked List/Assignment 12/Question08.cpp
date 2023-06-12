#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(): val(0), next(NULL){}
    Node(int x): val(x), next(NULL){}
};

bool isCircular(Node *head)
{
   if(head == NULL || head->next == NULL){
       return false;
   }
   
   Node *curr = head->next;
   
   
   while(curr!=head){
       if(curr->next == NULL){
           return false;
       }
       curr = curr->next;
   }
   
   return true;
}


int main() { return 0; }