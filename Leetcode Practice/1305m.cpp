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
// 1305. All Elements in Two Binary Search Trees
class Solution {
public:
   void inorder(TreeNode* root,vector<int>&ino){
        if(root==NULL) return;
        inorder(root->left,ino);
        ino.push_back(root->val);
        inorder(root->right,ino);
    }
    void Merge(vector<int>bst1,vector<int>bst2,vector<int>&Twobst){
        int i=0,j=0;
        int n=bst1.size();
        int m=bst2.size();
        while(i<n && j<m){
          if(bst1[i]<=bst2[j]){
              Twobst.push_back(bst1[i]);
              i++;
           }
            else{
              Twobst.push_back(bst2[j]);
                j++;
            }
        }
        while(i<n){
            Twobst.push_back(bst1[i]);
            i++;
        }
        while(j<m){
            Twobst.push_back(bst2[j]);
            j++;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>bst1,bst2,Twobst;
        inorder(root1,bst1);
        inorder(root2,bst2);
        Merge(bst1,bst2,Twobst);
        return Twobst;
    }
};