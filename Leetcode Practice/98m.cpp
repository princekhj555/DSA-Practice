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