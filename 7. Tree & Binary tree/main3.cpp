#include <bits/stdc++.h>
using namespace std;
class tree{
public:
	long long int val;
	tree *left;
	tree *right;

	tree(long long int value)
	{
	      val=value;
		  left=NULL;//left node traval
		  right=NULL;
	}
};
int search(int inorder[],int start , int end, int curr){
    for(int i=start;i<end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder,int start, int end){
    statc int idx=0;
    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){return node;}
    int pos = search(inorder, start,end,curr);
    node->left = buildTree(preorder,inorder,start, pos-1);
    node->right= bildTree(preorder,inorder,pos+1,end);

    return node;

}
void inorderPrint(Node* root){
    if(root==NULL){return;}
    intorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    Node *root = buildTree(preorder,inorder,0,4);
    inorderPrint(root);
  
}