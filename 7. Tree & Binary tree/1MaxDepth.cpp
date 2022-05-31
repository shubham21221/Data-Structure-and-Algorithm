#include <iostream.h>
using namespace std;

class Solution{
    public:
    int maxDepth(TreeNode* root){
        if(root == NULL) return 0;

        int lefth = 1+ maxDepth(root->left);
        int right = 1+ maxDepth(root->right);
        return max(lefth,righth)
    }
};

int main(){
    Node* root = NULL;
    root = 

}