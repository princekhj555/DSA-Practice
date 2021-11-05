/*404. Sum of Left Leaves*/

class Solution {
public:
    int left(TreeNode* root){
        if (!root) return 0;
        if ((!root->left) && (!root->right))
            return root->val;
        return sumOfLeftLeaves(root->right) + left(root->left);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if ((!root) || ((!root->left) && (!root->right)))
            return 0;  
        return sumOfLeftLeaves(root->right) + left(root->left);
    }
};