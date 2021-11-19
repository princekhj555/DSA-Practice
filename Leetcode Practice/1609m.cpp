/*1609. Even Odd Tree*/

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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root || !root->left and !root->right and root->val%2!=0) return true;
        q.push(root);
        int n=1;
        vector<int>vec;
        while(!q.empty()){
            int k=q.size();
            while(k--){
                TreeNode* tmp=q.front();
                q.pop();
                if(n%2==0 and tmp->val%2!=0) return false;
                if(n%2!=0 and tmp->val%2==0) return false;
                vec.push_back(tmp->val);
                if(tmp->left!=NULL) q.push(tmp->left);
                if(tmp->right!=NULL) q.push(tmp->right);
            }
            if(n%2==0)
            {
                for(int i=1;i<vec.size();i++)
                {
                    if(vec[i-1]<=vec[i])
                    {
                        return false;
                    }
                }
            }
            else{
                for(int i=1;i<vec.size();i++)
                {
                    if(vec[i-1]>=vec[i])
                    {
                        return false;
                    }
                } 
            }
            n++;
            for(auto a: vec)
                cout<<a<<" ";
            cout<<endl;
            vec.clear();
        }
        return true;
    }
};