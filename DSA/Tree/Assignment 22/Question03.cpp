#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node *newNode(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

bool isleafnode(Node *root) { return !root->left && !root->right; }

void printRootToLeaf(Node *root) {

    if (!root)
        return;

    string path = "";

    stack<pair<Node *, string>> s;

    s.push({root, path});

    while (!s.empty()) {

        auto it = s.top();
        s.pop();

        root = it.first;
        path = it.second;

        string curr = to_string(root->data) + " ";

        path += curr;

        if (isleafnode(root))
            cout << path << endl;

        if (root->right)
            s.push({root->right, path});
        if (root->left)
            s.push({root->left, path});
    }
}

int main() {

    Node *root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);

    printRootToLeaf(root);

    return 0;
}
