/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
///////////OPTIMAL/////////////////
class Solution {
public:
    int solve(TreeNode* root,long long currSum,int targetSum,unordered_map<long long,int>&mp){
        if(root == nullptr) return 0;
        currSum += root->val;
        int count = 0;
        //currSum - target = prefix (means path is found if we remove prefix from currSum)
        /*if curr sum is 18 and target is 8 then if prefix 10 is found means after 10 node the sum till curr node is path sum*/
        if(mp.find(currSum-targetSum) != mp.end()){
            count += mp[currSum-targetSum];
        }
        mp[currSum]++;
        count += solve(root->left,currSum,targetSum,mp); //LEFT ANS
        count += solve(root->right,currSum,targetSum,mp); //RIGHT ANS
        //backtrack (if we return from any node then their prefix not affect another node answer)
        mp[currSum]--;
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int>mp;
        //if root value is equal to target then root is also be answer
        mp[0] = 1;
        return solve(root,0,targetSum,mp);
    }
};
//TC -> O(n)
//SC -> O(n)