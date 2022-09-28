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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        
        int len=0;
        
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            len++;
        }
        if(len == n)return head->next;
        temp = head;
        int i=0;
        int k = len-n-1;
        while(i<k){
            temp = temp->next;
            i++;
        }
        
        if(temp->next != NULL)temp->next = temp->next->next;
        
        return head;
    }
};