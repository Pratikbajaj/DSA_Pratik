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
    void traversal(vector<int> &res,TreeNode* root){
        if(root!=nullptr){
            res.push_back(root->val);
            if(root->left){
                traversal(res,root->left);
            }
            if(root->right){
                traversal(res,root->right);
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(res,root);
        return res;
    }
};