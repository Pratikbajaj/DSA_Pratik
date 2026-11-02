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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dumy = new ListNode(0);
        dumy->next = head;
        ListNode* left = dumy; 
        ListNode* temp = head;
        while(temp!=nullptr){
            if(temp->next!=nullptr && temp->val==temp->next->val){
                int value = temp->val;
                while(temp!=nullptr && temp->val==value){
                    ListNode* dup = temp;
                    temp = temp->next;
                    delete dup;
                }
                left->next = temp;
            }
            else{
                left = temp;
                temp = temp->next;
            }
        }
        head = dumy->next;
        delete dumy;
        return head;
    }
};