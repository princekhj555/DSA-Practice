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
