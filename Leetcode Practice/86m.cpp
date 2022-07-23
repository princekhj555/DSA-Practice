//86. Partition List
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *prev,*last,*n,*t;
        
        prev = NULL;
        last = NULL;
        
        n = head;
        
        while(n!=NULL){
            if(x>n->val && prev==NULL)
                prev = n;
            
            if(x<=n->val && last==NULL)
                last = n;
            
            n = n->next;
        }
        
        if(prev==NULL || last==NULL)
            return head;
        
        n = head;
        head = prev;
        t = last;
        
        cout<<prev->val<<" "<<last->val<<"\n";
        
        while(n!=NULL){
            if(x>n->val && head!=n){
                prev->next = n;
                if(n!=NULL)
                    prev = n;
            }  
            
            if(x<=n->val && t!=n){
                last->next = n;
                last = n;
            } 
            
            n = n->next;
           
        }
        cout<<prev->val<<head->val<<"\n";
        prev->next = t;
        last->next = NULL;
        return head;
    }
};