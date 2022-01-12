/*1022. Sum of Root To Leaf Binary Numbers*/
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
    void dfs(TreeNode* root,int &sol,int tmp)
    {
       tmp=tmp*2+root->val;
        if(!root->left and !root->right)
        {
           sol+=tmp;
            return;
        }
        if(root->left) dfs(root->left,sol,tmp);
        if(root->right) dfs(root->right,sol,tmp);
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root) return 0;
        int sol=0,tmp=0;
        dfs(root,sol,tmp);
        return sol;
    }
};