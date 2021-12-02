/*328. Odd Even Linked List*/

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
   void solve(ListNode* end,ListNode* temp,int c)
    {
        while(c>0)
        {
            end->next = temp->next;
            temp->next = temp->next->next;
            end->next->next = nullptr;
            temp = temp->next;
            end=end->next;
            c--;
        }
    }
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return nullptr;
        else if(head->next == nullptr) return head;
        else if(head->next->next == nullptr) return head;
        ListNode* temp=head;
        ListNode* end=head;
        int count=0;
        while(end->next!=NULL)
        {
            end = end->next;
            count++;
        }
        int c=0;
        if(count%2 == 0)
        {
            c = count/2;
        }
        else
        {
            c = count/2 + 1;
        }
        solve(end,temp,c);
        return head;
    }
};