class Solution {
    unordered_map<int, int>map;
    int post;
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int left ,int right){
        if(left>right)return NULL;
        int val=postorder[post];
        int mid=map[val];
        TreeNode* root=new TreeNode(val);
        post--;
        root->right=helper(inorder,postorder,mid+1,right);
        root->left=helper(inorder,postorder,left,mid-1);
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        post=postorder.size()-1;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
      
        return helper(inorder,postorder,0,inorder.size()-1);
    }
};