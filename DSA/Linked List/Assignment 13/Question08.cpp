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

Node *deleteNode(Node *head, int x) {
    Node *temp = head;
    if (head == NULL && x > 0) {
        return head;
    } else if (x == 1) {
        if (temp->next == NULL) {
            head = temp->next;
            delete temp;
            return head;
        } else {
            head = temp->next;
            temp->next->prev = NULL;
            temp->next = NULL;

            delete temp;
            return head;
        }
    } else {
        x--;
        while (x--) {
            temp = temp->next;
        }
        if (temp->next != NULL) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->next = NULL;
            temp->prev = NULL;

            delete temp;
        } else {
            temp->prev->next = NULL;
            temp->prev = NULL;

            delete temp;
        }
    }

    return head;
}

int main() { return 0; }