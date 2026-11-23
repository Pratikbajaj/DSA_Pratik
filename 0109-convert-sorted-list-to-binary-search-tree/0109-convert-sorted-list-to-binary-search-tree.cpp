/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* bst(vector<int> &nums,int lo,int hi){
        if(lo>hi){
            return NULL;
        }
        int mid = lo + (hi-lo)/2;
        TreeNode* r = new TreeNode(nums[mid]);
        r->left = bst(nums,lo,mid-1);
        r->right = bst(nums,mid+1,hi);
        return r;
    }
    TreeNode* sortedListToBST(ListNode* head) {
           vector<int> v;
           for(ListNode* i=head;i;i=i->next){
             v.push_back(i->val);
           }
            return bst(v,0,v.size()-1);
    }
};