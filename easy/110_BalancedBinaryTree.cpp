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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        bool balance = true;
        height(root, &balance);
        return balance;
    }
    int height(TreeNode* root, bool* balance){
        if(!root)
            return 0;
        int left = height(root->left, balance);
        int right = height(root->right, balance);
        if(abs(left-right)>1){
            *balance=false;
            return -1;
        }
        return max(left, right)+1;  
    }
};