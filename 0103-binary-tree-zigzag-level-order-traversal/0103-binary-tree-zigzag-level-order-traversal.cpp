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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root){
            return res; 
        }
        queue<TreeNode*> q;
        q.push(root);
        bool leftToright = true;

        while(!q.empty()){
            int sz = q.size();
            vector<int> level;
            for(int i=0;i<sz;i++){
                TreeNode* c=q.front();
                q.pop();
                level.push_back(c->val);
                if(c->left) q.push(c->left);
                if(c->right) q.push(c->right);
            }
            if(!leftToright){
                reverse(level.begin(),level.end());
            }
            res.push_back(level);
            leftToright = !leftToright;
        } 
        return res;
    }
};