class Codec {
public:

    void helper(TreeNode* root,string& res){
        
        if(root==NULL){
            res +="N,";
            return;
        }
        res += to_string(root->val)+",";
        helper(root->left,res);
        helper(root->right,res);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res = "";
        helper(root,res);
        return res;
    }

    // Decodes your encoded data to tree.
  TreeNode* deserializeHelper(queue<string>& q) {
        string currentVal = q.front();
        q.pop();
        
        if (currentVal == "N") {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(stoi(currentVal));
        
        root->left = deserializeHelper(q);
        root->right = deserializeHelper(q);
        
        return root;
    }

    TreeNode* deserialize(string data) {
        queue<string> q;
        stringstream ss(data);
        string chunk;
        
        while (getline(ss, chunk, ',')) {
            q.push(chunk);
        }
        
        return deserializeHelper(q);
    }
};
