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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* sol=solve(nums,0,nums.size()-1);
        return sol;
    }
    TreeNode* solve(vector<int>nums,int start,int end){
        if(start>end) return NULL;
        if(start==end) new TreeNode(nums[start]);
        int idx=maxNum(nums,start,end);
        TreeNode* root=new TreeNode(nums[idx]);
        root->left=solve(nums,start,idx-1);
        root->right=solve(nums,idx+1,end);
        return root;
    }
    int maxNum(vector<int> nums,int start,int end){
        int idx=-1;
        int cmp=INT_MIN;
        for(int i=start;i<=end;i++){
            if(nums[i]>cmp){
                idx=i;
                cmp=nums[i];
            }
        }
        return idx;
    }
};