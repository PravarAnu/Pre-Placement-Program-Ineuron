#include <bits/stdc++.h>
using namespace std;

int checktree(int preorder[], int inorder[], int postorder[], int len) {

    if (len == 0)
        return 1;

    if (len == 1)
        return (preorder[0] == inorder[0]) && (inorder[0] == postorder[0]);

    int idx = -1, f = 0;
    for (int i = 0; i < len; ++i)
        if (inorder[i] == preorder[0]) {
            idx = i;
            break;
        }

    if (idx != -1) {
        for (int i = 0; i < len; i++)
            if (preorder[0] == postorder[i]) {
                f = 1;
                break;
            }
    }

    if (idx == -1 || f == 0)
        return 0;

    int ret1 = checktree(preorder + 1, inorder, postorder, idx);

    int ret2 = checktree(preorder + idx + 1, inorder + idx + 1, postorder + idx,
                         len - idx - 1);

    return (ret1 && ret2);
}

int main() {

    int inorder[] = {4, 2, 5, 1, 3};
    int preorder[] = {1, 2, 4, 5, 3};
    int postorder[] = {4, 5, 2, 3, 1};
    int len1 = sizeof(inorder) / sizeof(inorder[0]);
    int len2 = sizeof(preorder) / sizeof(preorder[0]);
    int len3 = sizeof(postorder) / sizeof(postorder[0]);

    if ((len1 == len2) && (len2 == len3)) {

        bool res = checktree(preorder, inorder, postorder, len1);

        (res) ? cout << "Yes" : cout << "No";
    } else
        cout << "No\n";

    return 0;
}
