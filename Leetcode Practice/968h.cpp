//968. Binary Tree Cameras

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
    // Node is itself a camera - 0
    // Node is needed a camera - -1
    // Node is already covered - 1
    int camera=0;
    int rec(TreeNode* root){
        if (root == NULL) return 1;   // Already covered
        int ob1 = rec(root->left);   // Extracting value from my left.
        int ob2 = rec(root->right); // Extracting value from my right.
        if (ob1==-1 || ob2==-1){   // If my any child needs a camera, then I must install a camera.
            camera++;
            return 0;    // 0 means, I have installed a camera.
        }
        if (ob1==0 || ob2==0)   // If my any child has already installed a camera, then I am already covered.
            return 1;
        return -1;  // Neither I have camera nor I have covered, it means I need a camera, so I will return -1
    }
    int minCameraCover(TreeNode* root) {
        int x=rec(root);
        if (x==-1) camera++;  // If root needs a camera, then it must be given a camera.
        return camera;
    }
};