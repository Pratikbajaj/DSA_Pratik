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
    ListNode* mergeTwo(ListNode* a,ListNode* b){
        ListNode dummy;
        ListNode* tail = &dummy;

        while(a!=nullptr && b!=nullptr){
            if(a->val < b->val){
                tail->next = a;
                a = a->next;
            }
            else{
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }

        if(a!=nullptr){
            tail->next = a;
        }else{
            tail->next = b;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = nullptr;
        for(int i=0;i<lists.size();i++){
            result = mergeTwo(result,lists[i]);
        }
        return result;
    }
};