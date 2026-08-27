class Solution {
public:
    bool helper(TreeNode* rootleft,TreeNode* rootright){
        if(rootleft==NULL && rootright==NULL)return true;
        if(rootleft==NULL && rootright!=NULL || rootleft!=NULL && rootright==NULL)return false;
        if(rootleft->val!=rootright->val)return false;
        return helper(rootleft->left,rootright->right)&&helper(rootleft->right, rootright->left);
     }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};