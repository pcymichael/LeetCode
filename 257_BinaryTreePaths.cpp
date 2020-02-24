/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> index;
        if(!root)
            return index;
        DFS(root,index,"");
        return index;
    }
    void DFS(TreeNode *root, vector<string> &index, string str){
        str+=to_string(root->val);
        if(root->left||root->right){
            str+="->";
            if(root->left)
                DFS(root->left, index, str);
            if(root->right)
                DFS(root->right, index, str);
        }
        else 
            index.push_back(str);
    }
};
//BFD better than DFS
