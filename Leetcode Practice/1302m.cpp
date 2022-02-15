/*1302. Deepest Leaves Sum*/

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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root) return 0;
        int sum=0;
        q.push(root);
        vector<int> arr;
        while(!q.empty())
        {
            
             int cnt=q.size();
            while(cnt--)
            {
                TreeNode* tmp=q.front(); q.pop();
                arr.push_back(tmp->val);
                if(tmp->left!=NULL) q.push(tmp->left);
                if(tmp->right!=NULL) q.push(tmp->right);
            }
            if(q.empty())
                break;
            arr.clear();
        }
        for(auto a: arr)
                sum+=a;
        return sum;
    }
};