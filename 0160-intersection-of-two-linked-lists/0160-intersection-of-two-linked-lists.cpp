/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1!=nullptr){
            temp2 = headB;
            while(temp2!=nullptr){
                if(temp1==temp2){
                    return temp1;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        return 0;
    }
};