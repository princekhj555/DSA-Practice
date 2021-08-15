/*203. Remove Linked List Elements*/

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->val==val && head->next==NULL) return NULL;
        if(head->val==val){
            while(head!=NULL && head->val==val)
                    {
                    head=head->next;
                    }
            if(head==NULL)
                    {
                        return head;
                    }
            }
        ListNode* tmp=head;
        while(tmp->next!=NULL){
            if(tmp->next->val==val)
                tmp->next=tmp->next->next;
            else tmp=tmp->next;
        }
        return head;
    }
};

/*#######################################Fastest Solution#####################################################*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        
    // ITERATIVE SOLUTION   
        
       ListNode* temp = head;
        
        while(head->next){
            
            if(head->next->val == val){
             
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        
        if(temp->val == val)
            temp = temp->next;
        
        return temp;
    }
};
/***********************************************************************************************/        
        // RECURSIVE SOLUTION
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;       
        if(head->val==val){
//              breaking the link of the node with value val
            
           return  removeElements(head->next, val);
        }
        else{
            
            head->next=removeElements( head->next,  val);
        }
        
        return head;
    }
};
/*####################################################################################################################*/