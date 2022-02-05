/*1261. Find Elements in a Contaminated Binary Tree*/
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
class FindElements {
public:
    unordered_set<int>st;
    void recreate(TreeNode* root)
    {
        if(!root) return;
        if(root->right!=NULL) {root->right->val=2*root->val+2; st.insert(2*root->val+2);}
        if(root->left!=NULL){ root->left->val=2*root->val+1; st.insert(2*root->val+1);}
        recreate(root->left);
        recreate(root->right);
    }
    FindElements(TreeNode* root) {
        st.insert(0);
        root->val=0;
        recreate(root);
    }
    
    
    bool find(int target) {
        return st.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */