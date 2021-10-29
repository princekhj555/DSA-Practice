//199. Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> sol;
        if(!root) return sol;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> bp;
            while(n--){
                TreeNode* tmp=q.front();
                q.pop();
                bp.push_back(tmp->val);
                if(tmp->left!=NULL) q.push(tmp->left);
                if(tmp->right!=NULL)q.push(tmp->right);
            }
            sol.push_back(bp[bp.size()-1]);
            bp.clear();
        }
        return sol;
    }
};