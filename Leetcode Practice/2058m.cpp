/*2058. Find the Minimum and Maximum Number of Nodes Between Critical Points*/

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp2=head->next;
        vector<int> v;
        int i=1;
        while(temp2->next!=NULL)
        {
            if(temp2->val>temp->val && temp2->val>temp2->next->val || temp2->val<temp->val && temp2->val<temp2->next->val )
            {
                v.push_back(i);
            }
            i++;
            temp2=temp2->next;
            temp=temp->next;
        }
        if(v.size()<2)
        {
            return {-1,-1};
        }
        int mini=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            mini=min(mini,v[i]-v[i-1]);
        }
        return {mini,v[v.size()-1]-v[0]};
        
    }
};