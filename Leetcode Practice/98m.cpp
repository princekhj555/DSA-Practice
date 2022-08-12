/*98. Validate Binary Search Tree*/

class Solution {
public:
    TreeNode*prev=NULL;
    
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        
        if(!isValidBST(root->left)) return false;
        
        if(prev!=NULL && root->val <= prev->val) return false;
        
          prev=root;
        
        if(!isValidBST(root->right)) return false;
        
        return true;
        
        
    }
};

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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
    bool helper(TreeNode* root, long long low, long long high){
        if(!root)   return true;
        if(root->val<=low || root->val>=high)   return false;
        return helper(root->left, low, root->val) && 
                helper(root->right, root->val, high);            
    }

    bool isValidBST(TreeNode* root) {
        if(!root)   return true;
        // used long long 
        return helper(root, -21474836470, 21474836470);
    }
};