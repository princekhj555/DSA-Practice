/*82. Remove Duplicates from Sorted List II*/

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
       ListNode* tmp=new ListNode();
        tmp->next=head;
        ListNode* prev=tmp;
        while(head!=NULL){
            if(head->next!=NULL && head->val ==head->next->val){
                //skip the nodes of same values
                while(head->next!=NULL && head->val ==head->next->val)
                    head=head->next;
                prev->next=head->next;
            }else prev=prev->next;
            head=head->next;
        }
        return tmp->next;
    }
};