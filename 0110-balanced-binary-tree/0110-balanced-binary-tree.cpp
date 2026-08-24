class Solution {
public:
    int depth(TreeNode* root){
        int diff=0;
        if(root==NULL)return 0;
        int left=depth(root->left);
        if(left==-1)return -1;
        int right=depth(root->right);
        if(right==-1)return -1;
        if(left>right){
            diff=left-right;
        }
        else{
            diff=right-left;
        }
        if(diff>1)return -1;
        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(depth(root)==-1){
            return false;
        }
        return true;
    }
};