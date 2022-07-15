//105. Construct Binary Tree from Preorder and Inorder Traversal

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
    
     int position(vector<int>& inorder, int inorderStart, int inorderEnd, int key){
        for(int pos = inorderStart;pos<=inorderEnd;pos++){
            if(inorder[pos]==key) return pos;
        }
        return -1;
    }
    
    TreeNode* formTree(vector<int>& preorder, vector<int>& inorder, int &preOrderIndex, int inorderStart, int inorderEnd){
        if(preOrderIndex==preorder.size() || inorderStart>inorderEnd) return NULL;
        
        int node = preorder[preOrderIndex++];
        TreeNode* root = new TreeNode(node);
        
        int pos = position(inorder,inorderStart,inorderEnd,node);
        root->left = formTree(preorder,inorder,preOrderIndex,inorderStart,pos-1);
        root->right = formTree(preorder,inorder,preOrderIndex,pos+1,inorderEnd);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        return formTree(preorder,inorder,index,0,inorder.size()-1);
    }
};