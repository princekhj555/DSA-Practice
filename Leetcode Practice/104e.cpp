/* 104. Maximum Depth of Binary Tree*/

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
// ##############################################################################################################3

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        else
        return max(maxDepth(root->left),maxDepth(root->right))+1;
        
    }
};


// #############################################################################################################

class Solution {
public:
    int maxDepth(TreeNode* root) {
    if(root==NULL) return 0;
     int ls=maxDepth(root->left);
     int rs=maxDepth(root->right);
     return max(ls,rs)+1;
    }
};

// ################################################################################################################33

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
    void dfs(TreeNode* root, int &sol,int tmp){
        if(root==NULL){
            return;
        }
        tmp++;
        if(root->left==NULL and root->right==NULL){
            sol=max(sol,tmp);
        }
        dfs(root->left,sol,tmp);
        dfs(root->right,sol,tmp);
    }
    int maxDepth(TreeNode* root) {
        int sol=0;
        dfs(root,sol,0);
        return sol;
    }
};