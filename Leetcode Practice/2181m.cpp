/*2181. Merge Nodes in Between Zeros*/

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
    ListNode* mergeNodes(ListNode* head) {
        if(!head ) return NULL;
        
        ListNode* sol=new ListNode();
        ListNode* tmp=head,*ans=sol;
        int t=0;
        while(tmp !=NULL)
        {
            if(tmp->val==0)
            {
                ListNode *tt=new ListNode(t);
                sol->next=tt;
                sol=sol->next;
                t=0;
            }
            t+=tmp->val;
            tmp=tmp->next;
        }
        return ans->next->next;
    }
};