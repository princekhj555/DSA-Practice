/*129. Sum Root to Leaf Numbers*/

class Solution {
public:
    void solve(TreeNode* root,int val,int& ans){
        if(!root)return ;
        val *= 10;
        val+=root->val;
        if(!root->left && !root->right){
            ans+=val;
            return;
        }
        solve(root->left,val,ans);
        solve(root->right,val,ans);
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        solve(root,0,ans);
        return ans;
    }
};