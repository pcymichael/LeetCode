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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> head;
        if(!root)
            return head;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qSize=q.size();
            vector<int> levelVal;
            for(int i=0;i<qSize;i++){
                TreeNode* curr=q.front();
                q.pop();           
                levelVal.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            head.push_back(levelVal);
        }   
        reverse(head.begin(),head.end());
        return head;
    }
};
