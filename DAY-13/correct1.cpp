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
///////////BRUTE FORCE/////////////////
class Solution {
public:
    int numberOfPaths(TreeNode* root, int targetSum, long long sum) {
        if (root == nullptr) {
            return 0;
        }
        sum += root->val;
        int count = 0;
        if (sum == targetSum) {
            count++;
        }
        int leftside  = numberOfPaths(root->left, targetSum, sum);
        int rightside =   numberOfPaths(root->right, targetSum, sum);
        int total = count + leftside + rightside;
        return total;
    }
    int traverseNode(TreeNode* root, int targetSum) {
        if(root == nullptr) return 0;
        long long sum = 0;
        return numberOfPaths(root, targetSum, sum) +
               traverseNode(root->left, targetSum) +
               traverseNode(root->right, targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        return traverseNode(root, targetSum);
    }
};
//TC -> O(n^2)
//SC -> O(n)