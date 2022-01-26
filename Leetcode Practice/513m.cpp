/*513. Find Bottom Left Tree Value*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {   int cnt=q.size();
            vector<int> t;
            while(cnt--)
            {
                TreeNode* temp=q.front(); q.pop();
                t.push_back(temp->val);
                
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            ans=t[0];
            t.clear();
        }
        return ans;
    }
};