/*2095. Delete the Middle Node of a Linked List*/
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

    ListNode* deleteMiddle(ListNode* head) {
         if(!head->next) return NULL;
        ListNode* slow,*fast;
        slow=fast=head;
        while(fast && fast->next) {
            if(fast != head) slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = slow->next->next;
        return head;    
        
    }
};