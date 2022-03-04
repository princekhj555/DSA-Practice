/*2130. Maximum Twin Sum of a Linked List*/

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
  
    int pairSum(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        
        int maxsum = INT_MIN;
        int n = ans.size();
        
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            sum = ans[i] + ans[n-1-i];
            maxsum = max(maxsum,sum);
        }
        
        return maxsum;
        
    }
};