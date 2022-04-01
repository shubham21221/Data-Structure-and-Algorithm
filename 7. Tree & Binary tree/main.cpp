#include <bits/stdc++.h>
using namespace std;

class tree
{
public:
    long long int val;
    tree *left;
    tree *right;

    tree(long long int value)
    {
        this->val = value;
        this->left = NULL;
        this->right = NULL;
    }
    tree *insert(long long int value, tree *root)
    {
        if (root == NULL)
            return new tree(value);
        if (value < root->val)
            root->left = insert(value, root->left);
        else
            root->right = insert(value, root->right);
            return root;
    }
    void inorder(tree *root){
        if(root==NULL) return ;

        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
};

int main()
{
    tree *root = NULL;
    root = root->insert(10, root);
    root = root->insert(11, root);
    root = root->insert(14, root);
    root = root->insert(12, root);

    root->inorder(root);
}