/*1161. Maximum Level Sum of a Binary Tree*/
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
    int maxLevelSum(TreeNode* root) {
       if(!root){
            return 0;
        }
        int ans = INT_MIN;
        int minlevel = 0, orglevel = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int k = q.size();
            int sum = 0;
            orglevel++;
            for(int i=0; i<k; i++){
                TreeNode* curr = q.front();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                q.pop();
                sum += curr->val;
            }
           if(sum > ans){
               ans = sum;  minlevel = orglevel;
           }
        }
        return minlevel;
    }
};