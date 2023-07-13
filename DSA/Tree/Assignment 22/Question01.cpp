#include <iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

};

void bTreeToDListHelper(Node *root, Node *&prev, Node *&head) {
    if (root == NULL) {
        return;
    }

    bTreeToDListHelper(root->left, prev, head);

    if (prev == NULL) {
        head = root;
    } else {
        root->left = prev;
        prev->right = root;
    }

    prev = root;

    bTreeToDListHelper(root->right, prev, head);
}

Node *bToDLL(Node *root) {
    if (root == NULL) {
        return root;
    }
    Node *head = NULL;
    Node *prev = NULL;

    bTreeToDListHelper(root, prev, head);

    return head;
}