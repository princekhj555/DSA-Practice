/*437. Path Sum III*/
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
    int solve(TreeNode* root,int sum){
        if(!root) return 0;
        int ans=0;
        if(root->val==sum) ans++;
        ans+=solve(root->left,sum-root->val);
        ans+=solve(root->right,sum-root->val);
        return ans;
    }
    int pathSum(TreeNode* root, int t) {
        if(!root) return 0;
        return pathSum(root->left,t)+solve(root,t)+pathSum(root->right,t);
    }
};