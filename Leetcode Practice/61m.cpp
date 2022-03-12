/*61. Rotate List*/

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
     int length_list(ListNode* head){
        if(head==NULL)
            return 0;
        return 1+ length_list(head->next);
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0)
            return head;
        int n=length_list(head);
        k %=n;
        int t=n-k;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=head;
        temp=head;
        int c=0;
        while(c<t){
            temp=temp->next;
            c++;
        }
        ListNode* temp1=head;
        while(temp1->next!=temp){
            temp1=temp1->next;
        }
        temp1->next=NULL;
        return temp;
        
    }
};