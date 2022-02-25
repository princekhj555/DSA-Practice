/*148. Sort List*/

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
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow=head,* fast=head;
        
        while(!fast and !fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    
    ListNode* mergeList(ListNode* l1,ListNode* l2){
         if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val>l2->val) swap(l1,l2); //l1 should be lesser value
        ListNode* ans=l1;
        while(l1 and l2)
        {
            ListNode *temp=NULL;
            while(l1 and l1->val <= l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return ans;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* mid=getMid(head);
        
        ListNode *r=sortList(mid->next);
		mid->next=nullptr;
		ListNode *l=sortList(head);
		return mergeList(l,r);
    
    }
};