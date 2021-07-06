/*141. Linked List Cycle  */

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
    bool hasCycle(ListNode *head) {
    if(!head) return false;
     ListNode* onestep=head,*twostep=head->next;
    while(onestep&&twostep&&twostep->next)
        {
        if(onestep==twostep)
            {
            return 1;
            }
        onestep=onestep->next;
        twostep=twostep->next->next;
        }
    return false;
    
}
};