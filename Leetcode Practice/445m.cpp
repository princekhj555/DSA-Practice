/*445. Add Two Numbers II*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st;
        stack<int> s;
        ListNode*  ans=new ListNode(0);
        while(l1){
            st.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s.push(l2->val);
            l2=l2->next;
        }
        int sum=0;
        while(!s.empty() || !st.empty()){
            if(!st.empty()){sum+=st.top(); st.pop();}
            if(!s.empty()){sum+=s.top(); s.pop();}
            ans->val=sum%10;
            sum/=10;
            ListNode * head=new ListNode(sum);
            head->next=ans;
            ans=head;
        }
        return ans->val==0 ? ans->next:ans;
    }
};