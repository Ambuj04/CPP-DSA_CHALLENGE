class Solution {
  public:
    void dfs(Node* root, int level, vector<int>& ans) {
        if(root == NULL) return;
        // first node of this level
        if(level == ans.size()) {
            ans.push_back(root->data);
        }
        dfs(root->left, level + 1, ans);
        dfs(root->right, level + 1, ans);
    }
    vector<int> leftView(Node *root) {
        vector<int> ans;
        dfs(root, 0, ans);
        return ans;
    }
};
//TC->O(n)
//SC->O(H) H = height of tree