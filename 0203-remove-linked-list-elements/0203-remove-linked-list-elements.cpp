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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val == val){
            head = head->next;
        }
        if(head == nullptr) return head;
        ListNode* temp = head;
        ListNode* ne = temp->next;
        ListNode* prev = head;
        while(temp!=nullptr){
            if(temp->val == val){
                prev->next = ne;
                temp = ne;

            }
            else{
                prev = temp;
                temp = ne;
            }
            if (temp!=nullptr){
                ne = temp->next;
            }
        }   
        return head;
    }
};