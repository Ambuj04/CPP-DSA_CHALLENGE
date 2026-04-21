output by this code  
class Solution {
public:
    int helper(TreeNode* root, TreeNode*& ans) {
        if (!root) return 0;
        int left = helper(root->left, ans);
        int right = helper(root->right, ans);
        //Also depth is not compare. which cause wrong answer That's the reason we need pair for store pair and depth for comparison
        if (left == right) {
            ans = root;
            //this ans is overwrite if any same height node available in right node
        }
        return 1 + max(left, right);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        TreeNode* ans = nullptr;
        helper(root, ans);
        return ans;
    }
};