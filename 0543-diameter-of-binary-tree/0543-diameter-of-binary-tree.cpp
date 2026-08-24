class Solution {
public:
    int maxx=0;
    int depth(TreeNode* root){
        int add=0;
        if(root==NULL)return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        add=left+right;
        maxx=max(add,maxx);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxx;
    }
};