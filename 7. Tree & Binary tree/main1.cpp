#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

class tree{
public:
	ll val;
	tree *left,*right;

	tree(ll value)
	{
		this->val=value;
		this->left=this->right=NULL;
	}
	tree *insert(ll value,tree *root)
	{
		if(root==NULL)
			return new tree(value);
		if(value<root->val)
			root->left=insert(value,root->left);
		else
			root->right=insert(value,root->right);
		return root;
	}
	void inorder(tree *root)
	{
		if(root==NULL)
			return;
		inorder(root->left);
		cout << root->val<<" ";
		inorder(root->right);
	}
	void preorder(tree *root)
	{
		if(root==NULL)
			return;
		cout<<root->val<<" ";
		preorder(root->left);
		preorder(root->right);
	}
	void postorder(tree *root)
	{
		if(root==NULL)
			return;
		postorder(root->left);
		postorder(root->right);
		cout<<root->val<<" ";
	}
};
int main(){
    // fast;
    // take_input;
    tree *root=NULL;
    root=root->insert(10,root);
    root=root->insert(11,root);
    root=root->insert(6,root);
	root=root->insert(4,root);
    root->inorder(root);//alwage sorted output(L Root R)
    cout<<endl;
    root->preorder(root);//always(Root l R)
    cout<<endl;
    root->postorder(root);//always( l R Root)
}