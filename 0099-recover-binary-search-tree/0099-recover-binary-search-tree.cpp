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
    TreeNode *prev = NULL , *first = NULL , *second = NULL;
    void rec(TreeNode* r){
        if(!r) return;
        rec(r->left);
        if(prev && prev->val > r->val){
            if(!first) first =prev;
            second = r;
        }
        prev = r;
        rec(r->right);
    }
    void recoverTree(TreeNode* root) {
        rec(root);
        swap(first->val,second->val);
    }
};