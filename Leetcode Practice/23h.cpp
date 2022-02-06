/*23. Merge k Sorted Lists*/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        vector<int> ele;
        for(int i=0;i<k;i++){
            ListNode *tmp=lists[i];
            while(tmp!=NULL)
            {
                ele.push_back(tmp->val);
                tmp=tmp->next;
            }
        }
        sort(ele.begin(),ele.end());
        ListNode *ans=new ListNode();
        ListNode *t=ans;
        for(int i=0;i<ele.size();i++)
        {
           ListNode *xx=new ListNode(ele[i]);
            t->next=xx;
            t=t->next;
        }
        return ans->next;
    }
};