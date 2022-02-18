/*1315. Sum of Nodes with Even-Valued Grandparent*/

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
    void sumg(TreeNode *root,TreeNode *p,TreeNode *gp,int &sum){
        if(root==NULL){
            return;
        }
     
        if(gp!=NULL && root!=NULL){
            if(gp->val%2==0){
                sum+=root->val;
            }
        }
        sumg(root->left,root,p,sum);
        sumg(root->right,root,p,sum);  
        
    }
    
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum =0;
        
        sumg(root,NULL,NULL,sum);
        
        return sum;

    }
};