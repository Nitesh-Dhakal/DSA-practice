class Solution {
public:
    vector<int> ans;
    void helper(TreeNode* root) {
        queue<TreeNode*> q;
        if (root == NULL)
            return;
        TreeNode* current = root;
        q.push(current);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                current = q.front();
                q.pop();
                if (i == size - 1) {
                    ans.push_back(current->val);
                }
                if (current->left != NULL) {
                    q.push(current->left);
                };
                if (current->right != NULL) {
                    q.push(current->right);
                }
            }
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        helper(root);
        return ans;
    }
};