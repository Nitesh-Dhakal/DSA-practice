class Solution {
public:
    int counter=0;
    int finalanswer;
    void helper(TreeNode* root, int k){
        if(root==NULL)return ;
        helper(root->left,k);
        counter++;
        if(counter==k){
            finalanswer=root->val;
            return;
        }
        helper(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return finalanswer;
    }
};