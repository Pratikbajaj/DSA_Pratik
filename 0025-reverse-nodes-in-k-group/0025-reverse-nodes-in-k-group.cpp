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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            ListNode* KthNode = getKNode(temp,k);
            if(KthNode==nullptr){
                if(prev) prev->next = temp;
                break;
            }
            ListNode* nextNode = KthNode->next;
            KthNode->next = nullptr;
            reverseNode(temp);
            if(temp==head){
                head = KthNode;
            }
            else{
                prev->next = KthNode;
            }
            prev = temp;
            temp = nextNode;
        }
        return head;
    }
    ListNode* getKNode (ListNode* temp,int k){
        k-=1;
        while(temp!=nullptr && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseNode(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};