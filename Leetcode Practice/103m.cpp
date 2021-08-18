/*103. Binary Tree Zigzag Level Order Traversal*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        if(!root) return sol;
        int k=1;
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            while(cnt--){
                TreeNode* curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            if(k==1)
                {sol.push_back(temp); k=0;}
            else {
                reverse(temp.begin(),temp.end());
                sol.push_back(temp); k=1;
            }
            temp.clear(); 
        }
        return sol;
    }
};