class Solution {
    unordered_map<int, int> inMap;
    int preIndex = 0;

public:
    TreeNode* buildTreeHelper(vector<int>& preorder, int inStart, int inEnd) {
        if (inStart > inEnd) {
            return NULL;
        }

        int rootVal = preorder[preIndex];
        preIndex++;
        
        TreeNode* root = new TreeNode(rootVal);

        int mid = inMap[rootVal];

        root->left = buildTreeHelper(preorder, inStart, mid-1);
        
        root->right = buildTreeHelper(preorder,mid+1,inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        
        return buildTreeHelper(preorder, 0, inorder.size()-1);
    }
};