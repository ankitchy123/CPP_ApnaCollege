#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (!isBalanced(root->left))
    {
        return false;
    }
    if (!isBalanced(root->right))
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isHeightBalanced(Node *root, int *h)
{
    if (root == NULL)
    {
        return true;
    }

    int lh = 0, rh = 0;
    if (!isHeightBalanced(root->left, &lh))
    {
        return false;
    }
    if (!isHeightBalanced(root->right, &rh))
    {
        return false;
    }

    *h = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    // root->right->right = new Node(7);
    root->left->left->left = new Node(7);
    root->left->left->left->left = new Node(8);

    /*  
             1
           /   \
          2     3
         / \   / 
        4   5 6   
       /
      7
     /
    8
    */

    if (isBalanced(root))
    {
        cout << "Tree is balanced. IsBalanced function" << endl;
    }
    else
    {
        cout << "Tree in unbalanced. IsBalanced function" << endl;
    }

    int h = 0;
    if (isHeightBalanced(root, &h))
    {
        cout << "Tree is balanced. IsHeightBalanced function" << endl;
    }
    else
    {
        cout << "Tree in unbalanced. IsHeightBalanced function" << endl;
    }

    return 0;
}