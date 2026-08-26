class Solution {
public:
   TreeNode*  helper(vector<int>& nums,int left,int right){
        int mid=left+(right-left)/2;
        if(left>right)return NULL;
        TreeNode* root= new   TreeNode(nums[mid]);
        root->left=helper(nums,left,mid-1);
        root->right=helper(nums,mid+1,right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return  helper(nums,0,nums.size()-1);
    }
};