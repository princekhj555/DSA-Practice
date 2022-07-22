/**
 //92. Reverse Linked List II

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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
         ListNode* curr=head;
        ListNode* left=new ListNode();
        left->next=head;
        ListNode* ans = left;
        
        int n=l-1;
        while(n>0 && n--){
            curr=curr->next;
            left=left->next;
        }
        
        stack<ListNode*> s;
        n=r-l+1;
        while(n>0 && n--){
            s.push(curr);
            curr=curr->next;
        }
        
        while(s.size()){
            ListNode* temp = s.top();s.pop();
            left->next=new ListNode(temp->val);
            left=left->next;
        }
        left->next=curr;
        return ans->next;
    }
};