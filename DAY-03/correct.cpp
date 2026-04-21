/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#define nodeDepth pair<TreeNode*, int>
//pair<TreeNode*,int> -> TreeNode* is used for store node and int is used for store depth
class Solution {
public:
    nodeDepth helper(TreeNode* root) {
        if (!root) {
            return {nullptr, 0};
        }
        nodeDepth left = helper(root->left);
        nodeDepth right = helper(root->right);
        if (left.second < right.second) {
            return {right.first, 1 + right.second};
        }
        if (left.second > right.second) {
            return {left.first, 1 + left.second};
        }
        //If both sides have same depth, current node is LCA of deepest leaves
        return {root, 1 + left.second};
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) { return helper(root).first; }
};