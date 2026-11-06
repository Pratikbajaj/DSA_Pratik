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
// class Solution {
// public:
//     TreeNode* build(TreeNode* &node,vector<int> nums,int lo,int hi){
//         if(lo>hi) return nullptr;
//         int mid = lo+(hi-lo)/2;
//         node = new TreeNode(nums[mid]);
//         build(node->left,nums,lo,mid-1);
//         build(node->right,nums,mid+1,hi);
//         return node;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         TreeNode* root;
//         build(root,nums,0,nums.size()-1);
//         return root;
//     }
// };
class Solution {
public:
    void helper(TreeNode* &a, int low, int high, vector<int> &nums){
        if(low>high) return;
        int mid=low+(high-low)/2;
        a= new TreeNode(nums[mid]);
        helper(a->left,low, mid-1, nums);
        helper(a->right,mid+1, high, nums);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root;
        helper(root, 0, nums.size()-1, nums);
        return root;
    }
};