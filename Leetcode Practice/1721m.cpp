/*1721. Swapping Nodes in a Linked List*/

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
    ListNode* swapNodes(ListNode* head, int k) {
        int c=0;
        ListNode* count=head;
        while(count!=NULL)
        {
            count=count->next;
            c++;
        }
        int k1=c-k;
        int c1=0,c2=0;
        ListNode* strt=head;
        ListNode* end=head;
        while(c1!=k-1)
        {strt=strt->next;c1++;
            
        }
        while(c2!=k1)
        {
            end=end->next;c2++;
        }
        int temp=strt->val;
        strt->val=end->val;
        end->val=temp;
        return head;
    }
};