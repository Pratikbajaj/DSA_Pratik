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
        ListNode* temp = head;
        ListNode* l2 =nullptr;
        ListNode* newhead=nullptr;
        while(temp!=nullptr){
            ListNode* next = temp->next;
            if(temp->next!=nullptr && temp->val==next->val){
                temp=next;
                continue;
            }
            if(l2==nullptr){
                    l2=temp;
                    newhead=l2;
            }
            else{
                    l2->next = temp;
                    l2 = temp;
            }
            temp = temp->next;
        }
        return newhead;   
    }
};