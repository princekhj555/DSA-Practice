/*107. Binary Tree Level Order Traversal II*/

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> sol;
        if(!root) return sol;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int> temp;
            while(count--){
                TreeNode *curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            sol.push_back(temp);
        }
         reverse(sol.begin(),sol.end()); 
     return sol;    
        
    }
};