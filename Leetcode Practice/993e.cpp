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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            bool xx=false;
            bool yy=false;
            for(int i=0;i<sz;i++){
                TreeNode* tmp=q.front();
                q.pop();
                if(tmp->val==x) xx=true;
                if(tmp->val==y) yy=true;
                
                if(tmp->left && tmp->right){
                if((tmp->left->val==x && tmp->right->val==y)|| (tmp->left->val==y && tmp->right->val==x))
                    return false;
                }
                
                if(tmp->left) q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
                
            }
           if(xx and yy) return true; 
        }
        return false;
    }
};