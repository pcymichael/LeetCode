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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        if((sum-root->val)==0 && !root->left && !root->right) 
            return true;
        else if(root->left && root->right)
            return hasPathSum(root->left, sum-root->val)||hasPathSum(root->right, sum-root->val);
        else if(root->left)
            return hasPathSum(root->left, sum-root->val);
        else if(root->right)
            return hasPathSum(root->right, sum-root->val);
        return false;
    }
};