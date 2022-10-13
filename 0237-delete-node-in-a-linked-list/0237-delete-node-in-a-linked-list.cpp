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
    void deleteNode(ListNode* node) {
        
        ListNode* dummy = node;
        ListNode* prev;
        
        while(dummy->next!=NULL){
            dummy->val = dummy->next->val;
            prev = dummy;
            dummy = dummy->next;
        }
        
        prev->next = dummy->next;
        
    }
};