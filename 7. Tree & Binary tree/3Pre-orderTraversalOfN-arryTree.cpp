class Solution{
    public:
    vector<int> preorder(Node* root){
        vector<int> ans;
        Preorder(root,ans);
        return ans;
    }
    void Preorder(Node *root,vector<int> ans){
        if(root==NULL)return ;
        ans.push_back(root->val);
        for(int i=0;i<root->childen.size();++i){
            Preorder(root->childen[i],ans);
        }
        return;
    }
};