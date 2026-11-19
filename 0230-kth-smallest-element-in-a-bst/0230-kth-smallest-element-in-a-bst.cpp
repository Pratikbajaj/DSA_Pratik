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
    int ans;
    int count=0;
    void Kthelement(TreeNode* root,int k){
        if(root==nullptr){
            return;
        }
        Kthelement(root->left,k);
        count++;
        if(count == k){
            ans=root->val;
            return;
        }
        Kthelement(root->right,k);
        return;

    }
    int kthSmallest(TreeNode* root, int k) {
        Kthelement(root,k);
        return ans;
    }
};