/*1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode* cl,TreeNode* *sol,TreeNode * target)
    {
        if(cl==NULL) return;
        if(cl->val==target->val)
        {
            *sol=cl;
            return;
        }
        solve(cl->left,sol,target);
        solve(cl->right,sol,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return NULL;
        TreeNode* sol=NULL;
        solve(cloned,&sol,target);
        return sol;
    }
};